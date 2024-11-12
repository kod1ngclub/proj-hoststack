#pragma once

#include "shared/any.h"
#include "shared/bool.h"

#include "shared/error.h"

#include "shared/ref.h"

typedef struct Store_t Store;
typedef const Store* const StoreInstance;

typedef const char* const StoreName;
typedef const char* const DocName;
typedef const Any DocData;

typedef ServiceResult(*StoreReadFunc)(
    StoreInstance,
    
    REF_LIST(DocData)
);

typedef Bool (*Cond)(DocData);
typedef ServiceResult (*StoreCursorFunc)(
    StoreInstance,
    Cond,

    REF_LIST(DocData)
);

typedef ServiceResult (*StoreCreateFunc)(
    StoreInstance,
    DocName,
    DocData,

    REF(DocData)
);

typedef ServiceResult (*StoreDrop)(
    StoreInstance,
    Cond,

    REF_LIST(DocData)
);

struct Store_t {
    StoreName name;
    
    const StoreReadFunc read;
    const StoreCursorFunc cursur;
    const StoreCreateFunc create;
    const StoreDrop drop;
};

StoreInstance InitStore(StoreName);
