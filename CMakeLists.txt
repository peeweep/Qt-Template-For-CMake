cmake_minimum_required(VERSION 3.5)

project(Qt-Template-For-CMake LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
#set(CMAKE_C_COMPILER "/usr/bin/clang")
#set(CMAKE_CXX_COMPILER "/usr/bin/clang++")

find_package(Qt5 COMPONENTS Widgets REQUIRED)

add_executable(Qt-Template-For-CMake
  main.cpp
  src/mywidget.cpp
  src/mywidget.h
  src/mywidget.ui
  ## When we set CMAKE_AUTORCC ON, we can write qrc directly
  ## in add_executable
  res.qrc
)

target_link_libraries(Qt-Template-For-CMake PRIVATE Qt5::Widgets)
