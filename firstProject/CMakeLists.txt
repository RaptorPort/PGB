cmake_minimum_required(VERSION 2.8.9)
project(pgb)
add_executable(main 
	main.cpp
	testDialog.h
	testDialog.cpp
	)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

if(CMAKE_VERSION VERSION_LESS "3.7.0")
  set(CMAKE_INCLUDE_CURRENT_DIR ON)
endif()

find_package(Qt5 COMPONENTS Widgets REQUIRED)
target_link_libraries(main Qt5::Widgets)
