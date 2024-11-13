#pragma once

#include "item.h"

typedef const char* const LayerName;

typedef struct {
    LayerName name;

    const Item* items;
    const int size;
} Layer;
