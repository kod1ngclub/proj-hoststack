#pragma once

#include "../entity/todo/group.h"
#include "../entity/todo/item.h"

#include "shared/error.h"

typedef struct GroupStore_t GroupStore;
typedef const GroupStore* const GroupStoreInstance;

GENERIC_SERVICE_RESULTED_LIST(GroupName);
GENERIC_SERVICE_RESULTED(Group);

typedef RESULTED_LIST(GroupName) (*GroupStoreIndex)();

typedef RESULTED(Group) (*GroupStoreRead)(GroupName name);

typedef RESULTED(Group) (*GroupStoreCreate)(Group group);

typedef RESULTED(Group) (*GroupStoreDeprecate)(GroupName name);

struct GroupStore_t {
    const GroupStoreIndex index;
    const GroupStoreRead read;
    const GroupStoreCreate create;
    const GroupStoreDeprecate deprecate;
};

GroupStoreInstance NewGroupStore();
void FreeGroupStore(GroupStoreInstance instance);
