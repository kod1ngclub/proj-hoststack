#pragma once

#define REF(t) const t*

#define REF_LIST(t) REF(t*), REF(int)

// They're used in funcptr typedef.
// So, need no varname of arguments.
