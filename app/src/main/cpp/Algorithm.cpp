//
// Created by Administrator on 2021/10/11.
//

#include <cstring>
#include "Algorithm.h"

Algorithm::Algorithm() {
    LOGD("Algorithm::Algorithm()");
}

Algorithm::~Algorithm() {
    LOGD("Algorithm::~Algorithm()");
}

int Algorithm::Init() {
    LOGD("Algorithm::Init()");
    return 0;
}

int Algorithm::UnInit() {
    LOGD("Algorithm::Init()");
    return 0;
}

int Algorithm::Process(const char *input, char *output) {
    LOGD("Algorithm::Process()");
    // 简单拼接，没有检查指针
    strcpy(output, input);
    strcat(output, "Process Done.");
    return 0;
}