/**
 * @author      : shiranui (shiranui@Deavilion)
 * @file        : KeyChain
 * @created     : 星期四 5月 07, 2020 10:00:25 CST
 */

#include "Furry.h"

class KeyChain: public facebook::xplat::module::CxxModule
{
public:
  KeyChain() {}
  ~KeyChain() {}
  std::string getName() { return "KeyChain"; }
  virtual auto getConstants() -> std::map<std::string, folly::dynamic>;
  virtual auto getMethods() -> std::vector<Method>;
};

static std::string hello() {
  return "Hello vedis !";
}

auto KeyChain::getConstants() -> std::map<std::string, folly::dynamic> {
  return {
      {"one", 1},
      {"two", 2},
      {"animal", "fox"},
  };
}

auto KeyChain::getMethods() -> std::vector<Method> {
  return {
     Method("hello", [this] {
       return hello();
      }, SyncTag),
    Method("open", [this] (folly::dynamic args, Callback cb) {
      cb({"Hello"});
    })
  };
}
