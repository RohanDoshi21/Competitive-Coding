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
CMAKE_SOURCE_DIR = C:\Users\rohan\CLionProjects\min

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\rohan\CLionProjects\min\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/min.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/min.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/min.dir/flags.make

CMakeFiles/min.dir/main.cpp.obj: CMakeFiles/min.dir/flags.make
CMakeFiles/min.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\rohan\CLionProjects\min\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/min.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\min.dir\main.cpp.obj -c C:\Users\rohan\CLionProjects\min\main.cpp

CMakeFiles/min.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/min.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\rohan\CLionProjects\min\main.cpp > CMakeFiles\min.dir\main.cpp.i

CMakeFiles/min.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/min.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\rohan\CLionProjects\min\main.cpp -o CMakeFiles\min.dir\main.cpp.s

# Object files for target min
min_OBJECTS = \
"CMakeFiles/min.dir/main.cpp.obj"

# External object files for target min
min_EXTERNAL_OBJECTS =

min.exe: CMakeFiles/min.dir/main.cpp.obj
min.exe: CMakeFiles/min.dir/build.make
min.exe: CMakeFiles/min.dir/linklibs.rsp
min.exe: CMakeFiles/min.dir/objects1.rsp
min.exe: CMakeFiles/min.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\rohan\CLionProjects\min\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable min.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\min.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/min.dir/build: min.exe

.PHONY : CMakeFiles/min.dir/build

CMakeFiles/min.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\min.dir\cmake_clean.cmake
.PHONY : CMakeFiles/min.dir/clean

CMakeFiles/min.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\rohan\CLionProjects\min C:\Users\rohan\CLionProjects\min C:\Users\rohan\CLionProjects\min\cmake-build-debug C:\Users\rohan\CLionProjects\min\cmake-build-debug C:\Users\rohan\CLionProjects\min\cmake-build-debug\CMakeFiles\min.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/min.dir/depend

