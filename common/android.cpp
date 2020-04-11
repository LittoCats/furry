/**
 * @author      : shiranui (shiranui@Deavilion)
 * @file        : android
 * @created     : 星期六 4月 11, 2020 14:50:21 CST
 */

#include "furry-internal.h"

#ifdef FURRY_MODULE
#undef FURRY_MODULE
#endif

#define FURRY_MODULE(NAME)                                                      \
extern "C" facebook::xplat::module::CxxModule* create_furry_##NAME()                       \
{                                                                               \
    return new NAME();                                                          \
}

#include "modules.h"



