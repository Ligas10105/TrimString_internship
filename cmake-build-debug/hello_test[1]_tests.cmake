add_test([=[HelloTest.BasicAssertions]=]  C:/Users/ligas/OneDrive/Pulpit/Github/TrimString_internship/cmake-build-debug/hello_test.exe [==[--gtest_filter=HelloTest.BasicAssertions]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[HelloTest.BasicAssertions]=]  PROPERTIES WORKING_DIRECTORY C:/Users/ligas/OneDrive/Pulpit/Github/TrimString_internship/cmake-build-debug SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set(  hello_test_TESTS HelloTest.BasicAssertions)
