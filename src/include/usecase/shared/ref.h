#pragma once

#define REF(t, name) const t* name

#define REF_LIST(t, name) REF(t*, name), REF(int, size)
