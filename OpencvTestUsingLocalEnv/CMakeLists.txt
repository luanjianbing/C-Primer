# cmake version
cmake_minimum_required(VERSION 2.8)

# project name (equal dir name)
project(OpencvTest)

# make mode(Release or Debug ? )
# SET(CMAKE_BUILD_TYPE Debug)
IF(NOT CMAKE_BUILD_TYPE)
	SET(CMAKE_BUILD_TYPE Release)
ENDIF()

MESSAGE("Build type : " ${CMAKE_BUILD_TYPE})

SET(CMAKE_C_COMPILER "/usr/bin/gcc")
SET(CMAKE_CXX_COMPILER "/usr/bin/g++")

# project config env
# opencv
set(OpenCV_DIR "/usr/local/share/OpenCV")
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

# add executable file
add_executable(${PROJECT_NAME} src/main.cpp src/Solution.cpp)
target_link_libraries(${PROJECT_NAME} 
${OpenCV_LIBS}
)
