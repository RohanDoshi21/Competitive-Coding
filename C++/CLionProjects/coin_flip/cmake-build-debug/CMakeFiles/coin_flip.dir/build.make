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
CMAKE_SOURCE_DIR = C:\Users\rohan\CLionProjects\coin_flip

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\rohan\CLionProjects\coin_flip\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/coin_flip.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/coin_flip.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/coin_flip.dir/flags.make

CMakeFiles/coin_flip.dir/main.cpp.obj: CMakeFiles/coin_flip.dir/flags.make
CMakeFiles/coin_flip.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\rohan\CLionProjects\coin_flip\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/coin_flip.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\coin_flip.dir\main.cpp.obj -c C:\Users\rohan\CLionProjects\coin_flip\main.cpp

CMakeFiles/coin_flip.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/coin_flip.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\rohan\CLionProjects\coin_flip\main.cpp > CMakeFiles\coin_flip.dir\main.cpp.i

CMakeFiles/coin_flip.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/coin_flip.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\rohan\CLionProjects\coin_flip\main.cpp -o CMakeFiles\coin_flip.dir\main.cpp.s

# Object files for target coin_flip
coin_flip_OBJECTS = \
"CMakeFiles/coin_flip.dir/main.cpp.obj"

# External object files for target coin_flip
coin_flip_EXTERNAL_OBJECTS =

coin_flip.exe: CMakeFiles/coin_flip.dir/main.cpp.obj
coin_flip.exe: CMakeFiles/coin_flip.dir/build.make
coin_flip.exe: CMakeFiles/coin_flip.dir/linklibs.rsp
coin_flip.exe: CMakeFiles/coin_flip.dir/objects1.rsp
coin_flip.exe: CMakeFiles/coin_flip.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\rohan\CLionProjects\coin_flip\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable coin_flip.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\coin_flip.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/coin_flip.dir/build: coin_flip.exe

.PHONY : CMakeFiles/coin_flip.dir/build

CMakeFiles/coin_flip.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\coin_flip.dir\cmake_clean.cmake
.PHONY : CMakeFiles/coin_flip.dir/clean

CMakeFiles/coin_flip.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\rohan\CLionProjects\coin_flip C:\Users\rohan\CLionProjects\coin_flip C:\Users\rohan\CLionProjects\coin_flip\cmake-build-debug C:\Users\rohan\CLionProjects\coin_flip\cmake-build-debug C:\Users\rohan\CLionProjects\coin_flip\cmake-build-debug\CMakeFiles\coin_flip.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/coin_flip.dir/depend

