#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>
#include <unistd.h>
#include <pthread.h>

uint64_t get_time_nanoseconds() {
    struct timespec ts;
    clock_gettime(CLOCK_MONOTONIC, &ts);
    return ts.tv_sec * 1000000000 + ts.tv_nsec;
}

void dummy_computation(uint64_t amount) {
    uint64_t num = get_time_nanoseconds();
    for (uint64_t i = 0; i < amount; i++) {
        num += i;
    }
    //printf("Computation result: %llu\n", num);
}

uint64_t clock_counter = 0;
uint64_t start_time = 0;
uint64_t clock_err = 0;

void clock_service()
{
    while(1) {
        sleep(1);
        clock_counter += 1000000000;
    }
}

int main() {
    printf("Please set affinity for this process to 1 single core before proceeding.\nPress Enter to continue...\n");
    getc(stdin);

    pthread_t thread_id;
    if (pthread_create(&thread_id, NULL, (void *)clock_service, NULL) != 0) {
        perror("Failed to create thread");
        return EXIT_FAILURE;
    }
    printf("clock service thread started.\n\n");

    clock_counter = 0;
    start_time = get_time_nanoseconds();
    printf("Testing clock service with main idle\n");
    for(int i = 0; i < 5; i++) {
        sleep(1);
        clock_err = (get_time_nanoseconds() - start_time) - clock_counter;
        printf("Clock service clock error %llu ns\n", clock_err);
    }
    printf("Average clk error: %llu ns / s\n", clock_err / 5);

    clock_counter = 0;
    start_time = get_time_nanoseconds();
    printf("\nTesting clock service with main workload 0xffffffff\n");
    for(int i = 0; i < 5; i++) {
        dummy_computation(0xffffffff);
        clock_err = (get_time_nanoseconds() - start_time) - clock_counter;
        printf("Clock service clock error %llu ns\n", clock_err);
    }
    printf("Average clk error: %llu ns / s\n", clock_err / ((get_time_nanoseconds() - start_time) / 1000000000));

    return 0;
}