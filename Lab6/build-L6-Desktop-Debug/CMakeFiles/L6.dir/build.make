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

# Include any dependencies generated for this target.
include CMakeFiles/L6.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/L6.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/L6.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/L6.dir/flags.make

CMakeFiles/L6.dir/L6_autogen/mocs_compilation.cpp.o: CMakeFiles/L6.dir/flags.make
CMakeFiles/L6.dir/L6_autogen/mocs_compilation.cpp.o: L6_autogen/mocs_compilation.cpp
CMakeFiles/L6.dir/L6_autogen/mocs_compilation.cpp.o: CMakeFiles/L6.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/prefect/Code/C++/Tasks/Lab6/build-L6-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/L6.dir/L6_autogen/mocs_compilation.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/L6.dir/L6_autogen/mocs_compilation.cpp.o -MF CMakeFiles/L6.dir/L6_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/L6.dir/L6_autogen/mocs_compilation.cpp.o -c /home/prefect/Code/C++/Tasks/Lab6/build-L6-Desktop-Debug/L6_autogen/mocs_compilation.cpp

CMakeFiles/L6.dir/L6_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/L6.dir/L6_autogen/mocs_compilation.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/prefect/Code/C++/Tasks/Lab6/build-L6-Desktop-Debug/L6_autogen/mocs_compilation.cpp > CMakeFiles/L6.dir/L6_autogen/mocs_compilation.cpp.i

CMakeFiles/L6.dir/L6_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/L6.dir/L6_autogen/mocs_compilation.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/prefect/Code/C++/Tasks/Lab6/build-L6-Desktop-Debug/L6_autogen/mocs_compilation.cpp -o CMakeFiles/L6.dir/L6_autogen/mocs_compilation.cpp.s

CMakeFiles/L6.dir/main.cpp.o: CMakeFiles/L6.dir/flags.make
CMakeFiles/L6.dir/main.cpp.o: /home/prefect/Code/C++/Tasks/Lab6/L6/main.cpp
CMakeFiles/L6.dir/main.cpp.o: CMakeFiles/L6.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/prefect/Code/C++/Tasks/Lab6/build-L6-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/L6.dir/main.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/L6.dir/main.cpp.o -MF CMakeFiles/L6.dir/main.cpp.o.d -o CMakeFiles/L6.dir/main.cpp.o -c /home/prefect/Code/C++/Tasks/Lab6/L6/main.cpp

CMakeFiles/L6.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/L6.dir/main.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/prefect/Code/C++/Tasks/Lab6/L6/main.cpp > CMakeFiles/L6.dir/main.cpp.i

CMakeFiles/L6.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/L6.dir/main.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/prefect/Code/C++/Tasks/Lab6/L6/main.cpp -o CMakeFiles/L6.dir/main.cpp.s

CMakeFiles/L6.dir/mainwindow.cpp.o: CMakeFiles/L6.dir/flags.make
CMakeFiles/L6.dir/mainwindow.cpp.o: /home/prefect/Code/C++/Tasks/Lab6/L6/mainwindow.cpp
CMakeFiles/L6.dir/mainwindow.cpp.o: CMakeFiles/L6.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/prefect/Code/C++/Tasks/Lab6/build-L6-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/L6.dir/mainwindow.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/L6.dir/mainwindow.cpp.o -MF CMakeFiles/L6.dir/mainwindow.cpp.o.d -o CMakeFiles/L6.dir/mainwindow.cpp.o -c /home/prefect/Code/C++/Tasks/Lab6/L6/mainwindow.cpp

CMakeFiles/L6.dir/mainwindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/L6.dir/mainwindow.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/prefect/Code/C++/Tasks/Lab6/L6/mainwindow.cpp > CMakeFiles/L6.dir/mainwindow.cpp.i

CMakeFiles/L6.dir/mainwindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/L6.dir/mainwindow.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/prefect/Code/C++/Tasks/Lab6/L6/mainwindow.cpp -o CMakeFiles/L6.dir/mainwindow.cpp.s

CMakeFiles/L6.dir/fish.cpp.o: CMakeFiles/L6.dir/flags.make
CMakeFiles/L6.dir/fish.cpp.o: /home/prefect/Code/C++/Tasks/Lab6/L6/fish.cpp
CMakeFiles/L6.dir/fish.cpp.o: CMakeFiles/L6.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/prefect/Code/C++/Tasks/Lab6/build-L6-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/L6.dir/fish.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/L6.dir/fish.cpp.o -MF CMakeFiles/L6.dir/fish.cpp.o.d -o CMakeFiles/L6.dir/fish.cpp.o -c /home/prefect/Code/C++/Tasks/Lab6/L6/fish.cpp

CMakeFiles/L6.dir/fish.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/L6.dir/fish.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/prefect/Code/C++/Tasks/Lab6/L6/fish.cpp > CMakeFiles/L6.dir/fish.cpp.i

CMakeFiles/L6.dir/fish.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/L6.dir/fish.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/prefect/Code/C++/Tasks/Lab6/L6/fish.cpp -o CMakeFiles/L6.dir/fish.cpp.s

# Object files for target L6
L6_OBJECTS = \
"CMakeFiles/L6.dir/L6_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/L6.dir/main.cpp.o" \
"CMakeFiles/L6.dir/mainwindow.cpp.o" \
"CMakeFiles/L6.dir/fish.cpp.o"

# External object files for target L6
L6_EXTERNAL_OBJECTS =

L6: CMakeFiles/L6.dir/L6_autogen/mocs_compilation.cpp.o
L6: CMakeFiles/L6.dir/main.cpp.o
L6: CMakeFiles/L6.dir/mainwindow.cpp.o
L6: CMakeFiles/L6.dir/fish.cpp.o
L6: CMakeFiles/L6.dir/build.make
L6: /usr/lib64/libQt5Widgets.so.5.15.6
L6: /usr/lib64/libQt5Gui.so.5.15.6
L6: /usr/lib64/libQt5Core.so.5.15.6
L6: CMakeFiles/L6.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/prefect/Code/C++/Tasks/Lab6/build-L6-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable L6"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/L6.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/L6.dir/build: L6
.PHONY : CMakeFiles/L6.dir/build

CMakeFiles/L6.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/L6.dir/cmake_clean.cmake
.PHONY : CMakeFiles/L6.dir/clean

CMakeFiles/L6.dir/depend:
	cd /home/prefect/Code/C++/Tasks/Lab6/build-L6-Desktop-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/prefect/Code/C++/Tasks/Lab6/L6 /home/prefect/Code/C++/Tasks/Lab6/L6 /home/prefect/Code/C++/Tasks/Lab6/build-L6-Desktop-Debug /home/prefect/Code/C++/Tasks/Lab6/build-L6-Desktop-Debug /home/prefect/Code/C++/Tasks/Lab6/build-L6-Desktop-Debug/CMakeFiles/L6.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/L6.dir/depend

