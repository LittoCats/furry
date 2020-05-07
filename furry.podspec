# coding: utf-8
# Copyright (c) Facebook, Inc. and its affiliates.
#
# This source code is licensed under the MIT license found in the
# LICENSE file in the root directory of this source tree.

require "json"

package = JSON.parse(File.read(File.join(__dir__, "package.json")))
version = package['version']

source = { :http => 'file:///' + __dir__ + '/' }

source_files = 'ios/furry/*.{mm, cpp, h}', 'common/*.{cpp, h}'

Pod::Spec.new do |spec|
  spec.name = 'furry'
  spec.module_name = 'furry'
  spec.version = version
  spec.authors = '程巍巍'
  spec.license = { :type => 'Apache License, Version 2.0' }
  spec.homepage = 'https://github.com/facebook/folly'
  spec.summary = '_'
  spec.source = source
  spec.compiler_flags = '-DFOLLY_NO_CONFIG -DFOLLY_MOBILE=1 -DFOLLY_USE_LIBCPP=1 -DFOLLY_HAVE_PTHREAD=1 -Wno-comma -Wno-shorten-64-to-32 -Wno-documentation'
  spec.source_files = source_files

  spec.pod_target_xcconfig = { "USE_HEADERMAP" => "NO",
                               "CLANG_CXX_LANGUAGE_STANDARD" => "c++14",
                               "HEADER_SEARCH_PATHS" => "\"$(PODS_TARGET_SRCROOT)\" \"$(PODS_ROOT)/boost-for-react-native\" \"$(PODS_ROOT)/DoubleConversion\" \"${PODS_ROOT}/Folly\" \"${PODS_ROOT}/Headers/Public/glog\" \"${PODS_ROOT}/Headers/Public/React-cxxreact\" \"${PODS_ROOT}/Headers/Public/ReactCommon\" \"${PODS_ROOT}/Headers/Public/React-Core\" \"${PODS_ROOT}/Headers/Private/React-Core\"" }

  # Pinning to the same version as React.podspec.
  spec.platforms = { :ios => "9.0", :tvos => "9.2" }

  # spec.dependency 'boost-for-react-native'
  # spec.dependency 'DoubleConversion'
  # spec.dependency 'glog'
  # spec.dependency 'Folly'
end
