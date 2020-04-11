//
//  fs.cpp
//  Furry
//
//  Created by 程巍巍 on 2020/4/9.
//  Copyright © 2020 Beijing Tuiwen Information Technology Company. All rights reserved.
//

#include "fs.h"

FileManager::FileManager()
{
  
}

FileManager::~FileManager()
{
  printf("~FileManager\n");
}

auto FileManager::getConstants() -> std::map<std::string, folly::dynamic> {
  return {
      {"name", "FileManager"},
  };
}

auto FileManager::getMethods() -> std::vector<Method> {
  return {
    Method("hello", [this](folly::dynamic args, Callback callback) { callback({"Hello Vedis!"}); }),
  };
}
