# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /data/workspace-cpp/cmake_shell/example2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /data/workspace-cpp/cmake_shell/example2/build

# Include any dependencies generated for this target.
include CMakeFiles/calc.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/calc.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/calc.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/calc.dir/flags.make

CMakeFiles/calc.dir/src/add.cpp.o: CMakeFiles/calc.dir/flags.make
CMakeFiles/calc.dir/src/add.cpp.o: /data/workspace-cpp/cmake_shell/example2/src/add.cpp
CMakeFiles/calc.dir/src/add.cpp.o: CMakeFiles/calc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/data/workspace-cpp/cmake_shell/example2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/calc.dir/src/add.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/calc.dir/src/add.cpp.o -MF CMakeFiles/calc.dir/src/add.cpp.o.d -o CMakeFiles/calc.dir/src/add.cpp.o -c /data/workspace-cpp/cmake_shell/example2/src/add.cpp

CMakeFiles/calc.dir/src/add.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/calc.dir/src/add.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /data/workspace-cpp/cmake_shell/example2/src/add.cpp > CMakeFiles/calc.dir/src/add.cpp.i

CMakeFiles/calc.dir/src/add.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/calc.dir/src/add.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /data/workspace-cpp/cmake_shell/example2/src/add.cpp -o CMakeFiles/calc.dir/src/add.cpp.s

CMakeFiles/calc.dir/src/div.cpp.o: CMakeFiles/calc.dir/flags.make
CMakeFiles/calc.dir/src/div.cpp.o: /data/workspace-cpp/cmake_shell/example2/src/div.cpp
CMakeFiles/calc.dir/src/div.cpp.o: CMakeFiles/calc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/data/workspace-cpp/cmake_shell/example2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/calc.dir/src/div.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/calc.dir/src/div.cpp.o -MF CMakeFiles/calc.dir/src/div.cpp.o.d -o CMakeFiles/calc.dir/src/div.cpp.o -c /data/workspace-cpp/cmake_shell/example2/src/div.cpp

CMakeFiles/calc.dir/src/div.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/calc.dir/src/div.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /data/workspace-cpp/cmake_shell/example2/src/div.cpp > CMakeFiles/calc.dir/src/div.cpp.i

CMakeFiles/calc.dir/src/div.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/calc.dir/src/div.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /data/workspace-cpp/cmake_shell/example2/src/div.cpp -o CMakeFiles/calc.dir/src/div.cpp.s

CMakeFiles/calc.dir/src/main.cpp.o: CMakeFiles/calc.dir/flags.make
CMakeFiles/calc.dir/src/main.cpp.o: /data/workspace-cpp/cmake_shell/example2/src/main.cpp
CMakeFiles/calc.dir/src/main.cpp.o: CMakeFiles/calc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/data/workspace-cpp/cmake_shell/example2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/calc.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/calc.dir/src/main.cpp.o -MF CMakeFiles/calc.dir/src/main.cpp.o.d -o CMakeFiles/calc.dir/src/main.cpp.o -c /data/workspace-cpp/cmake_shell/example2/src/main.cpp

CMakeFiles/calc.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/calc.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /data/workspace-cpp/cmake_shell/example2/src/main.cpp > CMakeFiles/calc.dir/src/main.cpp.i

CMakeFiles/calc.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/calc.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /data/workspace-cpp/cmake_shell/example2/src/main.cpp -o CMakeFiles/calc.dir/src/main.cpp.s

CMakeFiles/calc.dir/src/mult.cpp.o: CMakeFiles/calc.dir/flags.make
CMakeFiles/calc.dir/src/mult.cpp.o: /data/workspace-cpp/cmake_shell/example2/src/mult.cpp
CMakeFiles/calc.dir/src/mult.cpp.o: CMakeFiles/calc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/data/workspace-cpp/cmake_shell/example2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/calc.dir/src/mult.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/calc.dir/src/mult.cpp.o -MF CMakeFiles/calc.dir/src/mult.cpp.o.d -o CMakeFiles/calc.dir/src/mult.cpp.o -c /data/workspace-cpp/cmake_shell/example2/src/mult.cpp

