cmake_minimum_required(VERSION 3.29)
project(JNIDemoC)

set(CMAKE_CXX_STANDARD 11)


include_directories("D:/Program Files/Java/jdk-8/include/")
include_directories("D:/Program Files/Java/jdk-8/include/win32")


#add_executable(JNIDemoC jni/com_sz_jvm_NativeMethod.h
#        code/com_sz_jvm_NativeMethod.cpp)
add_library(JNIDemoC SHARED code/com_sz_jvm_NativeMethod.cpp jni/com_sz_jvm_NativeMethod.h)
