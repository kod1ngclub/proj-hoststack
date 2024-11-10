#pragma once

/* SINGLE REF
 * 
 * funcname(REF(a))
 * = funcname(const a*)
 */
#define REF(t, name) const t* name

/* LIST REF
 * 
 * funcname(REF_LIST(Apple, apples))
 * = funcname(const Apple* apples, const int* size)
 */
#define REF_LIST(t, name) REF(t*, name), REF(int, size)
