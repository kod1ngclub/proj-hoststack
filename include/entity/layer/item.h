#pragma once

// shared type
#include "../shared/bool.h"

typedef const char* const ItemId;
typedef const char* const ItemContent;

typedef struct {
    const ItemId id;
    
    const ItemContent content;
    const bool deprecated;
} Item;
