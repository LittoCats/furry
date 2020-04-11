//
//  sqlite.hpp
//  Furry
//
//  Created by 程巍巍 on 2020/4/9.
//  Copyright © 2020 Beijing Tuiwen Information Technology Company. All rights reserved.
//

#ifndef sqlite_hpp
#define sqlite_hpp

#include "furry-internal.h"
#include <cxxreact/CxxModule.h>

class SQLite: public facebook::xplat::module::CxxModule
{
public:
  SQLite();
  ~SQLite();
  std::string getName() { return "SQLite"; }
  virtual auto getConstants() -> std::map<std::string, folly::dynamic>;
  virtual auto getMethods() -> std::vector<Method>;
  
private:
};

FURRY_MODULE(SQLite)


#endif /* sqlite_hpp */
