#pragma once

#include "note.h"
#include "../shared/list.h"

typedef struct {
    LIST(NoteId, notes);
} Panel;