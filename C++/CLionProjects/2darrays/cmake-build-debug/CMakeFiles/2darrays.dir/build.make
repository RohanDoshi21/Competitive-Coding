# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\rohan\CLionProjects\2darrays

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\rohan\CLionProjects\2darrays\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/2darrays.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/2darrays.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/2darrays.dir/flags.make

CMakeFiles/2darrays.dir/main.cpp.obj: CMakeFiles/2darrays.dir/flags.make
CMakeFiles/2darrays.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\rohan\CLionProjects\2darrays\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/2darrays.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\2darrays.dir\main.cpp.obj -c C:\Users\rohan\CLionProjects\2darrays\main.cpp

CMakeFiles/2darrays.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/2darrays.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\rohan\CLionProjects\2darrays\main.cpp > CMakeFiles\2darrays.dir\main.cpp.i

CMakeFiles/2darrays.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/2darrays.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\rohan\CLionProjects\2darrays\main.cpp -o CMakeFiles\2darrays.dir\main.cpp.s

# Object files for target 2darrays
2darrays_OBJECTS = \
"CMakeFiles/2darrays.dir/main.cpp.obj"

# External object files for target 2darrays
2darrays_EXTERNAL_OBJECTS =

2darrays.exe: CMakeFiles/2darrays.dir/main.cpp.obj
2darrays.exe: CMakeFiles/2darrays.dir/build.make
2darrays.exe: CMakeFiles/2darrays.dir/linklibs.rsp
2darrays.exe: CMakeFiles/2darrays.dir/objects1.rsp
2darrays.exe: CMakeFiles/2darrays.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\rohan\CLionProjects\2darrays\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 2darrays.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\2darrays.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/2darrays.dir/build: 2darrays.exe

.PHONY : CMakeFiles/2darrays.dir/build

CMakeFiles/2darrays.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\2darrays.dir\cmake_clean.cmake
.PHONY : CMakeFiles/2darrays.dir/clean

CMakeFiles/2darrays.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\rohan\CLionProjects\2darrays C:\Users\rohan\CLionProjects\2darrays C:\Users\rohan\CLionProjects\2darrays\cmake-build-debug C:\Users\rohan\CLionProjects\2darrays\cmake-build-debug C:\Users\rohan\CLionProjects\2darrays\cmake-build-debug\CMakeFiles\2darrays.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/2darrays.dir/depend

