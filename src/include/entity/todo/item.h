#pragma once

#include "../shared/daterange.h"
#include "../shared/bool.h"

typedef const char* const ItemUID;
typedef const char* const ItemContent;

typedef struct {
    ItemUID uid;
    ItemContent content;

    const DateRange range;
    const bool deprecated;
} Item;

