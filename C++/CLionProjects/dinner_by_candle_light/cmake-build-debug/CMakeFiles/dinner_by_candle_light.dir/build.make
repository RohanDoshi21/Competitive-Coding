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
CMAKE_SOURCE_DIR = C:\Users\rohan\CLionProjects\dinner_by_candle_light

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\rohan\CLionProjects\dinner_by_candle_light\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/dinner_by_candle_light.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/dinner_by_candle_light.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/dinner_by_candle_light.dir/flags.make

CMakeFiles/dinner_by_candle_light.dir/main.cpp.obj: CMakeFiles/dinner_by_candle_light.dir/flags.make
CMakeFiles/dinner_by_candle_light.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\rohan\CLionProjects\dinner_by_candle_light\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/dinner_by_candle_light.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\dinner_by_candle_light.dir\main.cpp.obj -c C:\Users\rohan\CLionProjects\dinner_by_candle_light\main.cpp

CMakeFiles/dinner_by_candle_light.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dinner_by_candle_light.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\rohan\CLionProjects\dinner_by_candle_light\main.cpp > CMakeFiles\dinner_by_candle_light.dir\main.cpp.i

CMakeFiles/dinner_by_candle_light.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dinner_by_candle_light.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\rohan\CLionProjects\dinner_by_candle_light\main.cpp -o CMakeFiles\dinner_by_candle_light.dir\main.cpp.s

# Object files for target dinner_by_candle_light
dinner_by_candle_light_OBJECTS = \
"CMakeFiles/dinner_by_candle_light.dir/main.cpp.obj"

# External object files for target dinner_by_candle_light
dinner_by_candle_light_EXTERNAL_OBJECTS =

dinner_by_candle_light.exe: CMakeFiles/dinner_by_candle_light.dir/main.cpp.obj
dinner_by_candle_light.exe: CMakeFiles/dinner_by_candle_light.dir/build.make
dinner_by_candle_light.exe: CMakeFiles/dinner_by_candle_light.dir/linklibs.rsp
dinner_by_candle_light.exe: CMakeFiles/dinner_by_candle_light.dir/objects1.rsp
dinner_by_candle_light.exe: CMakeFiles/dinner_by_candle_light.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\rohan\CLionProjects\dinner_by_candle_light\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable dinner_by_candle_light.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\dinner_by_candle_light.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/dinner_by_candle_light.dir/build: dinner_by_candle_light.exe

.PHONY : CMakeFiles/dinner_by_candle_light.dir/build

CMakeFiles/dinner_by_candle_light.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\dinner_by_candle_light.dir\cmake_clean.cmake
.PHONY : CMakeFiles/dinner_by_candle_light.dir/clean

CMakeFiles/dinner_by_candle_light.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\rohan\CLionProjects\dinner_by_candle_light C:\Users\rohan\CLionProjects\dinner_by_candle_light C:\Users\rohan\CLionProjects\dinner_by_candle_light\cmake-build-debug C:\Users\rohan\CLionProjects\dinner_by_candle_light\cmake-build-debug C:\Users\rohan\CLionProjects\dinner_by_candle_light\cmake-build-debug\CMakeFiles\dinner_by_candle_light.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/dinner_by_candle_light.dir/depend

