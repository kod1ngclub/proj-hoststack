#pragma once

#include "item.h"

typedef const char* const GroupName;

typedef struct {
    GroupName name;

    const Item* items;
    const int size;
} Group;

