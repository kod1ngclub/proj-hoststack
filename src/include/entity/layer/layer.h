#pragma once

#include "group.h"
#include "../shared/list.h"

typedef const char* const LayerId;
typedef const char* const LayerName;

typedef struct {
    LayerId id;
    LayerName name;

    LIST(GroupId, groups);
} Layer;
