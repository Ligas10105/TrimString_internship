cmake_minimum_required(VERSION 3.24)
project(TrimString_internship)

set(CMAKE_CXX_STANDARD 17)

add_executable(TrimString_internship src/trim_string.cpp src/trim_string.h)

include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/5376968f6948923e2411081fd9372e71a59d8e77.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_executable(
        string_trim_test
        test/string_trim_test.cpp
)
target_link_libraries(
        string_trim_test
        GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(string_trim_test)