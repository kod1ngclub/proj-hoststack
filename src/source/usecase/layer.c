#include "../../include/usecase/layer.h"

Result ReadLayerIds(
    REF_LIST(LayerId, layers)
) {
    Result r = {
        .body = "Hello, World",
        .code = NONE
    };

    return r;
}

Result ReadLayer(
    LayerId id,

    REF(Layer, layer)
) {
    Result r = {
        .body = "Hello, World",
        .code = NONE
    };

    return r;
}

Result ReadtGroup(
    GroupId id,

    REF(GroupId, group)
) {
    Result r = {
        .body = "Hello, World",
        .code = NONE
    };

    return r;
}

Result ReadItem(
    ItemId id,
    
    REF(Item, item)
) {
    Result r = {
        .body = "Hello, World",
        .code = NONE
    };

    return r;
}

Result CreateItem(
    LayerId layer_id,
    GroupId group_id,
    ItemContent content,

    REF(Item, item)
) {
    Result r = {
        .body = "Hello, World",
        .code = NONE
    };

    return r;
}

Result DeprecateItem(
    ItemId id,

    REF(Item, item)
) {
    Result r = {
        .body = "Hello, World",
        .code = NONE
    };

    return r;
}
