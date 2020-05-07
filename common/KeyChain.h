/**
 * @Author      : 程巍巍 (littocats@gmail.com)
 * @File        : KeyChain
 *
 * @Created     : Thursday May 07, 2020 12:25:48 CST
 */

#ifndef KEYCHAIN_H
#define KEYCHAIN_H


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

FURRY_MODULE(KeyChain)


#endif /* end of include guard KEYCHAIN_H */

