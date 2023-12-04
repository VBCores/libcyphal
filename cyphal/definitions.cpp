#include "definitions.h"

#ifdef __linux__

uint64_t micros_64() {
    struct timespec ts {};
    timespec_get(&ts, TIME_UTC);
    uint64_t us = SEC_TO_US((uint64_t)ts.tv_sec) + NS_TO_US((uint64_t)ts.tv_nsec);
    return us;
}

#endif
