# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/rockerz/gejo/atlatec/git/linear_algebra

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/rockerz/gejo/atlatec/git/linear_algebra

# Include any dependencies generated for this target.
include CMakeFiles/runTests.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/runTests.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/runTests.dir/flags.make

CMakeFiles/runTests.dir/test/matrix_test.cpp.o: CMakeFiles/runTests.dir/flags.make
CMakeFiles/runTests.dir/test/matrix_test.cpp.o: test/matrix_test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rockerz/gejo/atlatec/git/linear_algebra/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/runTests.dir/test/matrix_test.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/runTests.dir/test/matrix_test.cpp.o -c /home/rockerz/gejo/atlatec/git/linear_algebra/test/matrix_test.cpp

CMakeFiles/runTests.dir/test/matrix_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/runTests.dir/test/matrix_test.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rockerz/gejo/atlatec/git/linear_algebra/test/matrix_test.cpp > CMakeFiles/runTests.dir/test/matrix_test.cpp.i

CMakeFiles/runTests.dir/test/matrix_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/runTests.dir/test/matrix_test.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rockerz/gejo/atlatec/git/linear_algebra/test/matrix_test.cpp -o CMakeFiles/runTests.dir/test/matrix_test.cpp.s

CMakeFiles/runTests.dir/test/matrix_test.cpp.o.requires:

.PHONY : CMakeFiles/runTests.dir/test/matrix_test.cpp.o.requires

CMakeFiles/runTests.dir/test/matrix_test.cpp.o.provides: CMakeFiles/runTests.dir/test/matrix_test.cpp.o.requires
	$(MAKE) -f CMakeFiles/runTests.dir/build.make CMakeFiles/runTests.dir/test/matrix_test.cpp.o.provides.build
.PHONY : CMakeFiles/runTests.dir/test/matrix_test.cpp.o.provides

CMakeFiles/runTests.dir/test/matrix_test.cpp.o.provides.build: CMakeFiles/runTests.dir/test/matrix_test.cpp.o


CMakeFiles/runTests.dir/test/avector_test.cpp.o: CMakeFiles/runTests.dir/flags.make
CMakeFiles/runTests.dir/test/avector_test.cpp.o: test/avector_test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rockerz/gejo/atlatec/git/linear_algebra/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/runTests.dir/test/avector_test.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/runTests.dir/test/avector_test.cpp.o -c /home/rockerz/gejo/atlatec/git/linear_algebra/test/avector_test.cpp

CMakeFiles/runTests.dir/test/avector_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/runTests.dir/test/avector_test.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rockerz/gejo/atlatec/git/linear_algebra/test/avector_test.cpp > CMakeFiles/runTests.dir/test/avector_test.cpp.i

CMakeFiles/runTests.dir/test/avector_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/runTests.dir/test/avector_test.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rockerz/gejo/atlatec/git/linear_algebra/test/avector_test.cpp -o CMakeFiles/runTests.dir/test/avector_test.cpp.s

CMakeFiles/runTests.dir/test/avector_test.cpp.o.requires:

.PHONY : CMakeFiles/runTests.dir/test/avector_test.cpp.o.requires

CMakeFiles/runTests.dir/test/avector_test.cpp.o.provides: CMakeFiles/runTests.dir/test/avector_test.cpp.o.requires
	$(MAKE) -f CMakeFiles/runTests.dir/build.make CMakeFiles/runTests.dir/test/avector_test.cpp.o.provides.build
.PHONY : CMakeFiles/runTests.dir/test/avector_test.cpp.o.provides

CMakeFiles/runTests.dir/test/avector_test.cpp.o.provides.build: CMakeFiles/runTests.dir/test/avector_test.cpp.o


CMakeFiles/runTests.dir/src/matrix.cpp.o: CMakeFiles/runTests.dir/flags.make
CMakeFiles/runTests.dir/src/matrix.cpp.o: src/matrix.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rockerz/gejo/atlatec/git/linear_algebra/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/runTests.dir/src/matrix.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/runTests.dir/src/matrix.cpp.o -c /home/rockerz/gejo/atlatec/git/linear_algebra/src/matrix.cpp

CMakeFiles/runTests.dir/src/matrix.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/runTests.dir/src/matrix.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rockerz/gejo/atlatec/git/linear_algebra/src/matrix.cpp > CMakeFiles/runTests.dir/src/matrix.cpp.i

CMakeFiles/runTests.dir/src/matrix.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/runTests.dir/src/matrix.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rockerz/gejo/atlatec/git/linear_algebra/src/matrix.cpp -o CMakeFiles/runTests.dir/src/matrix.cpp.s

