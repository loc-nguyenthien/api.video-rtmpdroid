#pragma once
#include <pthread.h>

typedef struct rtmp_context {
    RTMP *rtmp;
    pthread_mutex_t mutex;
} rtmp_context;
