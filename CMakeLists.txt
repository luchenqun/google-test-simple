cmake_minimum_required(VERSION 3.5.0)

project (google-test-simple)

set(GOOGLE_TEST_SRC ${CMAKE_SOURCE_DIR}/include) # Google 单元测试框架代码

#Compiler flags
set(CMAKE_C_FLAGS "-march=native -pthread")
set(CMAKE_CXX_FLAGS "${CMAKE_C_FLAGS} -std=c++11")

if(WIN32)
    message(STATUS "windows env")
    link_directories(${CMAKE_SOURCE_DIR}/lib/win)
elseif(UNIX)
    message(STATUS "linux env")
    link_directories(${CMAKE_SOURCE_DIR}/lib/linux)
endif()

include_directories(${GOOGLE_TEST_SRC})
add_executable(${PROJECT_NAME} ${CMAKE_SOURCE_DIR}/src/main.cpp)
if(WIN32)
elseif(UNIX)
    target_link_libraries(${PROJECT_NAME} gtest_main gtest)
endif()

