//
// Created by linshujie on 2024/3/18.
//
#include "stdio.h"
#include "android/log.h"
void printnum(int a) {
//    printf("%d\n", a);
    __android_log_print(ANDROID_LOG_DEBUG, "linshujie", "%d", a);
}