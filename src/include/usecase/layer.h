#pragma once

#include "../entity/layer/layer.h"
#include "../entity/layer/item.h"
#include "../entity/rule/user.h"

#include "../service/layer.h"
#include "../service/permission.h"

#include "shared/error.h"

#include "shared/dep.h"
#include "shared/ref.h"

UsecaseResult ReadLayerIndex(
    DEP(LayerStore, layerstore),
    DEP(PermissionStore, permstore),

    User user,

    REF_LIST(LayerName, layernames)
);

UsecaseResult ReadLayer(
    DEP(LayerStore, layerstore),
    DEP(PermissionStore, permstore),

    User user,
    LayerName name,

    REF(Layer, layer)
);

UsecaseResult CreateItem(
    DEP(LayerStore, layerstore),
    DEP(PermissionStore, permstore),

    User user,
    LayerName layername,
    ItemContent content,

    REF(Layer, new_layer)
);

UsecaseResult DeprecateItem(
    DEP(LayerStore, layerstore),
    DEP(PermissionStore, permstore),

    User user,
    LayerName layername,
    ItemId itemid,

    REF(Layer, new_layer)
);

UsecaseResult ForkItem(
    DEP(LayerStore, layerstore),
    DEP(PermissionStore, permstore),

    User user,
    LayerName layername,
    ItemId itemid,
    ItemContent content,
    DateRange range,

    REF(Item, item)
);
