#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>
#include <unistd.h>

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
    sleep(1);
    clock_counter += 1000000000;
}

int main() {
    clock_counter = 0;
    start_time = get_time_nanoseconds();
    printf("Testing workload 1 with workload 2 = 0xffff\n");
    for(int i = 0; i < 5; i++) {
        // emulate workload 1
        clock_service();
        clock_err = (get_time_nanoseconds() - start_time) - clock_counter;
        printf("Workload 1 clock error %llu ns\n", clock_err);
        // emulate workload 2
        dummy_computation(0xffff);
    }

    clock_counter = 0;
    start_time = get_time_nanoseconds();
    printf("\nTesting workload 1 with workload 2 = 0xfffff\n");
    for(int i = 0; i < 5; i++) {
        // emulate workload 1
        clock_service();
        clock_err = (get_time_nanoseconds() - start_time) - clock_counter;
        printf("Workload 1 clock error %llu ns\n", clock_err);
        // emulate workload 2
        dummy_computation(0xffffff);
    }

    return 0;
}