//
//  sqlite.cpp
//  Furry
//
//  Created by 程巍巍 on 2020/4/9.
//  Copyright © 2020 Beijing Tuiwen Information Technology Company. All rights reserved.
//

#include "sqlite.h"

SQLite::SQLite()
{
  
}

SQLite::~SQLite()
{
  printf("~SQLite\n");
}

auto SQLite::getConstants() -> std::map<std::string, folly::dynamic> {
  return {
      {"name", "SQLite"},
  };
}

auto SQLite::getMethods() -> std::vector<Method> {
  return {
    Method("hello", [this](folly::dynamic args, Callback callback) { callback({"Hello Vedis!"}); }),
  };
}
