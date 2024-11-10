#pragma once

// entity
#include "group.h"

// shared type
#include "../shared/list.h"

typedef const char* const LayerId;
typedef const char* const LayerName;

typedef struct {
    const LayerId id;
    const LayerName name;

    LIST(GroupId, groups);
} Layer;
