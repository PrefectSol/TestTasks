# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/prefect/Code/C++/Tasks/Lab6/L6

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/prefect/Code/C++/Tasks/Lab6/build-L6-Desktop-Debug

# Utility rule file for L6_autogen.

# Include any custom commands dependencies for this target.
include CMakeFiles/L6_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/L6_autogen.dir/progress.make

CMakeFiles/L6_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/prefect/Code/C++/Tasks/Lab6/build-L6-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target L6"
	/usr/bin/cmake -E cmake_autogen /home/prefect/Code/C++/Tasks/Lab6/build-L6-Desktop-Debug/CMakeFiles/L6_autogen.dir/AutogenInfo.json Debug

L6_autogen: CMakeFiles/L6_autogen
L6_autogen: CMakeFiles/L6_autogen.dir/build.make
.PHONY : L6_autogen

# Rule to build all files generated by this target.
CMakeFiles/L6_autogen.dir/build: L6_autogen
.PHONY : CMakeFiles/L6_autogen.dir/build

CMakeFiles/L6_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/L6_autogen.dir/cmake_clean.cmake
.PHONY : CMakeFiles/L6_autogen.dir/clean

CMakeFiles/L6_autogen.dir/depend:
	cd /home/prefect/Code/C++/Tasks/Lab6/build-L6-Desktop-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/prefect/Code/C++/Tasks/Lab6/L6 /home/prefect/Code/C++/Tasks/Lab6/L6 /home/prefect/Code/C++/Tasks/Lab6/build-L6-Desktop-Debug /home/prefect/Code/C++/Tasks/Lab6/build-L6-Desktop-Debug /home/prefect/Code/C++/Tasks/Lab6/build-L6-Desktop-Debug/CMakeFiles/L6_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/L6_autogen.dir/depend
