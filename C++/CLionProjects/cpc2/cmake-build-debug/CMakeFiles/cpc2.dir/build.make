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
CMAKE_SOURCE_DIR = C:\Users\rohan\CLionProjects\cpc2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\rohan\CLionProjects\cpc2\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/cpc2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/cpc2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cpc2.dir/flags.make

CMakeFiles/cpc2.dir/main.cpp.obj: CMakeFiles/cpc2.dir/flags.make
CMakeFiles/cpc2.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\rohan\CLionProjects\cpc2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cpc2.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\cpc2.dir\main.cpp.obj -c C:\Users\rohan\CLionProjects\cpc2\main.cpp

CMakeFiles/cpc2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cpc2.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\rohan\CLionProjects\cpc2\main.cpp > CMakeFiles\cpc2.dir\main.cpp.i

CMakeFiles/cpc2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cpc2.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\rohan\CLionProjects\cpc2\main.cpp -o CMakeFiles\cpc2.dir\main.cpp.s

# Object files for target cpc2
cpc2_OBJECTS = \
"CMakeFiles/cpc2.dir/main.cpp.obj"

# External object files for target cpc2
cpc2_EXTERNAL_OBJECTS =

cpc2.exe: CMakeFiles/cpc2.dir/main.cpp.obj
cpc2.exe: CMakeFiles/cpc2.dir/build.make
cpc2.exe: CMakeFiles/cpc2.dir/linklibs.rsp
cpc2.exe: CMakeFiles/cpc2.dir/objects1.rsp
cpc2.exe: CMakeFiles/cpc2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\rohan\CLionProjects\cpc2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable cpc2.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\cpc2.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cpc2.dir/build: cpc2.exe

.PHONY : CMakeFiles/cpc2.dir/build

CMakeFiles/cpc2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\cpc2.dir\cmake_clean.cmake
.PHONY : CMakeFiles/cpc2.dir/clean

CMakeFiles/cpc2.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\rohan\CLionProjects\cpc2 C:\Users\rohan\CLionProjects\cpc2 C:\Users\rohan\CLionProjects\cpc2\cmake-build-debug C:\Users\rohan\CLionProjects\cpc2\cmake-build-debug C:\Users\rohan\CLionProjects\cpc2\cmake-build-debug\CMakeFiles\cpc2.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cpc2.dir/depend