CMakeFiles/runTests.dir/src/matrix.cpp.o.requires:

.PHONY : CMakeFiles/runTests.dir/src/matrix.cpp.o.requires

CMakeFiles/runTests.dir/src/matrix.cpp.o.provides: CMakeFiles/runTests.dir/src/matrix.cpp.o.requires
	$(MAKE) -f CMakeFiles/runTests.dir/build.make CMakeFiles/runTests.dir/src/matrix.cpp.o.provides.build
.PHONY : CMakeFiles/runTests.dir/src/matrix.cpp.o.provides

CMakeFiles/runTests.dir/src/matrix.cpp.o.provides.build: CMakeFiles/runTests.dir/src/matrix.cpp.o


CMakeFiles/runTests.dir/src/avector.cpp.o: CMakeFiles/runTests.dir/flags.make
CMakeFiles/runTests.dir/src/avector.cpp.o: src/avector.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rockerz/gejo/atlatec/git/linear_algebra/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/runTests.dir/src/avector.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/runTests.dir/src/avector.cpp.o -c /home/rockerz/gejo/atlatec/git/linear_algebra/src/avector.cpp

CMakeFiles/runTests.dir/src/avector.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/runTests.dir/src/avector.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rockerz/gejo/atlatec/git/linear_algebra/src/avector.cpp > CMakeFiles/runTests.dir/src/avector.cpp.i

CMakeFiles/runTests.dir/src/avector.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/runTests.dir/src/avector.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rockerz/gejo/atlatec/git/linear_algebra/src/avector.cpp -o CMakeFiles/runTests.dir/src/avector.cpp.s

CMakeFiles/runTests.dir/src/avector.cpp.o.requires:

.PHONY : CMakeFiles/runTests.dir/src/avector.cpp.o.requires

CMakeFiles/runTests.dir/src/avector.cpp.o.provides: CMakeFiles/runTests.dir/src/avector.cpp.o.requires
	$(MAKE) -f CMakeFiles/runTests.dir/build.make CMakeFiles/runTests.dir/src/avector.cpp.o.provides.build
.PHONY : CMakeFiles/runTests.dir/src/avector.cpp.o.provides

CMakeFiles/runTests.dir/src/avector.cpp.o.provides.build: CMakeFiles/runTests.dir/src/avector.cpp.o


# Object files for target runTests
runTests_OBJECTS = \
"CMakeFiles/runTests.dir/test/matrix_test.cpp.o" \
"CMakeFiles/runTests.dir/test/avector_test.cpp.o" \
"CMakeFiles/runTests.dir/src/matrix.cpp.o" \
"CMakeFiles/runTests.dir/src/avector.cpp.o"

# External object files for target runTests
runTests_EXTERNAL_OBJECTS =

runTests: CMakeFiles/runTests.dir/test/matrix_test.cpp.o
runTests: CMakeFiles/runTests.dir/test/avector_test.cpp.o
runTests: CMakeFiles/runTests.dir/src/matrix.cpp.o
runTests: CMakeFiles/runTests.dir/src/avector.cpp.o
runTests: CMakeFiles/runTests.dir/build.make
runTests: /usr/lib/libgtest.a
runTests: CMakeFiles/runTests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/rockerz/gejo/atlatec/git/linear_algebra/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable runTests"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/runTests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/runTests.dir/build: runTests

.PHONY : CMakeFiles/runTests.dir/build

CMakeFiles/runTests.dir/requires: CMakeFiles/runTests.dir/test/matrix_test.cpp.o.requires
CMakeFiles/runTests.dir/requires: CMakeFiles/runTests.dir/test/avector_test.cpp.o.requires
CMakeFiles/runTests.dir/requires: CMakeFiles/runTests.dir/src/matrix.cpp.o.requires
CMakeFiles/runTests.dir/requires: CMakeFiles/runTests.dir/src/avector.cpp.o.requires

.PHONY : CMakeFiles/runTests.dir/requires

CMakeFiles/runTests.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/runTests.dir/cmake_clean.cmake
.PHONY : CMakeFiles/runTests.dir/clean

CMakeFiles/runTests.dir/depend:
	cd /home/rockerz/gejo/atlatec/git/linear_algebra && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rockerz/gejo/atlatec/git/linear_algebra /home/rockerz/gejo/atlatec/git/linear_algebra /home/rockerz/gejo/atlatec/git/linear_algebra /home/rockerz/gejo/atlatec/git/linear_algebra /home/rockerz/gejo/atlatec/git/linear_algebra/CMakeFiles/runTests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/runTests.dir/depend

