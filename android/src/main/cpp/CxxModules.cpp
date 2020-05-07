/**
 * @author      : 程巍巍 (littocats@gmail.com)
 * @file        : CxxModules
 * @created     : Thursday May 07, 2020 12:28:32 CST
 */

#ifdef FURRY_MODULE
#undef FURRY_MODULE
#endif

#define FURRY_MODULE(NAME)                                                      \
extern "C" facebook::xplat::module::CxxModule* create_furry_##NAME()                       \
{                                                                               \
    return new NAME();                                                          \
}

#import "../../../../common/CxxModules.h"