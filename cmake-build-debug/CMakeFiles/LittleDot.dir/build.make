# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.9

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Users\fbeze\AppData\Roaming\JetBrains\CLion 2017.3.4\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Users\fbeze\AppData\Roaming\JetBrains\CLion 2017.3.4\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\fbeze\Desktop\LittleDot

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\fbeze\Desktop\LittleDot\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/LittleDot.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/LittleDot.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/LittleDot.dir/flags.make

CMakeFiles/LittleDot.dir/main.cpp.obj: CMakeFiles/LittleDot.dir/flags.make
CMakeFiles/LittleDot.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\fbeze\Desktop\LittleDot\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/LittleDot.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-6~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\LittleDot.dir\main.cpp.obj -c C:\Users\fbeze\Desktop\LittleDot\main.cpp

CMakeFiles/LittleDot.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LittleDot.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-6~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\fbeze\Desktop\LittleDot\main.cpp > CMakeFiles\LittleDot.dir\main.cpp.i

CMakeFiles/LittleDot.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LittleDot.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-6~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\fbeze\Desktop\LittleDot\main.cpp -o CMakeFiles\LittleDot.dir\main.cpp.s

CMakeFiles/LittleDot.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/LittleDot.dir/main.cpp.obj.requires

CMakeFiles/LittleDot.dir/main.cpp.obj.provides: CMakeFiles/LittleDot.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\LittleDot.dir\build.make CMakeFiles/LittleDot.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/LittleDot.dir/main.cpp.obj.provides

CMakeFiles/LittleDot.dir/main.cpp.obj.provides.build: CMakeFiles/LittleDot.dir/main.cpp.obj


CMakeFiles/LittleDot.dir/GameManager.cpp.obj: CMakeFiles/LittleDot.dir/flags.make
CMakeFiles/LittleDot.dir/GameManager.cpp.obj: ../GameManager.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\fbeze\Desktop\LittleDot\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/LittleDot.dir/GameManager.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-6~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\LittleDot.dir\GameManager.cpp.obj -c C:\Users\fbeze\Desktop\LittleDot\GameManager.cpp

CMakeFiles/LittleDot.dir/GameManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LittleDot.dir/GameManager.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-6~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\fbeze\Desktop\LittleDot\GameManager.cpp > CMakeFiles\LittleDot.dir\GameManager.cpp.i

CMakeFiles/LittleDot.dir/GameManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LittleDot.dir/GameManager.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-6~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\fbeze\Desktop\LittleDot\GameManager.cpp -o CMakeFiles\LittleDot.dir\GameManager.cpp.s

CMakeFiles/LittleDot.dir/GameManager.cpp.obj.requires:

.PHONY : CMakeFiles/LittleDot.dir/GameManager.cpp.obj.requires

CMakeFiles/LittleDot.dir/GameManager.cpp.obj.provides: CMakeFiles/LittleDot.dir/GameManager.cpp.obj.requires
	$(MAKE) -f CMakeFiles\LittleDot.dir\build.make CMakeFiles/LittleDot.dir/GameManager.cpp.obj.provides.build
.PHONY : CMakeFiles/LittleDot.dir/GameManager.cpp.obj.provides

CMakeFiles/LittleDot.dir/GameManager.cpp.obj.provides.build: CMakeFiles/LittleDot.dir/GameManager.cpp.obj


CMakeFiles/LittleDot.dir/Pack.cpp.obj: CMakeFiles/LittleDot.dir/flags.make
CMakeFiles/LittleDot.dir/Pack.cpp.obj: ../Pack.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\fbeze\Desktop\LittleDot\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/LittleDot.dir/Pack.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-6~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\LittleDot.dir\Pack.cpp.obj -c C:\Users\fbeze\Desktop\LittleDot\Pack.cpp

CMakeFiles/LittleDot.dir/Pack.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LittleDot.dir/Pack.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-6~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\fbeze\Desktop\LittleDot\Pack.cpp > CMakeFiles\LittleDot.dir\Pack.cpp.i

CMakeFiles/LittleDot.dir/Pack.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LittleDot.dir/Pack.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-6~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\fbeze\Desktop\LittleDot\Pack.cpp -o CMakeFiles\LittleDot.dir\Pack.cpp.s

CMakeFiles/LittleDot.dir/Pack.cpp.obj.requires:

.PHONY : CMakeFiles/LittleDot.dir/Pack.cpp.obj.requires

