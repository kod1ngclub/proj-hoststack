#pragma once

#include "../shared/daterange.h"
#include "../shared/bool.h"

typedef const char* const ItemId;
typedef const char* const ItemContent;

typedef struct {
    ItemId id;
    
    ItemContent content;
    const DateRange range;
    const bool deprecated;
} Item;
