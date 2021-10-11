//
// Created by Administrator on 2021/10/11.
//

#ifndef NDKCRASH_ALGORITHM_H
#define NDKCRASH_ALGORITHM_H

#include "AndroidLog.h"

class Algorithm
{
public:
    Algorithm();
    ~Algorithm();

    int Init();
    int UnInit();

    int Process(const char* input, char* output);

};


#endif //NDKCRASH_ALGORITHM_H
