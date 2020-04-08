//
//  Furry.m
//  Furry
//
//  Created by 程巍巍 on 2020/4/8.
//  Copyright © 2020 Beijing Tuiwen Information Technology Company. All rights reserved.
//

#import <React/RCTCxxModule.h>
#import <cxxreact/CxxModule.h>

#import "Furry.h"


namespace facebook {
namespace xplat {
namespace module {
class CxxModule;
}
}
}

#define FURRY_MODULE(NAME)                                                  \
@interface Furry ## NAME : RCTCxxModule                                     \
@end                                                                        \
@implementation Furry ## NAME                                               \
+ (NSString *)moduleName                                                    \
{                                                                           \
return @"" # NAME;                                                          \
}                                                                           \
- (std::unique_ptr<facebook::xplat::module::CxxModule>)createModule         \
{                                                                           \
  return std::make_unique<NAME>();                                          \
}                                                                           \
@end


#import "vedis.hpp"

FURRY_MODULE(Vedis)

extern "C" {
NSArray<id<RCTBridgeModule>>* furryModulesWithBridge(RCTBridge* bridge)
{
  return @[
    [[FurryVedis alloc] init]
  ];
}
}
