cmake_minimum_required(VERSION 3.6.0)

set(REACT_COMMON "../node_modules/react-native/ReactCommon")
set(CMAKE_C_FLAGS 
    "${CMAKE_C_FLAGS} -DFOLLY_NO_CONFIG -DFOLLY_MOBILE=1 -DFOLLY_USE_LIBCPP=1 -DFOLLY_HAVE_MEMRCHR -Wno-comma -Wno-shorten-64-to-32 -Wno-documentation"
)


set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fexceptions -frtti -Wno-unused-lambda-capture")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -L${CMAKE_CURRENT_SOURCE_DIR}/../android/furry/build/react-native/jni/${ANDROID_ABI}")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${CMAKE_C_FLAGS}")

set(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} -lfolly_json -lreactnativejni")


set(FURRY_SOURCE

    "vedis.cpp"
    "sqlite.cpp"
    "analytics.cpp"
    "fs.cpp"
    "android.cpp"
)

add_library(furry SHARED ${FURRY_SOURCE})
target_include_directories(furry PRIVATE ${REACT_COMMON})
