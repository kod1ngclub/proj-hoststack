#pragma once

#include "../shared/bool.h"

typedef const char* const ItemId;
typedef const char* const ItemContent;

typedef struct {
    ItemId id;
    
    ItemContent content;
    const bool deprecated;
} Item;
