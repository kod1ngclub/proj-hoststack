#pragma once

// entity
#include "../entity/panel/panel.h"

// usecase error model
#include "shared/error.h"

// REF define util
#include "shared/ref.h"

// usecase functions
Result ReadPanel(
    REF(Panel, panel)
);

Result ReadNote(
    NoteId id,

    REF(Note, note)
);

Result CreateNote(
    NoteContent content,

    REF(Note, note)
);

Result DeprecateNote(
    NoteId id,

    REF(Note, note)
);