CMakeFiles/LittleDot.dir/Pack.cpp.obj.provides: CMakeFiles/LittleDot.dir/Pack.cpp.obj.requires
	$(MAKE) -f CMakeFiles\LittleDot.dir\build.make CMakeFiles/LittleDot.dir/Pack.cpp.obj.provides.build
.PHONY : CMakeFiles/LittleDot.dir/Pack.cpp.obj.provides

CMakeFiles/LittleDot.dir/Pack.cpp.obj.provides.build: CMakeFiles/LittleDot.dir/Pack.cpp.obj


CMakeFiles/LittleDot.dir/Card.cpp.obj: CMakeFiles/LittleDot.dir/flags.make
CMakeFiles/LittleDot.dir/Card.cpp.obj: ../Card.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\fbeze\Desktop\LittleDot\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/LittleDot.dir/Card.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-6~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\LittleDot.dir\Card.cpp.obj -c C:\Users\fbeze\Desktop\LittleDot\Card.cpp

CMakeFiles/LittleDot.dir/Card.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LittleDot.dir/Card.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-6~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\fbeze\Desktop\LittleDot\Card.cpp > CMakeFiles\LittleDot.dir\Card.cpp.i

CMakeFiles/LittleDot.dir/Card.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LittleDot.dir/Card.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-6~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\fbeze\Desktop\LittleDot\Card.cpp -o CMakeFiles\LittleDot.dir\Card.cpp.s

CMakeFiles/LittleDot.dir/Card.cpp.obj.requires:

.PHONY : CMakeFiles/LittleDot.dir/Card.cpp.obj.requires

CMakeFiles/LittleDot.dir/Card.cpp.obj.provides: CMakeFiles/LittleDot.dir/Card.cpp.obj.requires
	$(MAKE) -f CMakeFiles\LittleDot.dir\build.make CMakeFiles/LittleDot.dir/Card.cpp.obj.provides.build
.PHONY : CMakeFiles/LittleDot.dir/Card.cpp.obj.provides

CMakeFiles/LittleDot.dir/Card.cpp.obj.provides.build: CMakeFiles/LittleDot.dir/Card.cpp.obj


# Object files for target LittleDot
LittleDot_OBJECTS = \
"CMakeFiles/LittleDot.dir/main.cpp.obj" \
"CMakeFiles/LittleDot.dir/GameManager.cpp.obj" \
"CMakeFiles/LittleDot.dir/Pack.cpp.obj" \
"CMakeFiles/LittleDot.dir/Card.cpp.obj"

# External object files for target LittleDot
LittleDot_EXTERNAL_OBJECTS =

LittleDot.exe: CMakeFiles/LittleDot.dir/main.cpp.obj
LittleDot.exe: CMakeFiles/LittleDot.dir/GameManager.cpp.obj
LittleDot.exe: CMakeFiles/LittleDot.dir/Pack.cpp.obj
LittleDot.exe: CMakeFiles/LittleDot.dir/Card.cpp.obj
LittleDot.exe: CMakeFiles/LittleDot.dir/build.make
LittleDot.exe: CMakeFiles/LittleDot.dir/linklibs.rsp
LittleDot.exe: CMakeFiles/LittleDot.dir/objects1.rsp
LittleDot.exe: CMakeFiles/LittleDot.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\fbeze\Desktop\LittleDot\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable LittleDot.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\LittleDot.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/LittleDot.dir/build: LittleDot.exe

.PHONY : CMakeFiles/LittleDot.dir/build

CMakeFiles/LittleDot.dir/requires: CMakeFiles/LittleDot.dir/main.cpp.obj.requires
CMakeFiles/LittleDot.dir/requires: CMakeFiles/LittleDot.dir/GameManager.cpp.obj.requires
CMakeFiles/LittleDot.dir/requires: CMakeFiles/LittleDot.dir/Pack.cpp.obj.requires
CMakeFiles/LittleDot.dir/requires: CMakeFiles/LittleDot.dir/Card.cpp.obj.requires

.PHONY : CMakeFiles/LittleDot.dir/requires

CMakeFiles/LittleDot.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\LittleDot.dir\cmake_clean.cmake
.PHONY : CMakeFiles/LittleDot.dir/clean

CMakeFiles/LittleDot.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\fbeze\Desktop\LittleDot C:\Users\fbeze\Desktop\LittleDot C:\Users\fbeze\Desktop\LittleDot\cmake-build-debug C:\Users\fbeze\Desktop\LittleDot\cmake-build-debug C:\Users\fbeze\Desktop\LittleDot\cmake-build-debug\CMakeFiles\LittleDot.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/LittleDot.dir/depend

