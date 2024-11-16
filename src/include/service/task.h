#pragma once

#include "../entity/task/forest.h"
#include "../entity/task/log.h"

#include "shared/error.h"

#include "shared/ref.h"

typedef struct TaskStore_t TaskStore;
typedef const TaskStore* const TaskStoreInstance;

typedef ServiceResult (*TaskStoreIndex)(
    REF_LIST(ForestName)
);

typedef ServiceResult (*TaskStoreRead)(
    ForestName name,

    REF(ForestName)
);

typedef ServiceResult (*TaskStoreCreate)(
    ForestName layername,
    LogContent content,
    DateRange range,

    REF(Log)
);

typedef ServiceResult (*TaskStoreCopy)(
    LogId,

    REF(Log)
);

typedef ServiceResult (*TaskStoreDeprecate)(
    ForestName name,
    LogId id,

    REF(Log)
);

struct TaskStor_t {
    const TaskStoreIndex index;
    const TaskStoreRead read;
    const TaskStoreCreate create;
    const TaskStoreDeprecate deprecate;
};

TaskStoreInstance NewTaskStore();

// Filename of this is 'layer' but it actually means
// 'Store API for layer and items'

// other files accord the same rule
