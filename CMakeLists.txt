cmake_minimum_required(VERSION 3.10)
project(kolokwium)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

add_executable(kolokwium
        src/main.cpp
        include/typedefs.h
        include/Interceptor.h
        include/Galaxy.h
        include/Fighter.h
        src/Galaxy.cpp
        src/Fighter.cpp
        src/Interceptor.cpp
        src/Spacecraft.cpp
)

enable_testing()
set(Boost_USE_MULTITHREADED ON)
find_package(Boost 1.65 COMPONENTS unit_test_framework REQUIRED)
include_directories(
        include
        ${Boost_INCLUDE_DIRS})
link_directories(${Boost_LIBRARY_DIR})
add_custom_target(check ${CMAKE_COMMAND} -E env CTEST_OUTPUT_ON_FAILURE=1 BOOST_TEST_LOG_LEVEL=all
        ${CMAKE_CTEST_COMMAND} -C $<CONFIG> --verbose
        WORKING_DIRECTORY ${CMAKE_BINARY_DIR})


add_executable(nauczyciel_tester
        test/config.cpp
        include/typedefs.h
        test/NauczycielTest.cpp
        include/Interceptor.h
        include/Galaxy.h
        include/Fighter.h
        src/Galaxy.cpp
        src/Fighter.cpp
        src/Interceptor.cpp
        src/Spacecraft.cpp
)
target_link_libraries(nauczyciel_tester
        ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY})

add_test(nauczyciel_test nauczyciel_tester
        --report_level=detailed
        --log_level=all
        --color_output=yes)

add_executable(student_tester
        test/config.cpp
        include/typedefs.h
        test/StudentTest.cpp
        include/Interceptor.h
        include/Galaxy.h
        include/Fighter.h
        src/Galaxy.cpp
        src/Fighter.cpp
        src/Interceptor.cpp
        src/Spacecraft.cpp
)
target_link_libraries(student_tester
        ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY})

add_test(student_test student_tester
        --report_level=detailed
        --log_level=all
        --color_output=yes)

