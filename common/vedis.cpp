//
//  vedis.cpp
//  Furry
//
//  Created by 程巍巍 on 2020/4/9.
//  Copyright © 2020 Beijing Tuiwen Information Technology Company. All rights reserved.
//

#include "vedis.h"

Vedis::Vedis()
{
  
}

Vedis::~Vedis()
{
  printf("~Vedis\n");
}

static std::string hello() {
  return "Hello vedis !";
}

auto Vedis::getConstants() -> std::map<std::string, folly::dynamic> {
  return {
      {"one", 1},
      {"two", 2},
      {"animal", "fox"},
  };
}

auto Vedis::getMethods() -> std::vector<Method> {
  return {
     Method("hello", [this] {
       return hello();
      }, SyncTag),
    Method("open", [this] (folly::dynamic args, Callback cb) {
      cb({"Hello"});
    })
  };
}
