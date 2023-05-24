#ifndef JOINUI_H
#define JOINUI_H

#include "Join.h"
#include <cstdio>

class JoinUI {
public:
    void start(Join& j, FILE* in_fp, FILE* out_fp);
};

#endif
