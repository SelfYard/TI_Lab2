# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

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
CMAKE_SOURCE_DIR = /home/yardsuper/Documents/Study/BSUIR/Semestr4/TI/Lab2/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/yardsuper/Documents/Study/BSUIR/Semestr4/TI/Lab2/build-src-Desktop-Debug

# Include any dependencies generated for this target.
include CMakeFiles/src.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/src.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/src.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/src.dir/flags.make

CMakeFiles/src.dir/src_autogen/mocs_compilation.cpp.o: CMakeFiles/src.dir/flags.make
CMakeFiles/src.dir/src_autogen/mocs_compilation.cpp.o: src_autogen/mocs_compilation.cpp
CMakeFiles/src.dir/src_autogen/mocs_compilation.cpp.o: CMakeFiles/src.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yardsuper/Documents/Study/BSUIR/Semestr4/TI/Lab2/build-src-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/src.dir/src_autogen/mocs_compilation.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/src.dir/src_autogen/mocs_compilation.cpp.o -MF CMakeFiles/src.dir/src_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/src.dir/src_autogen/mocs_compilation.cpp.o -c /home/yardsuper/Documents/Study/BSUIR/Semestr4/TI/Lab2/build-src-Desktop-Debug/src_autogen/mocs_compilation.cpp

CMakeFiles/src.dir/src_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/src.dir/src_autogen/mocs_compilation.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yardsuper/Documents/Study/BSUIR/Semestr4/TI/Lab2/build-src-Desktop-Debug/src_autogen/mocs_compilation.cpp > CMakeFiles/src.dir/src_autogen/mocs_compilation.cpp.i

CMakeFiles/src.dir/src_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/src.dir/src_autogen/mocs_compilation.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yardsuper/Documents/Study/BSUIR/Semestr4/TI/Lab2/build-src-Desktop-Debug/src_autogen/mocs_compilation.cpp -o CMakeFiles/src.dir/src_autogen/mocs_compilation.cpp.s

CMakeFiles/src.dir/main.cpp.o: CMakeFiles/src.dir/flags.make
CMakeFiles/src.dir/main.cpp.o: /home/yardsuper/Documents/Study/BSUIR/Semestr4/TI/Lab2/src/main.cpp
CMakeFiles/src.dir/main.cpp.o: CMakeFiles/src.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yardsuper/Documents/Study/BSUIR/Semestr4/TI/Lab2/build-src-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/src.dir/main.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/src.dir/main.cpp.o -MF CMakeFiles/src.dir/main.cpp.o.d -o CMakeFiles/src.dir/main.cpp.o -c /home/yardsuper/Documents/Study/BSUIR/Semestr4/TI/Lab2/src/main.cpp

CMakeFiles/src.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/src.dir/main.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yardsuper/Documents/Study/BSUIR/Semestr4/TI/Lab2/src/main.cpp > CMakeFiles/src.dir/main.cpp.i

CMakeFiles/src.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/src.dir/main.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yardsuper/Documents/Study/BSUIR/Semestr4/TI/Lab2/src/main.cpp -o CMakeFiles/src.dir/main.cpp.s

CMakeFiles/src.dir/mainwindow.cpp.o: CMakeFiles/src.dir/flags.make
CMakeFiles/src.dir/mainwindow.cpp.o: /home/yardsuper/Documents/Study/BSUIR/Semestr4/TI/Lab2/src/mainwindow.cpp
CMakeFiles/src.dir/mainwindow.cpp.o: CMakeFiles/src.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yardsuper/Documents/Study/BSUIR/Semestr4/TI/Lab2/build-src-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/src.dir/mainwindow.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/src.dir/mainwindow.cpp.o -MF CMakeFiles/src.dir/mainwindow.cpp.o.d -o CMakeFiles/src.dir/mainwindow.cpp.o -c /home/yardsuper/Documents/Study/BSUIR/Semestr4/TI/Lab2/src/mainwindow.cpp

