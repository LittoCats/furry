//
//  fs.hpp
//  Furry
//
//  Created by 程巍巍 on 2020/4/9.
//  Copyright © 2020 Beijing Tuiwen Information Technology Company. All rights reserved.
//

#ifndef fs_hpp
#define fs_hpp

#include "furry-internal.h"
#include <cxxreact/CxxModule.h>

class FileManager: public facebook::xplat::module::CxxModule
{
public:
  FileManager();
  ~FileManager();
  std::string getName() { return "SQLite"; }
  virtual auto getConstants() -> std::map<std::string, folly::dynamic>;
  virtual auto getMethods() -> std::vector<Method>;
  
private:
};

FURRY_MODULE(FileManager)

#endif /* fs_hpp */
