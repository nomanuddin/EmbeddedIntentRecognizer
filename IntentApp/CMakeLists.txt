# CMakeList.txt : CMake project for IntentApp, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("IntentApp")

# Add source to this project's executable.
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable (IntentApp "IntentApp.cpp" "IntentApp.h")
set_property(TARGET IntentApp PROPERTY CXX_STANDARD 17)

target_compile_features(IntentApp PUBLIC cxx_std_17)
# TODO: Add tests and install targets if needed.
