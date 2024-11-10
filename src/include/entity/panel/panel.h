#pragma once

// entity
#include "note.h"

// shared type
#include "../shared/list.h"

typedef struct {
    LIST(NoteId, notes);
} Panel;