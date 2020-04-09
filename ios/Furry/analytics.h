//
//  analytics.hpp
//  Furry
//
//  Created by 程巍巍 on 2020/4/9.
//  Copyright © 2020 Beijing Tuiwen Information Technology Company. All rights reserved.
//

#ifndef analytics_hpp
#define analytics_hpp

#include "furry-internal.h"
#include <cxxreact/CxxModule.h>

class Analytics: public facebook::xplat::module::CxxModule
{
public:
  Analytics();
  ~Analytics();
  std::string getName() { return "SQLite"; }
  virtual auto getConstants() -> std::map<std::string, folly::dynamic>;
  virtual auto getMethods() -> std::vector<Method>;
  
private:
};

FURRY_MODULE(Analytics)

#endif /* analytics_hpp */
