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

void dummy_computation() {
    uint64_t num = get_time_nanoseconds();
    for (int i = 0; i < 0xffffff; i++) {
        num += i;
    }
    //printf("Computation result: %llu\n", num);
}

uint8_t deadloop_flag = 0;

void measure_time_thread() {
    while (1) {
        uint64_t start_time = get_time_nanoseconds();
        dummy_computation();
        uint64_t end_time = get_time_nanoseconds();
        printf("deadloop_flag: %d, Time taken: %llu ns\n", deadloop_flag, end_time - start_time);
        sleep(1);
    }
}

int main() {
    printf("Please set affinity for this process to 1 single core before proceeding.\nPress Enter to continue...\n");
    getc(stdin);

    pthread_t thread_id;
    if (pthread_create(&thread_id, NULL, (void *)measure_time_thread, NULL) != 0) {
        perror("Failed to create thread");
        return EXIT_FAILURE;
    }
    printf("Work thread started.\n\n");

    sleep(5);
    
    printf("\nMain will enter dead loop now.\n");
    deadloop_flag = 1;
    while(1);

    return 0;
}