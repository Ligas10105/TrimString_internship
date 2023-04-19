cmake_minimum_required(VERSION 3.24)
project(TrimString_internship)

set(CMAKE_CXX_STANDARD 17)

add_executable(TrimString_internship src/main.cpp)

include(FetchContent)
FetchContent_Declare(
        googletest
        # Specify the commit you depend on and update it regularly.
        URL https://github.com/google/googletest/archive/5376968f6948923e2411081fd9372e71a59d8e77.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# Now simply link against gtest or gtest_main as needed. Eg
add_executable(example src/main.cpp test/hello_test.cpp)
target_link_libraries(example gtest_main)
add_test(NAME example_test COMMAND example)
enable_testing()

add_executable(
        hello_test
        test/hello_test.cpp
)
target_link_libraries(
        hello_test
        GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(hello_test)