CMakeFiles/calc.dir/src/mult.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/calc.dir/src/mult.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /data/workspace-cpp/cmake_shell/example2/src/mult.cpp > CMakeFiles/calc.dir/src/mult.cpp.i

CMakeFiles/calc.dir/src/mult.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/calc.dir/src/mult.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /data/workspace-cpp/cmake_shell/example2/src/mult.cpp -o CMakeFiles/calc.dir/src/mult.cpp.s

CMakeFiles/calc.dir/src/sub.cpp.o: CMakeFiles/calc.dir/flags.make
CMakeFiles/calc.dir/src/sub.cpp.o: /data/workspace-cpp/cmake_shell/example2/src/sub.cpp
CMakeFiles/calc.dir/src/sub.cpp.o: CMakeFiles/calc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/data/workspace-cpp/cmake_shell/example2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/calc.dir/src/sub.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/calc.dir/src/sub.cpp.o -MF CMakeFiles/calc.dir/src/sub.cpp.o.d -o CMakeFiles/calc.dir/src/sub.cpp.o -c /data/workspace-cpp/cmake_shell/example2/src/sub.cpp

CMakeFiles/calc.dir/src/sub.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/calc.dir/src/sub.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /data/workspace-cpp/cmake_shell/example2/src/sub.cpp > CMakeFiles/calc.dir/src/sub.cpp.i

CMakeFiles/calc.dir/src/sub.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/calc.dir/src/sub.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /data/workspace-cpp/cmake_shell/example2/src/sub.cpp -o CMakeFiles/calc.dir/src/sub.cpp.s

# Object files for target calc
calc_OBJECTS = \
"CMakeFiles/calc.dir/src/add.cpp.o" \
"CMakeFiles/calc.dir/src/div.cpp.o" \
"CMakeFiles/calc.dir/src/main.cpp.o" \
"CMakeFiles/calc.dir/src/mult.cpp.o" \
"CMakeFiles/calc.dir/src/sub.cpp.o"

# External object files for target calc
calc_EXTERNAL_OBJECTS =

/data/workspace-cpp/cmake_shell/example2/lib/libcalc.a: CMakeFiles/calc.dir/src/add.cpp.o
/data/workspace-cpp/cmake_shell/example2/lib/libcalc.a: CMakeFiles/calc.dir/src/div.cpp.o
/data/workspace-cpp/cmake_shell/example2/lib/libcalc.a: CMakeFiles/calc.dir/src/main.cpp.o
/data/workspace-cpp/cmake_shell/example2/lib/libcalc.a: CMakeFiles/calc.dir/src/mult.cpp.o
/data/workspace-cpp/cmake_shell/example2/lib/libcalc.a: CMakeFiles/calc.dir/src/sub.cpp.o
/data/workspace-cpp/cmake_shell/example2/lib/libcalc.a: CMakeFiles/calc.dir/build.make
/data/workspace-cpp/cmake_shell/example2/lib/libcalc.a: CMakeFiles/calc.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/data/workspace-cpp/cmake_shell/example2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX static library /data/workspace-cpp/cmake_shell/example2/lib/libcalc.a"
	$(CMAKE_COMMAND) -P CMakeFiles/calc.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/calc.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/calc.dir/build: /data/workspace-cpp/cmake_shell/example2/lib/libcalc.a
.PHONY : CMakeFiles/calc.dir/build

CMakeFiles/calc.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/calc.dir/cmake_clean.cmake
.PHONY : CMakeFiles/calc.dir/clean

CMakeFiles/calc.dir/depend:
	cd /data/workspace-cpp/cmake_shell/example2/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /data/workspace-cpp/cmake_shell/example2 /data/workspace-cpp/cmake_shell/example2 /data/workspace-cpp/cmake_shell/example2/build /data/workspace-cpp/cmake_shell/example2/build /data/workspace-cpp/cmake_shell/example2/build/CMakeFiles/calc.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/calc.dir/depend

