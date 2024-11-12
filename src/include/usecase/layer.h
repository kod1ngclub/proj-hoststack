#pragma once

#include "../entity/layer/layer.h"
#include "../entity/layer/group.h"
#include "../entity/layer/item.h"

#include "../service/store.h"

#include "shared/error.h"

#include "shared/dep.h"
#include "shared/ref.h"

UsecaseResult ReadLayerIds(
    DEP(Store, layerstore),

    REF_LIST(LayerId, layers)
);

UsecaseResult ReadLayer(
    DEP(Store, layerstore),
    LayerId id,

    REF(Layer, layer)
);

UsecaseResult ReadtGroup(
    DEP(Store, groupstore),
    GroupId id,

    REF(GroupId, group)
);

UsecaseResult ReadItem(
    DEP(Store, itemstore),
    ItemId id,

    REF(Item, item)
);

UsecaseResult CreateItem(
    DEP(Store, groupstore),
    DEP(Store, itemstore),
    GroupId group_id,
    ItemContent content,

    REF(Item, item)
);

UsecaseResult DeprecateItem(
    DEP(Store, groupstore),
    DEP(Store, itemstore),
    ItemId id,

    REF(Item, item)
);
