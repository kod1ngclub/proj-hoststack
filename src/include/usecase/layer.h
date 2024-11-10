#pragma once

// entity
#include "../entity/layer/layer.h"
#include "../entity/layer/group.h"
#include "../entity/layer/item.h"

// usecase error model
#include "shared/error.h"

// REF define util
#include "shared/ref.h"

// usecase functions
Result ReadLayerIds(
    REF_LIST(LayerId, layers)
);

Result ReadLayer(
    LayerId id,

    REF(Layer, layer)
);

Result ReadtGroup(
    GroupId id,

    REF(GroupId, group)
);

Result ReadItem(
    ItemId id,

    REF(Item, item)
);

Result CreateItem(
    LayerId layer_id,
    GroupId group_id,
    ItemContent content,

    REF(Item, item)
);

Result DeprecateItem(
    ItemId id,

    REF(Item, item)
);
