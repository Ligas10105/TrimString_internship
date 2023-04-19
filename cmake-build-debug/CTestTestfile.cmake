# CMake generated Testfile for 
# Source directory: C:/Users/ligas/OneDrive/Pulpit/Github/TrimString_internship
# Build directory: C:/Users/ligas/OneDrive/Pulpit/Github/TrimString_internship/cmake-build-debug
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
include("C:/Users/ligas/OneDrive/Pulpit/Github/TrimString_internship/cmake-build-debug/hello_test[1]_include.cmake")
add_test([=[example_test]=] "C:/Users/ligas/OneDrive/Pulpit/Github/TrimString_internship/cmake-build-debug/example.exe")
set_tests_properties([=[example_test]=] PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/ligas/OneDrive/Pulpit/Github/TrimString_internship/CMakeLists.txt;21;add_test;C:/Users/ligas/OneDrive/Pulpit/Github/TrimString_internship/CMakeLists.txt;0;")
subdirs("_deps/googletest-build")
