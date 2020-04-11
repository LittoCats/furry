//
//  vedis.hpp
//  Furry
//
//  Created by 程巍巍 on 2020/4/9.
//  Copyright © 2020 Beijing Tuiwen Information Technology Company. All rights reserved.
//

#ifndef vedis_hpp
#define vedis_hpp

#include "furry-internal.h"
#include <cxxreact/CxxModule.h>

class Vedis: public facebook::xplat::module::CxxModule
{
public:
  Vedis();
  ~Vedis();
  std::string getName() { return "Vedis"; }
  virtual auto getConstants() -> std::map<std::string, folly::dynamic>;
  virtual auto getMethods() -> std::vector<Method>;
  
private:
};

FURRY_MODULE(Vedis)

#endif /* vedis_hpp */
