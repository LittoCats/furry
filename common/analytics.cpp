//
//  analytics.cpp
//  Furry
//
//  Created by 程巍巍 on 2020/4/9.
//  Copyright © 2020 Beijing Tuiwen Information Technology Company. All rights reserved.
//

#include "analytics.h"

Analytics::Analytics()
{
  
}

Analytics::~Analytics()
{
  printf("~Analytics\n");
}

auto Analytics::getConstants() -> std::map<std::string, folly::dynamic> {
  return {
      {"name", "Analytics"},
  };
}

auto Analytics::getMethods() -> std::vector<Method> {
  return {
    Method("hello", [this](folly::dynamic args, Callback callback) { callback({"Hello Vedis!"}); }),
  };
}