CMakeFiles/src.dir/mainwindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/src.dir/mainwindow.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yardsuper/Documents/Study/BSUIR/Semestr4/TI/Lab2/src/mainwindow.cpp > CMakeFiles/src.dir/mainwindow.cpp.i

CMakeFiles/src.dir/mainwindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/src.dir/mainwindow.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yardsuper/Documents/Study/BSUIR/Semestr4/TI/Lab2/src/mainwindow.cpp -o CMakeFiles/src.dir/mainwindow.cpp.s

CMakeFiles/src.dir/lfsrfinder.cpp.o: CMakeFiles/src.dir/flags.make
CMakeFiles/src.dir/lfsrfinder.cpp.o: /home/yardsuper/Documents/Study/BSUIR/Semestr4/TI/Lab2/src/lfsrfinder.cpp
CMakeFiles/src.dir/lfsrfinder.cpp.o: CMakeFiles/src.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yardsuper/Documents/Study/BSUIR/Semestr4/TI/Lab2/build-src-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/src.dir/lfsrfinder.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/src.dir/lfsrfinder.cpp.o -MF CMakeFiles/src.dir/lfsrfinder.cpp.o.d -o CMakeFiles/src.dir/lfsrfinder.cpp.o -c /home/yardsuper/Documents/Study/BSUIR/Semestr4/TI/Lab2/src/lfsrfinder.cpp

CMakeFiles/src.dir/lfsrfinder.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/src.dir/lfsrfinder.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yardsuper/Documents/Study/BSUIR/Semestr4/TI/Lab2/src/lfsrfinder.cpp > CMakeFiles/src.dir/lfsrfinder.cpp.i

CMakeFiles/src.dir/lfsrfinder.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/src.dir/lfsrfinder.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yardsuper/Documents/Study/BSUIR/Semestr4/TI/Lab2/src/lfsrfinder.cpp -o CMakeFiles/src.dir/lfsrfinder.cpp.s

# Object files for target src
src_OBJECTS = \
"CMakeFiles/src.dir/src_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/src.dir/main.cpp.o" \
"CMakeFiles/src.dir/mainwindow.cpp.o" \
"CMakeFiles/src.dir/lfsrfinder.cpp.o"

# External object files for target src
src_EXTERNAL_OBJECTS =

src: CMakeFiles/src.dir/src_autogen/mocs_compilation.cpp.o
src: CMakeFiles/src.dir/main.cpp.o
src: CMakeFiles/src.dir/mainwindow.cpp.o
src: CMakeFiles/src.dir/lfsrfinder.cpp.o
src: CMakeFiles/src.dir/build.make
src: /usr/lib/x86_64-linux-gnu/libQt6Widgets.so.6.4.2
src: /usr/lib/x86_64-linux-gnu/libQt6Gui.so.6.4.2
src: /usr/lib/x86_64-linux-gnu/libQt6Core.so.6.4.2
src: /usr/lib/x86_64-linux-gnu/libGLX.so
src: /usr/lib/x86_64-linux-gnu/libOpenGL.so
src: CMakeFiles/src.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/yardsuper/Documents/Study/BSUIR/Semestr4/TI/Lab2/build-src-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable src"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/src.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/src.dir/build: src
.PHONY : CMakeFiles/src.dir/build

CMakeFiles/src.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/src.dir/cmake_clean.cmake
.PHONY : CMakeFiles/src.dir/clean

CMakeFiles/src.dir/depend:
	cd /home/yardsuper/Documents/Study/BSUIR/Semestr4/TI/Lab2/build-src-Desktop-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/yardsuper/Documents/Study/BSUIR/Semestr4/TI/Lab2/src /home/yardsuper/Documents/Study/BSUIR/Semestr4/TI/Lab2/src /home/yardsuper/Documents/Study/BSUIR/Semestr4/TI/Lab2/build-src-Desktop-Debug /home/yardsuper/Documents/Study/BSUIR/Semestr4/TI/Lab2/build-src-Desktop-Debug /home/yardsuper/Documents/Study/BSUIR/Semestr4/TI/Lab2/build-src-Desktop-Debug/CMakeFiles/src.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/src.dir/depend

