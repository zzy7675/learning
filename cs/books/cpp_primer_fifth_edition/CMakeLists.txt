cmake_minimum_required(VERSION 3.10)
project(CPP_Primer_5th_Edition_Exercises)

# GCC only
set(CMAKE_C_COMPILER gcc)
set(CMAKE_CXX_COMPILER g++)
add_compile_options(-Wall -Wextra -Wpedantic)  # Warning level

# options
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_executable(exercise1.1 ch1/section1.1/exercise1.1/exercise1.1.cpp)
add_executable(exercise1.2 ch1/section1.1/exercise1.2/exercise1.2.cpp)
add_executable(exercise1.3 ch1/section1.2/exercise1.3/exercise1.3.cpp)
add_executable(exercise1.4 ch1/section1.2/exercise1.4/exercise1.4.cpp)
add_executable(exercise1.5 ch1/section1.2/exercise1.5/exercise1.5.cpp)
add_executable(exercise1.8 ch1/section1.3/exercise1.8/exercise1.8.cpp)
add_executable(exercise1.9 ch1/section1.4/1.4.1/exercise1.9/exercise1.9.cpp)
add_executable(exercise1.10 ch1/section1.4/1.4.1/exercise1.10/exercise1.10.cpp)
add_executable(exercise1.11 ch1/section1.4/1.4.1/exercise1.11/exercise1.11.cpp)
add_executable(exercise1.12 ch1/section1.4/1.4.2/exercise1.12/exercise1.12.cpp)
add_executable(exercise1.13 ch1/section1.4/1.4.2/exercise1.13/exercise1.13.cpp)
add_executable(exercise1.16 ch1/section1.4/1.4.3/exercise1.16/exercise1.16.cpp)
add_executable(exercise1.17 ch1/section1.4/1.4.4/exercise1.17/exercise1.17.cpp)
add_executable(exercise1.18 ch1/section1.4/1.4.4/exercise1.18/exercise1.18.cpp)
add_executable(exercise1.19 ch1/section1.4/1.4.4/exercise1.19/exercise1.19.cpp)
add_executable(exercise1.20 ch1/section1.5/1.5.1/exercise1.20/exercise1.20.cpp)
add_executable(exercise1.21 ch1/section1.5/1.5.1/exercise1.21/exercise1.21.cpp)
add_executable(exercise1.22 ch1/section1.5/1.5.1/exercise1.22/exercise1.22.cpp)
add_executable(exercise1.23 ch1/section1.5/1.5.2/exercise1.23/exercise1.23.cpp)
add_executable(exercise1.25 ch1/section1.6/exercise1.25/exercise1.25.cpp)
add_executable(exercise2.4 ch2/section2.1/2.1.2/exercise2.4/exercise2.4.cpp)
add_executable(exercise2.8 ch2/section2.1/2.1.3/exercise2.8/exercise2.8.cpp)
add_executable(exercise2.18 ch2/section2.3/2.3.2/exercise2.18/exercise2.18.cpp)

target_include_directories(exercise1.20 PUBLIC ${CMAKE_SOURCE_DIR}/include)
target_include_directories(exercise1.21 PUBLIC ${CMAKE_SOURCE_DIR}/include)
target_include_directories(exercise1.22 PUBLIC ${CMAKE_SOURCE_DIR}/include)
target_include_directories(exercise1.23 PUBLIC ${CMAKE_SOURCE_DIR}/include)
target_include_directories(exercise1.25 PUBLIC ${CMAKE_SOURCE_DIR}/include)
