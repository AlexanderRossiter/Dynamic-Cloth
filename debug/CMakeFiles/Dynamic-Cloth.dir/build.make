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
CMAKE_SOURCE_DIR = /home/alex/dev/Dynamic-Cloth

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/alex/dev/Dynamic-Cloth/debug

# Include any dependencies generated for this target.
include CMakeFiles/Dynamic-Cloth.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Dynamic-Cloth.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Dynamic-Cloth.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Dynamic-Cloth.dir/flags.make

CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/main.cpp.o: CMakeFiles/Dynamic-Cloth.dir/flags.make
CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/main.cpp.o: ../dynamic_cloth/main.cpp
CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/main.cpp.o: CMakeFiles/Dynamic-Cloth.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/dev/Dynamic-Cloth/debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/main.cpp.o -MF CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/main.cpp.o.d -o CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/main.cpp.o -c /home/alex/dev/Dynamic-Cloth/dynamic_cloth/main.cpp

CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex/dev/Dynamic-Cloth/dynamic_cloth/main.cpp > CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/main.cpp.i

CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex/dev/Dynamic-Cloth/dynamic_cloth/main.cpp -o CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/main.cpp.s

CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/util.cpp.o: CMakeFiles/Dynamic-Cloth.dir/flags.make
CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/util.cpp.o: ../dynamic_cloth/util.cpp
CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/util.cpp.o: CMakeFiles/Dynamic-Cloth.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/dev/Dynamic-Cloth/debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/util.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/util.cpp.o -MF CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/util.cpp.o.d -o CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/util.cpp.o -c /home/alex/dev/Dynamic-Cloth/dynamic_cloth/util.cpp

CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/util.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/util.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex/dev/Dynamic-Cloth/dynamic_cloth/util.cpp > CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/util.cpp.i

CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/util.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/util.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex/dev/Dynamic-Cloth/dynamic_cloth/util.cpp -o CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/util.cpp.s

CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/EventHandler.cpp.o: CMakeFiles/Dynamic-Cloth.dir/flags.make
CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/EventHandler.cpp.o: ../dynamic_cloth/EventHandler.cpp
CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/EventHandler.cpp.o: CMakeFiles/Dynamic-Cloth.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/dev/Dynamic-Cloth/debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/EventHandler.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/EventHandler.cpp.o -MF CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/EventHandler.cpp.o.d -o CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/EventHandler.cpp.o -c /home/alex/dev/Dynamic-Cloth/dynamic_cloth/EventHandler.cpp

CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/EventHandler.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/EventHandler.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex/dev/Dynamic-Cloth/dynamic_cloth/EventHandler.cpp > CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/EventHandler.cpp.i

CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/EventHandler.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/EventHandler.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex/dev/Dynamic-Cloth/dynamic_cloth/EventHandler.cpp -o CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/EventHandler.cpp.s

CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/physics/Cloth.cpp.o: CMakeFiles/Dynamic-Cloth.dir/flags.make
CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/physics/Cloth.cpp.o: ../dynamic_cloth/physics/Cloth.cpp
CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/physics/Cloth.cpp.o: CMakeFiles/Dynamic-Cloth.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/dev/Dynamic-Cloth/debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/physics/Cloth.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/physics/Cloth.cpp.o -MF CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/physics/Cloth.cpp.o.d -o CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/physics/Cloth.cpp.o -c /home/alex/dev/Dynamic-Cloth/dynamic_cloth/physics/Cloth.cpp

CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/physics/Cloth.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/physics/Cloth.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex/dev/Dynamic-Cloth/dynamic_cloth/physics/Cloth.cpp > CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/physics/Cloth.cpp.i

CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/physics/Cloth.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/physics/Cloth.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex/dev/Dynamic-Cloth/dynamic_cloth/physics/Cloth.cpp -o CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/physics/Cloth.cpp.s

CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/physics/ClothLoader.cpp.o: CMakeFiles/Dynamic-Cloth.dir/flags.make
CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/physics/ClothLoader.cpp.o: ../dynamic_cloth/physics/ClothLoader.cpp
CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/physics/ClothLoader.cpp.o: CMakeFiles/Dynamic-Cloth.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/dev/Dynamic-Cloth/debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/physics/ClothLoader.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/physics/ClothLoader.cpp.o -MF CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/physics/ClothLoader.cpp.o.d -o CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/physics/ClothLoader.cpp.o -c /home/alex/dev/Dynamic-Cloth/dynamic_cloth/physics/ClothLoader.cpp

CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/physics/ClothLoader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/physics/ClothLoader.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex/dev/Dynamic-Cloth/dynamic_cloth/physics/ClothLoader.cpp > CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/physics/ClothLoader.cpp.i

CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/physics/ClothLoader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/physics/ClothLoader.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex/dev/Dynamic-Cloth/dynamic_cloth/physics/ClothLoader.cpp -o CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/physics/ClothLoader.cpp.s

CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/physics/ClothSimulator.cpp.o: CMakeFiles/Dynamic-Cloth.dir/flags.make
CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/physics/ClothSimulator.cpp.o: ../dynamic_cloth/physics/ClothSimulator.cpp
CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/physics/ClothSimulator.cpp.o: CMakeFiles/Dynamic-Cloth.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/dev/Dynamic-Cloth/debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/physics/ClothSimulator.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/physics/ClothSimulator.cpp.o -MF CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/physics/ClothSimulator.cpp.o.d -o CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/physics/ClothSimulator.cpp.o -c /home/alex/dev/Dynamic-Cloth/dynamic_cloth/physics/ClothSimulator.cpp

CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/physics/ClothSimulator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/physics/ClothSimulator.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex/dev/Dynamic-Cloth/dynamic_cloth/physics/ClothSimulator.cpp > CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/physics/ClothSimulator.cpp.i

CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/physics/ClothSimulator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/physics/ClothSimulator.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex/dev/Dynamic-Cloth/dynamic_cloth/physics/ClothSimulator.cpp -o CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/physics/ClothSimulator.cpp.s

CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/physics/Particle.cpp.o: CMakeFiles/Dynamic-Cloth.dir/flags.make
CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/physics/Particle.cpp.o: ../dynamic_cloth/physics/Particle.cpp
CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/physics/Particle.cpp.o: CMakeFiles/Dynamic-Cloth.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/dev/Dynamic-Cloth/debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/physics/Particle.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/physics/Particle.cpp.o -MF CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/physics/Particle.cpp.o.d -o CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/physics/Particle.cpp.o -c /home/alex/dev/Dynamic-Cloth/dynamic_cloth/physics/Particle.cpp

CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/physics/Particle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/physics/Particle.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex/dev/Dynamic-Cloth/dynamic_cloth/physics/Particle.cpp > CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/physics/Particle.cpp.i

CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/physics/Particle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/physics/Particle.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex/dev/Dynamic-Cloth/dynamic_cloth/physics/Particle.cpp -o CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/physics/Particle.cpp.s

# Object files for target Dynamic-Cloth
Dynamic__Cloth_OBJECTS = \
"CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/main.cpp.o" \
"CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/util.cpp.o" \
"CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/EventHandler.cpp.o" \
"CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/physics/Cloth.cpp.o" \
"CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/physics/ClothLoader.cpp.o" \
"CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/physics/ClothSimulator.cpp.o" \
"CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/physics/Particle.cpp.o"

# External object files for target Dynamic-Cloth
Dynamic__Cloth_EXTERNAL_OBJECTS =

Dynamic-Cloth: CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/main.cpp.o
Dynamic-Cloth: CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/util.cpp.o
Dynamic-Cloth: CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/EventHandler.cpp.o
Dynamic-Cloth: CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/physics/Cloth.cpp.o
Dynamic-Cloth: CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/physics/ClothLoader.cpp.o
Dynamic-Cloth: CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/physics/ClothSimulator.cpp.o
Dynamic-Cloth: CMakeFiles/Dynamic-Cloth.dir/dynamic_cloth/physics/Particle.cpp.o
Dynamic-Cloth: CMakeFiles/Dynamic-Cloth.dir/build.make
Dynamic-Cloth: CMakeFiles/Dynamic-Cloth.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/alex/dev/Dynamic-Cloth/debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable Dynamic-Cloth"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Dynamic-Cloth.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Dynamic-Cloth.dir/build: Dynamic-Cloth
.PHONY : CMakeFiles/Dynamic-Cloth.dir/build

CMakeFiles/Dynamic-Cloth.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Dynamic-Cloth.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Dynamic-Cloth.dir/clean

CMakeFiles/Dynamic-Cloth.dir/depend:
	cd /home/alex/dev/Dynamic-Cloth/debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alex/dev/Dynamic-Cloth /home/alex/dev/Dynamic-Cloth /home/alex/dev/Dynamic-Cloth/debug /home/alex/dev/Dynamic-Cloth/debug /home/alex/dev/Dynamic-Cloth/debug/CMakeFiles/Dynamic-Cloth.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Dynamic-Cloth.dir/depend

