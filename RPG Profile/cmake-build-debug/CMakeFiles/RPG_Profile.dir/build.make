# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "E:\Computer Science\CPP\RPG Profile"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "E:\Computer Science\CPP\RPG Profile\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/RPG_Profile.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/RPG_Profile.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/RPG_Profile.dir/flags.make

CMakeFiles/RPG_Profile.dir/main.cpp.obj: CMakeFiles/RPG_Profile.dir/flags.make
CMakeFiles/RPG_Profile.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="E:\Computer Science\CPP\RPG Profile\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/RPG_Profile.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\RPG_Profile.dir\main.cpp.obj -c "E:\Computer Science\CPP\RPG Profile\main.cpp"

CMakeFiles/RPG_Profile.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RPG_Profile.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "E:\Computer Science\CPP\RPG Profile\main.cpp" > CMakeFiles\RPG_Profile.dir\main.cpp.i

CMakeFiles/RPG_Profile.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RPG_Profile.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "E:\Computer Science\CPP\RPG Profile\main.cpp" -o CMakeFiles\RPG_Profile.dir\main.cpp.s

# Object files for target RPG_Profile
RPG_Profile_OBJECTS = \
"CMakeFiles/RPG_Profile.dir/main.cpp.obj"

# External object files for target RPG_Profile
RPG_Profile_EXTERNAL_OBJECTS =

RPG_Profile.exe: CMakeFiles/RPG_Profile.dir/main.cpp.obj
RPG_Profile.exe: CMakeFiles/RPG_Profile.dir/build.make
RPG_Profile.exe: CMakeFiles/RPG_Profile.dir/linklibs.rsp
RPG_Profile.exe: CMakeFiles/RPG_Profile.dir/objects1.rsp
RPG_Profile.exe: CMakeFiles/RPG_Profile.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="E:\Computer Science\CPP\RPG Profile\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable RPG_Profile.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\RPG_Profile.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/RPG_Profile.dir/build: RPG_Profile.exe
.PHONY : CMakeFiles/RPG_Profile.dir/build

CMakeFiles/RPG_Profile.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\RPG_Profile.dir\cmake_clean.cmake
.PHONY : CMakeFiles/RPG_Profile.dir/clean

CMakeFiles/RPG_Profile.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "E:\Computer Science\CPP\RPG Profile" "E:\Computer Science\CPP\RPG Profile" "E:\Computer Science\CPP\RPG Profile\cmake-build-debug" "E:\Computer Science\CPP\RPG Profile\cmake-build-debug" "E:\Computer Science\CPP\RPG Profile\cmake-build-debug\CMakeFiles\RPG_Profile.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/RPG_Profile.dir/depend
