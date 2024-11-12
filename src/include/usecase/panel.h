#pragma once

#include "../entity/panel/panel.h"

#include "../service/store.h"

#include "shared/error.h"

#include "shared/dep.h"
#include "shared/ref.h"

UsecaseResult ReadPanel(
    DEP(Store, panelstore),

    REF(Panel, panel)
);

UsecaseResult ReadNote(
    DEP(Store, notestore),
    NoteId id,

    REF(Note, note)
);

UsecaseResult CreateNote(
    DEP(Store, panelstore),
    DEP(Store, notestore),
    NoteContent content,

    REF(Note, note)
);

UsecaseResult DeprecateNote(
    DEP(Store, panelstore),
    DEP(Store, notestore),
    NoteId id,

    REF(Note, note)
);
