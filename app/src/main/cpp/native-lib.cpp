#include <jni.h>
#include <string>
#include "Algorithm.h"

extern "C"
JNIEXPORT jstring JNICALL
Java_com_hd_ndkcrash_MainActivity_doProcess(JNIEnv *env, jobject thiz, jstring input_) {
    const char *input = env->GetStringUTFChars(input_, 0);
    LOGD("MainActivity_doProcess input = %s", input);
    char output[1024];

    //调用 SDK
    Algorithm* pAlgorithm = new Algorithm();
    pAlgorithm->Init();
//    pAlgorithm->Process(input, output);
    //传入空指针，制造 crash
    pAlgorithm->Process(input, NULL);
    pAlgorithm->UnInit();
    delete pAlgorithm;

    LOGD("MainActivity_doProcess output = %s", output);

    env->ReleaseStringUTFChars(input_, input);

    return env->NewStringUTF(output);
}