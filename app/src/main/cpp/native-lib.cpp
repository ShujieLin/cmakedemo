#include <jni.h>
#include <string>
#include "test.h"

extern "C" JNIEXPORT jstring JNICALL
Java_com_linshujie_cmakedemo_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    printnum(1);
    return env->NewStringUTF(hello.c_str());
}