#pragma once

// entity or shared datatype
#include "shared/any.h"
#include "../entity/shared/bool.h"

// service error model
#include "shared/error.h"

// REF define util
#include "shared/ref.h"

typedef const char* const StoreName;

typedef const char* const DocName;
typedef const Any DocData;

typedef ServiceResult (*StoreReadFunc)(
    REF_LIST(DocData)
);

typedef Bool (*Cond)(DocData);
typedef ServiceResult (*StoreCursorFunc)(
    Cond,

    REF_LIST(DocData)
);

typedef ServiceResult (*StoreCreateFunc)(
    DocName,
    DocData,

    REF(DocData)
);

typedef ServiceResult (*StoreDrop)(
    Cond,

    REF_LIST(DocData)
);

typedef struct {
    StoreName name;
    const StoreReadFunc read;
    const StoreCursorFunc cursur;
    const StoreCreateFunc create;
    const StoreDrop drop;
} Store;

typedef const Store* const StoreInstance;

StoreInstance InitStore(StoreName);
