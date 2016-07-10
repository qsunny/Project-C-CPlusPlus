cmake_minimum_required (VERSION 2.6)
project (Tutorial)
# enable dashboard scripting or to create a CTestConfig.cmake
# set (CTEST_PROJECT_NAME "Tutorial")
include (CTest)


# set version number
set (Tutorial_VERSION_MAJOR 1)
set (Tutorial_VERSION_MINOR 0)

# does this system provide the log and exp functions ?
include (${CMAKE_ROOT}/Modules/CheckFunctionExists.cmake)
check_function_exists (log HAVE_LOG)
check_function_exists (exp HAVE_EXP)

# should we use our own math functions ?
option (USE_MYMATH "Use tutorial provided math implementation" ON)

# configure a header file to pass some of the CMake setting
# to the source code
configure_file (
	"${PROJECT_SOURCE_DIR}/TutorialConfig.h.in"
	"${PROJECT_BINARY_DIR}/TutorialConfig.h"
 )
message("project source dir is : ${PROJECT_SOURCE_DIR}")
message("project binary dir is : ${PROJECT_BINARY_DIR}")

# add the binary tree to the search path for include files
# so that we will find TutorialConfig.h
include_directories("${PROJECT_BINARY_DIR}")

# add the MathFunctions library
#
if (USE_MYMATH)
	include_directories ("${PROJECT_SOURCE_DIR}/MathFunctions")
	add_subdirectory (MathFunctions)
	set (EXTRA_LIBS ${EXTRA_LIBS} MathFunctions)
endif (USE_MYMATH)

# add the executable
add_executable (Tutorial tutorial.cpp)
target_link_libraries (Tutorial ${EXTRA_LIBS})

# add the install targets
install (TARGETS Tutorial DESTINATION bin)
install (FILES "${PROJECT_BINARY_DIR}/TutorialConfig.h"
					DESTINATION include)

# dose the application run 
add_test(TutorialRuns Tutorial 25)
# dose it sqrt of 25
add_test (TutorialComp25 Tutorial 25)
set_tests_properties (TutorialComp25 PROPERTIES PASS_REGULAR_EXPRESSION "25 is 5")
# does it handle negative numbers 
add_test (TutorialNegetive Tutorial -25)
set_tests_properties (TutorialNegetive PROPERTIES PASS_REGULAR_EXPRESSION "-25 is 0")
# dose it handle small numbers
add_test (TutorialSmall Tutorial 0.0001)
set_tests_properties (TutorialSmall PROPERTIES PASS_REGULAR_EXPRESSION "0.0001 is 0.01")
# does the usage message work ? 
add_test (TutorialUsage Tutorial)
set_tests_properties (TutorialUsage PROPERTIES PASS_REGULAR_EXPRESSION "Usage:.*number")

# for lots of tests to test different input values to use macro
# define a marco to simplify adding tests,then use it
macro (do_test arg result)
	add_test (TutorialComp${arg} Tutorial ${arg})
	set_tests_properties(TutorialComp${arg} PROPERTIES PASS_REGULAR_EXPRESSION ${result})
endmacro(do_test)

# do a bunch of result based tests
do_test (49 "49 is 7")
do_test(4 "4 is 2")
do_test (-25 "-25 is 0")

# build a CPack driven installer package
include (InstallRequiredSystemLibraries)
set (CPACK_RESOURCE_FILE_LICENSE 
		"${CMAKE_CURRENT_SOURCE_DIR}/License.txt" )
set (CPACK_PACKAGE_VERSION_MAJOR "${Tutorial_VERSION_MAJOR}")
set (CPACK_PACKAGE_VERSION_MINOR "${Tutorial_VERSION_MINOR}")
include (CPack)

# run compile build commands
# step1 :  cmake .
# step2 : make

# run test commands
# ctest 



#the run CPack to build a binary distribution
# cpack --config CPackConfig.cmake
# cpack --config CPackSourceConfig.cmake

# camke tutorial reference : https://cmake.org/cmake-tutorial
















