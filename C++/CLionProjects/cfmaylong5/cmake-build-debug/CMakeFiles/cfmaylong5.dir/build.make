# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\rohan\CLionProjects\cfmaylong5

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\rohan\CLionProjects\cfmaylong5\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/cfmaylong5.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/cfmaylong5.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cfmaylong5.dir/flags.make

CMakeFiles/cfmaylong5.dir/main.cpp.obj: CMakeFiles/cfmaylong5.dir/flags.make
CMakeFiles/cfmaylong5.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\rohan\CLionProjects\cfmaylong5\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cfmaylong5.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\cfmaylong5.dir\main.cpp.obj -c C:\Users\rohan\CLionProjects\cfmaylong5\main.cpp

CMakeFiles/cfmaylong5.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cfmaylong5.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\rohan\CLionProjects\cfmaylong5\main.cpp > CMakeFiles\cfmaylong5.dir\main.cpp.i

CMakeFiles/cfmaylong5.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cfmaylong5.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\rohan\CLionProjects\cfmaylong5\main.cpp -o CMakeFiles\cfmaylong5.dir\main.cpp.s

# Object files for target cfmaylong5
cfmaylong5_OBJECTS = \
"CMakeFiles/cfmaylong5.dir/main.cpp.obj"

# External object files for target cfmaylong5
cfmaylong5_EXTERNAL_OBJECTS =

cfmaylong5.exe: CMakeFiles/cfmaylong5.dir/main.cpp.obj
cfmaylong5.exe: CMakeFiles/cfmaylong5.dir/build.make
cfmaylong5.exe: CMakeFiles/cfmaylong5.dir/linklibs.rsp
cfmaylong5.exe: CMakeFiles/cfmaylong5.dir/objects1.rsp
cfmaylong5.exe: CMakeFiles/cfmaylong5.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\rohan\CLionProjects\cfmaylong5\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable cfmaylong5.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\cfmaylong5.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cfmaylong5.dir/build: cfmaylong5.exe

.PHONY : CMakeFiles/cfmaylong5.dir/build

CMakeFiles/cfmaylong5.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\cfmaylong5.dir\cmake_clean.cmake
.PHONY : CMakeFiles/cfmaylong5.dir/clean

CMakeFiles/cfmaylong5.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\rohan\CLionProjects\cfmaylong5 C:\Users\rohan\CLionProjects\cfmaylong5 C:\Users\rohan\CLionProjects\cfmaylong5\cmake-build-debug C:\Users\rohan\CLionProjects\cfmaylong5\cmake-build-debug C:\Users\rohan\CLionProjects\cfmaylong5\cmake-build-debug\CMakeFiles\cfmaylong5.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cfmaylong5.dir/depend

