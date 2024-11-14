#pragma once

#include "../entity/layer/layer.h"
#include "../entity/layer/item.h"

#include "shared/error.h"

#include "shared/ref.h"

typedef struct LayerStore_t LayerStore;
typedef const LayerStore* const LayerStoreInstance;

typedef ServiceResult (*LayerStoreIndex)(
    REF_LIST(LayerName)
);

typedef ServiceResult (*LayerStoreReadByLayerName)(
    LayerName name,

    REF(Layer)
);

typedef ServiceResult (*LayerStoreCreate)(
    LayerName layername,
    ItemContent content,
    DateRange range,

    REF(Item)
);

typedef ServiceResult (*LayerStoreCopy)(
    ItemId,

    REF(Item)
);

typedef ServiceResult (*LayerStoreDeprecate)(
    LayerName layername,
    ItemId id,

    REF(Item)
);

struct LayerStore_t {
    const LayerStoreIndex index;
    const LayerStoreReadByLayerName read_by_layername;
    const LayerStoreCreate create;
    const LayerStoreCopy copy;
    const LayerStoreDeprecate deprecate;
};

LayerStoreInstance NewLayerStore();

// Filename of this is 'layer' but it actually means
// 'Store API for layer and items'

// other files accord the same rule
