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

static NSMutableArray<Class>* extraModuleClasses;

extern "C" {

NSArray<id<RCTBridgeModule>>* furryModulesWithBridge(RCTBridge* bridge)
{
  NSLog(@"load furry modules %@", bridge);
  NSMutableArray* modules = [NSMutableArray new];
  for (Class Module in extraModuleClasses) {
    [modules addObject:[[Module alloc] init]];
  }
  return [NSArray arrayWithArray:modules];
}

}

#define FURRY_MODULE(NAME)                                                  \
@interface Furry ## NAME : RCTCxxModule                                     \
@end                                                                        \
@implementation Furry ## NAME                                               \
+ (void)load                                                                \
{                                                                           \
  if (extraModuleClasses == nil) {                                          \
    extraModuleClasses = [NSMutableArray new];                              \
  }                                                                         \
  [extraModuleClasses addObject:self];                                      \
}                                                                           \
+ (NSString *)moduleName                                                    \
{                                                                           \
  return @"" # NAME;                                                        \
}                                                                           \
- (std::unique_ptr<facebook::xplat::module::CxxModule>)createModule         \
{                                                                           \
  return std::make_unique<NAME>();                                          \
}                                                                           \
@end


#import "modules.h"
