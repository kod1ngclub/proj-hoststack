#pragma once

#include "log.h"

typedef const char* const ForestName;

typedef struct {
    ForestName name;

    const Log* items;
    const int size;
} Forest;

// DOMAIN:
// 'Forest' -> a set of certain number of 'Log'
