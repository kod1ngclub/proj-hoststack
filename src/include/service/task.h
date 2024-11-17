#pragma once

#include "../entity/task/forest.h"
#include "../entity/task/log.h"

#include "shared/error.h"

typedef struct TaskStore_t TaskStore;
typedef const TaskStore* const TaskStoreInstance;

UseServiceResultedList(ForestName);
UseServiceResulted(Forest);
UseServiceResulted(Log);

typedef ResultedList(ForestName) (*TaskStoreIndex)();

typedef Resulted(Forest) (*TaskStoreReadForest)(
    ForestName name
);

typedef Resulted(Log) (*TaskStoreCreateLog)(
    ForestName forestname,
    LogContent content,
    DateRange range
);

typedef Resulted(Log) (*TaskStoreDeprecateLog)(
    ForestName forestname,
    LogId id
);

struct TaskStor_t {
    const TaskStoreIndex index;
    const TaskStoreReadForest read_forest;
    const TaskStoreCreateLog create_log;
    const TaskStoreDeprecateLog deprecate_log;
};

TaskStoreInstance NewTaskStore();
void FreeTaskStore(TaskStoreInstance instance);

// Filename of this is 'layer' but it actually means
// 'Store API for layer and items'

// other files accord the same rule
