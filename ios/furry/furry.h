//
//  furry.h
//  furry
//
//  Created by Fastlane on 2020/5/7.
//  Copyright © 2020 BC. All rights reserved.
//

#ifndef furry_h
#define furry_h

#import <Foundation/Foundation.h>
#import <React/RCTBridge.h>

#ifdef __cplusplus
extern "C" {
#endif

extern NSArray<id<RCTBridgeModule>>* furryModulesWithBridge(RCTBridge* bridge);

#ifdef __cplusplus
}
#endif

#endif /* furry_h */
