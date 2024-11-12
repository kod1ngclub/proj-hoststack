#pragma once

/* SINGLE REF
 * 
 * It needs no argument name cuz it is for funcptr typedef
 */
#define REF(t) const t*

/* LIST REF
 * 
 * It needs no argument name cuz it is for funcptr typedef
 */
#define REF_LIST(t) REF(t*), REF(int)
