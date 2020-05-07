cmake_minimum_required(VERSION 3.6)

link_directories(${CMAKE_CURRENT_SOURCE_DIR}/../../../build/ReactAndroid/jni/${ANDROID_ABI})

set(REACT_NATIVE "${CMAKE_CURRENT_SOURCE_DIR}/../../../../node_modules/react-native/")

set(
	SOURCE
  
  KeyChain.cpp
)

add_library(furry SHARED ${SOURCE})
# target_include_directories(furry PUBLIC ../../../../ios/deacon)
target_include_directories(furry PUBLIC 
	${REACT_NATIVE}/ReactCommon
)
target_link_libraries(furry PRIVATE glog folly_json)