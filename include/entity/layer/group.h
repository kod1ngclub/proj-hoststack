#pragma once

// entity
#include "item.h"

// shared type
#include "../shared/list.h"

typedef const char* const GroupId;
typedef const char* const GroupName;

typedef struct {
    const GroupId id;
    const GroupName name;

    LIST(ItemId, items);
} Group;
