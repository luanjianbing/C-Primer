# cmake version
cmake_minimum_required(VERSION 2.8)

# project name (equal dir name)
project(OpencvTestUsingLocalEnv)

# make mode(Release or Debug ? )
# SET(CMAKE_BUILD_TYPE Debug)
IF(NOT CMAKE_BUILD_TYPE)
	SET(CMAKE_BUILD_TYPE Release)
ENDIF()

MESSAGE("Build type : " ${CMAKE_BUILD_TYPE})

# compile environment
SET(CMAKE_C_COMPILER "/usr/bin/gcc")
SET(CMAKE_CXX_COMPILER "/usr/bin/g++")

# project config env
# opencv
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/inc)

# add executable file
add_executable(${PROJECT_NAME} src/main.cpp src/Solution.cpp)

# add link libraries
SET(LINK_DIR ${CMAKE_CURRENT_SOURCE_DIR}/lib64)
link_directories(${CMAKE_CURRENT_SOURCE_DIR}/lib64)
target_link_libraries(${PROJECT_NAME} 
"${LINK_DIR}/libopencv_core.so" 
"${LINK_DIR}/libopencv_highgui.so"
"${LINK_DIR}/libopencv_videoio.so"
"${LINK_DIR}/libopencv_imgcodecs.so"
"${LINK_DIR}/libopencv_imgproc.so"
)
