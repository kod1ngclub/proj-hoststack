#pragma once

#include "item.h"
#include "../shared/list.h"

typedef const char* const GroupId;
typedef const char* const GroupName;

typedef struct {
    GroupId id;
    GroupName name;

    LIST(ItemId, items);
} Group;
