# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/smeshan/workspace/SFX

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/smeshan/workspace/SFX/build

# Include any dependencies generated for this target.
include sdl_utils/CMakeFiles/sdl_utils.dir/depend.make

# Include the progress variables for this target.
include sdl_utils/CMakeFiles/sdl_utils.dir/progress.make

# Include the compile flags for this target's objects.
include sdl_utils/CMakeFiles/sdl_utils.dir/flags.make

sdl_utils/CMakeFiles/sdl_utils.dir/src/SDLLoader.cpp.o: sdl_utils/CMakeFiles/sdl_utils.dir/flags.make
sdl_utils/CMakeFiles/sdl_utils.dir/src/SDLLoader.cpp.o: ../sdl_utils/src/SDLLoader.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/smeshan/workspace/SFX/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object sdl_utils/CMakeFiles/sdl_utils.dir/src/SDLLoader.cpp.o"
	cd /home/smeshan/workspace/SFX/build/sdl_utils && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sdl_utils.dir/src/SDLLoader.cpp.o -c /home/smeshan/workspace/SFX/sdl_utils/src/SDLLoader.cpp

sdl_utils/CMakeFiles/sdl_utils.dir/src/SDLLoader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sdl_utils.dir/src/SDLLoader.cpp.i"
	cd /home/smeshan/workspace/SFX/build/sdl_utils && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/smeshan/workspace/SFX/sdl_utils/src/SDLLoader.cpp > CMakeFiles/sdl_utils.dir/src/SDLLoader.cpp.i

sdl_utils/CMakeFiles/sdl_utils.dir/src/SDLLoader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sdl_utils.dir/src/SDLLoader.cpp.s"
	cd /home/smeshan/workspace/SFX/build/sdl_utils && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/smeshan/workspace/SFX/sdl_utils/src/SDLLoader.cpp -o CMakeFiles/sdl_utils.dir/src/SDLLoader.cpp.s

sdl_utils/CMakeFiles/sdl_utils.dir/src/SDLLoader.cpp.o.requires:

.PHONY : sdl_utils/CMakeFiles/sdl_utils.dir/src/SDLLoader.cpp.o.requires

sdl_utils/CMakeFiles/sdl_utils.dir/src/SDLLoader.cpp.o.provides: sdl_utils/CMakeFiles/sdl_utils.dir/src/SDLLoader.cpp.o.requires
	$(MAKE) -f sdl_utils/CMakeFiles/sdl_utils.dir/build.make sdl_utils/CMakeFiles/sdl_utils.dir/src/SDLLoader.cpp.o.provides.build
.PHONY : sdl_utils/CMakeFiles/sdl_utils.dir/src/SDLLoader.cpp.o.provides

sdl_utils/CMakeFiles/sdl_utils.dir/src/SDLLoader.cpp.o.provides.build: sdl_utils/CMakeFiles/sdl_utils.dir/src/SDLLoader.cpp.o


sdl_utils/CMakeFiles/sdl_utils.dir/src/Monitor.cpp.o: sdl_utils/CMakeFiles/sdl_utils.dir/flags.make
sdl_utils/CMakeFiles/sdl_utils.dir/src/Monitor.cpp.o: ../sdl_utils/src/Monitor.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/smeshan/workspace/SFX/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object sdl_utils/CMakeFiles/sdl_utils.dir/src/Monitor.cpp.o"
	cd /home/smeshan/workspace/SFX/build/sdl_utils && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sdl_utils.dir/src/Monitor.cpp.o -c /home/smeshan/workspace/SFX/sdl_utils/src/Monitor.cpp

sdl_utils/CMakeFiles/sdl_utils.dir/src/Monitor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sdl_utils.dir/src/Monitor.cpp.i"
	cd /home/smeshan/workspace/SFX/build/sdl_utils && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/smeshan/workspace/SFX/sdl_utils/src/Monitor.cpp > CMakeFiles/sdl_utils.dir/src/Monitor.cpp.i

sdl_utils/CMakeFiles/sdl_utils.dir/src/Monitor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sdl_utils.dir/src/Monitor.cpp.s"
	cd /home/smeshan/workspace/SFX/build/sdl_utils && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/smeshan/workspace/SFX/sdl_utils/src/Monitor.cpp -o CMakeFiles/sdl_utils.dir/src/Monitor.cpp.s

sdl_utils/CMakeFiles/sdl_utils.dir/src/Monitor.cpp.o.requires:

.PHONY : sdl_utils/CMakeFiles/sdl_utils.dir/src/Monitor.cpp.o.requires

sdl_utils/CMakeFiles/sdl_utils.dir/src/Monitor.cpp.o.provides: sdl_utils/CMakeFiles/sdl_utils.dir/src/Monitor.cpp.o.requires
	$(MAKE) -f sdl_utils/CMakeFiles/sdl_utils.dir/build.make sdl_utils/CMakeFiles/sdl_utils.dir/src/Monitor.cpp.o.provides.build
.PHONY : sdl_utils/CMakeFiles/sdl_utils.dir/src/Monitor.cpp.o.provides

sdl_utils/CMakeFiles/sdl_utils.dir/src/Monitor.cpp.o.provides.build: sdl_utils/CMakeFiles/sdl_utils.dir/src/Monitor.cpp.o


sdl_utils/CMakeFiles/sdl_utils.dir/src/Texture.cpp.o: sdl_utils/CMakeFiles/sdl_utils.dir/flags.make
sdl_utils/CMakeFiles/sdl_utils.dir/src/Texture.cpp.o: ../sdl_utils/src/Texture.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/smeshan/workspace/SFX/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object sdl_utils/CMakeFiles/sdl_utils.dir/src/Texture.cpp.o"
	cd /home/smeshan/workspace/SFX/build/sdl_utils && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sdl_utils.dir/src/Texture.cpp.o -c /home/smeshan/workspace/SFX/sdl_utils/src/Texture.cpp

sdl_utils/CMakeFiles/sdl_utils.dir/src/Texture.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sdl_utils.dir/src/Texture.cpp.i"
	cd /home/smeshan/workspace/SFX/build/sdl_utils && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/smeshan/workspace/SFX/sdl_utils/src/Texture.cpp > CMakeFiles/sdl_utils.dir/src/Texture.cpp.i

sdl_utils/CMakeFiles/sdl_utils.dir/src/Texture.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sdl_utils.dir/src/Texture.cpp.s"
	cd /home/smeshan/workspace/SFX/build/sdl_utils && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/smeshan/workspace/SFX/sdl_utils/src/Texture.cpp -o CMakeFiles/sdl_utils.dir/src/Texture.cpp.s

sdl_utils/CMakeFiles/sdl_utils.dir/src/Texture.cpp.o.requires:

.PHONY : sdl_utils/CMakeFiles/sdl_utils.dir/src/Texture.cpp.o.requires

sdl_utils/CMakeFiles/sdl_utils.dir/src/Texture.cpp.o.provides: sdl_utils/CMakeFiles/sdl_utils.dir/src/Texture.cpp.o.requires
	$(MAKE) -f sdl_utils/CMakeFiles/sdl_utils.dir/build.make sdl_utils/CMakeFiles/sdl_utils.dir/src/Texture.cpp.o.provides.build
.PHONY : sdl_utils/CMakeFiles/sdl_utils.dir/src/Texture.cpp.o.provides

sdl_utils/CMakeFiles/sdl_utils.dir/src/Texture.cpp.o.provides.build: sdl_utils/CMakeFiles/sdl_utils.dir/src/Texture.cpp.o


sdl_utils/CMakeFiles/sdl_utils.dir/src/Renderer.cpp.o: sdl_utils/CMakeFiles/sdl_utils.dir/flags.make
sdl_utils/CMakeFiles/sdl_utils.dir/src/Renderer.cpp.o: ../sdl_utils/src/Renderer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/smeshan/workspace/SFX/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object sdl_utils/CMakeFiles/sdl_utils.dir/src/Renderer.cpp.o"
	cd /home/smeshan/workspace/SFX/build/sdl_utils && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sdl_utils.dir/src/Renderer.cpp.o -c /home/smeshan/workspace/SFX/sdl_utils/src/Renderer.cpp

sdl_utils/CMakeFiles/sdl_utils.dir/src/Renderer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sdl_utils.dir/src/Renderer.cpp.i"
	cd /home/smeshan/workspace/SFX/build/sdl_utils && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/smeshan/workspace/SFX/sdl_utils/src/Renderer.cpp > CMakeFiles/sdl_utils.dir/src/Renderer.cpp.i

sdl_utils/CMakeFiles/sdl_utils.dir/src/Renderer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sdl_utils.dir/src/Renderer.cpp.s"
	cd /home/smeshan/workspace/SFX/build/sdl_utils && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/smeshan/workspace/SFX/sdl_utils/src/Renderer.cpp -o CMakeFiles/sdl_utils.dir/src/Renderer.cpp.s

sdl_utils/CMakeFiles/sdl_utils.dir/src/Renderer.cpp.o.requires:

.PHONY : sdl_utils/CMakeFiles/sdl_utils.dir/src/Renderer.cpp.o.requires

sdl_utils/CMakeFiles/sdl_utils.dir/src/Renderer.cpp.o.provides: sdl_utils/CMakeFiles/sdl_utils.dir/src/Renderer.cpp.o.requires
	$(MAKE) -f sdl_utils/CMakeFiles/sdl_utils.dir/build.make sdl_utils/CMakeFiles/sdl_utils.dir/src/Renderer.cpp.o.provides.build
.PHONY : sdl_utils/CMakeFiles/sdl_utils.dir/src/Renderer.cpp.o.provides

sdl_utils/CMakeFiles/sdl_utils.dir/src/Renderer.cpp.o.provides.build: sdl_utils/CMakeFiles/sdl_utils.dir/src/Renderer.cpp.o


sdl_utils/CMakeFiles/sdl_utils.dir/src/InputEvent.cpp.o: sdl_utils/CMakeFiles/sdl_utils.dir/flags.make
sdl_utils/CMakeFiles/sdl_utils.dir/src/InputEvent.cpp.o: ../sdl_utils/src/InputEvent.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/smeshan/workspace/SFX/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object sdl_utils/CMakeFiles/sdl_utils.dir/src/InputEvent.cpp.o"
	cd /home/smeshan/workspace/SFX/build/sdl_utils && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sdl_utils.dir/src/InputEvent.cpp.o -c /home/smeshan/workspace/SFX/sdl_utils/src/InputEvent.cpp

sdl_utils/CMakeFiles/sdl_utils.dir/src/InputEvent.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sdl_utils.dir/src/InputEvent.cpp.i"
	cd /home/smeshan/workspace/SFX/build/sdl_utils && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/smeshan/workspace/SFX/sdl_utils/src/InputEvent.cpp > CMakeFiles/sdl_utils.dir/src/InputEvent.cpp.i

sdl_utils/CMakeFiles/sdl_utils.dir/src/InputEvent.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sdl_utils.dir/src/InputEvent.cpp.s"
	cd /home/smeshan/workspace/SFX/build/sdl_utils && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/smeshan/workspace/SFX/sdl_utils/src/InputEvent.cpp -o CMakeFiles/sdl_utils.dir/src/InputEvent.cpp.s

sdl_utils/CMakeFiles/sdl_utils.dir/src/InputEvent.cpp.o.requires:

.PHONY : sdl_utils/CMakeFiles/sdl_utils.dir/src/InputEvent.cpp.o.requires

sdl_utils/CMakeFiles/sdl_utils.dir/src/InputEvent.cpp.o.provides: sdl_utils/CMakeFiles/sdl_utils.dir/src/InputEvent.cpp.o.requires
	$(MAKE) -f sdl_utils/CMakeFiles/sdl_utils.dir/build.make sdl_utils/CMakeFiles/sdl_utils.dir/src/InputEvent.cpp.o.provides.build
.PHONY : sdl_utils/CMakeFiles/sdl_utils.dir/src/InputEvent.cpp.o.provides

sdl_utils/CMakeFiles/sdl_utils.dir/src/InputEvent.cpp.o.provides.build: sdl_utils/CMakeFiles/sdl_utils.dir/src/InputEvent.cpp.o


sdl_utils/CMakeFiles/sdl_utils.dir/src/Media.cpp.o: sdl_utils/CMakeFiles/sdl_utils.dir/flags.make
sdl_utils/CMakeFiles/sdl_utils.dir/src/Media.cpp.o: ../sdl_utils/src/Media.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/smeshan/workspace/SFX/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object sdl_utils/CMakeFiles/sdl_utils.dir/src/Media.cpp.o"
	cd /home/smeshan/workspace/SFX/build/sdl_utils && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sdl_utils.dir/src/Media.cpp.o -c /home/smeshan/workspace/SFX/sdl_utils/src/Media.cpp

sdl_utils/CMakeFiles/sdl_utils.dir/src/Media.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sdl_utils.dir/src/Media.cpp.i"
	cd /home/smeshan/workspace/SFX/build/sdl_utils && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/smeshan/workspace/SFX/sdl_utils/src/Media.cpp > CMakeFiles/sdl_utils.dir/src/Media.cpp.i

sdl_utils/CMakeFiles/sdl_utils.dir/src/Media.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sdl_utils.dir/src/Media.cpp.s"
	cd /home/smeshan/workspace/SFX/build/sdl_utils && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/smeshan/workspace/SFX/sdl_utils/src/Media.cpp -o CMakeFiles/sdl_utils.dir/src/Media.cpp.s

sdl_utils/CMakeFiles/sdl_utils.dir/src/Media.cpp.o.requires:

.PHONY : sdl_utils/CMakeFiles/sdl_utils.dir/src/Media.cpp.o.requires

sdl_utils/CMakeFiles/sdl_utils.dir/src/Media.cpp.o.provides: sdl_utils/CMakeFiles/sdl_utils.dir/src/Media.cpp.o.requires
	$(MAKE) -f sdl_utils/CMakeFiles/sdl_utils.dir/build.make sdl_utils/CMakeFiles/sdl_utils.dir/src/Media.cpp.o.provides.build
.PHONY : sdl_utils/CMakeFiles/sdl_utils.dir/src/Media.cpp.o.provides

sdl_utils/CMakeFiles/sdl_utils.dir/src/Media.cpp.o.provides.build: sdl_utils/CMakeFiles/sdl_utils.dir/src/Media.cpp.o


sdl_utils/CMakeFiles/sdl_utils.dir/src/containers/ImageContainer.cpp.o: sdl_utils/CMakeFiles/sdl_utils.dir/flags.make
sdl_utils/CMakeFiles/sdl_utils.dir/src/containers/ImageContainer.cpp.o: ../sdl_utils/src/containers/ImageContainer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/smeshan/workspace/SFX/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object sdl_utils/CMakeFiles/sdl_utils.dir/src/containers/ImageContainer.cpp.o"
	cd /home/smeshan/workspace/SFX/build/sdl_utils && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sdl_utils.dir/src/containers/ImageContainer.cpp.o -c /home/smeshan/workspace/SFX/sdl_utils/src/containers/ImageContainer.cpp

sdl_utils/CMakeFiles/sdl_utils.dir/src/containers/ImageContainer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sdl_utils.dir/src/containers/ImageContainer.cpp.i"
	cd /home/smeshan/workspace/SFX/build/sdl_utils && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/smeshan/workspace/SFX/sdl_utils/src/containers/ImageContainer.cpp > CMakeFiles/sdl_utils.dir/src/containers/ImageContainer.cpp.i

sdl_utils/CMakeFiles/sdl_utils.dir/src/containers/ImageContainer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sdl_utils.dir/src/containers/ImageContainer.cpp.s"
	cd /home/smeshan/workspace/SFX/build/sdl_utils && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/smeshan/workspace/SFX/sdl_utils/src/containers/ImageContainer.cpp -o CMakeFiles/sdl_utils.dir/src/containers/ImageContainer.cpp.s

sdl_utils/CMakeFiles/sdl_utils.dir/src/containers/ImageContainer.cpp.o.requires:

.PHONY : sdl_utils/CMakeFiles/sdl_utils.dir/src/containers/ImageContainer.cpp.o.requires

sdl_utils/CMakeFiles/sdl_utils.dir/src/containers/ImageContainer.cpp.o.provides: sdl_utils/CMakeFiles/sdl_utils.dir/src/containers/ImageContainer.cpp.o.requires
	$(MAKE) -f sdl_utils/CMakeFiles/sdl_utils.dir/build.make sdl_utils/CMakeFiles/sdl_utils.dir/src/containers/ImageContainer.cpp.o.provides.build
.PHONY : sdl_utils/CMakeFiles/sdl_utils.dir/src/containers/ImageContainer.cpp.o.provides

sdl_utils/CMakeFiles/sdl_utils.dir/src/containers/ImageContainer.cpp.o.provides.build: sdl_utils/CMakeFiles/sdl_utils.dir/src/containers/ImageContainer.cpp.o


sdl_utils/CMakeFiles/sdl_utils.dir/src/containers/TextContainer.cpp.o: sdl_utils/CMakeFiles/sdl_utils.dir/flags.make
sdl_utils/CMakeFiles/sdl_utils.dir/src/containers/TextContainer.cpp.o: ../sdl_utils/src/containers/TextContainer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/smeshan/workspace/SFX/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object sdl_utils/CMakeFiles/sdl_utils.dir/src/containers/TextContainer.cpp.o"
	cd /home/smeshan/workspace/SFX/build/sdl_utils && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sdl_utils.dir/src/containers/TextContainer.cpp.o -c /home/smeshan/workspace/SFX/sdl_utils/src/containers/TextContainer.cpp

sdl_utils/CMakeFiles/sdl_utils.dir/src/containers/TextContainer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sdl_utils.dir/src/containers/TextContainer.cpp.i"
	cd /home/smeshan/workspace/SFX/build/sdl_utils && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/smeshan/workspace/SFX/sdl_utils/src/containers/TextContainer.cpp > CMakeFiles/sdl_utils.dir/src/containers/TextContainer.cpp.i

sdl_utils/CMakeFiles/sdl_utils.dir/src/containers/TextContainer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sdl_utils.dir/src/containers/TextContainer.cpp.s"
	cd /home/smeshan/workspace/SFX/build/sdl_utils && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/smeshan/workspace/SFX/sdl_utils/src/containers/TextContainer.cpp -o CMakeFiles/sdl_utils.dir/src/containers/TextContainer.cpp.s

sdl_utils/CMakeFiles/sdl_utils.dir/src/containers/TextContainer.cpp.o.requires:

.PHONY : sdl_utils/CMakeFiles/sdl_utils.dir/src/containers/TextContainer.cpp.o.requires

sdl_utils/CMakeFiles/sdl_utils.dir/src/containers/TextContainer.cpp.o.provides: sdl_utils/CMakeFiles/sdl_utils.dir/src/containers/TextContainer.cpp.o.requires
	$(MAKE) -f sdl_utils/CMakeFiles/sdl_utils.dir/build.make sdl_utils/CMakeFiles/sdl_utils.dir/src/containers/TextContainer.cpp.o.provides.build
.PHONY : sdl_utils/CMakeFiles/sdl_utils.dir/src/containers/TextContainer.cpp.o.provides

sdl_utils/CMakeFiles/sdl_utils.dir/src/containers/TextContainer.cpp.o.provides.build: sdl_utils/CMakeFiles/sdl_utils.dir/src/containers/TextContainer.cpp.o


sdl_utils/CMakeFiles/sdl_utils.dir/src/containers/SoundContainer.cpp.o: sdl_utils/CMakeFiles/sdl_utils.dir/flags.make
sdl_utils/CMakeFiles/sdl_utils.dir/src/containers/SoundContainer.cpp.o: ../sdl_utils/src/containers/SoundContainer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/smeshan/workspace/SFX/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object sdl_utils/CMakeFiles/sdl_utils.dir/src/containers/SoundContainer.cpp.o"
	cd /home/smeshan/workspace/SFX/build/sdl_utils && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sdl_utils.dir/src/containers/SoundContainer.cpp.o -c /home/smeshan/workspace/SFX/sdl_utils/src/containers/SoundContainer.cpp

sdl_utils/CMakeFiles/sdl_utils.dir/src/containers/SoundContainer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sdl_utils.dir/src/containers/SoundContainer.cpp.i"
	cd /home/smeshan/workspace/SFX/build/sdl_utils && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/smeshan/workspace/SFX/sdl_utils/src/containers/SoundContainer.cpp > CMakeFiles/sdl_utils.dir/src/containers/SoundContainer.cpp.i

sdl_utils/CMakeFiles/sdl_utils.dir/src/containers/SoundContainer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sdl_utils.dir/src/containers/SoundContainer.cpp.s"
	cd /home/smeshan/workspace/SFX/build/sdl_utils && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/smeshan/workspace/SFX/sdl_utils/src/containers/SoundContainer.cpp -o CMakeFiles/sdl_utils.dir/src/containers/SoundContainer.cpp.s

sdl_utils/CMakeFiles/sdl_utils.dir/src/containers/SoundContainer.cpp.o.requires:

.PHONY : sdl_utils/CMakeFiles/sdl_utils.dir/src/containers/SoundContainer.cpp.o.requires

sdl_utils/CMakeFiles/sdl_utils.dir/src/containers/SoundContainer.cpp.o.provides: sdl_utils/CMakeFiles/sdl_utils.dir/src/containers/SoundContainer.cpp.o.requires
	$(MAKE) -f sdl_utils/CMakeFiles/sdl_utils.dir/build.make sdl_utils/CMakeFiles/sdl_utils.dir/src/containers/SoundContainer.cpp.o.provides.build
.PHONY : sdl_utils/CMakeFiles/sdl_utils.dir/src/containers/SoundContainer.cpp.o.provides

sdl_utils/CMakeFiles/sdl_utils.dir/src/containers/SoundContainer.cpp.o.provides.build: sdl_utils/CMakeFiles/sdl_utils.dir/src/containers/SoundContainer.cpp.o


sdl_utils/CMakeFiles/sdl_utils.dir/src/tools/AutoResLoader.cpp.o: sdl_utils/CMakeFiles/sdl_utils.dir/flags.make
sdl_utils/CMakeFiles/sdl_utils.dir/src/tools/AutoResLoader.cpp.o: ../sdl_utils/src/tools/AutoResLoader.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/smeshan/workspace/SFX/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object sdl_utils/CMakeFiles/sdl_utils.dir/src/tools/AutoResLoader.cpp.o"
	cd /home/smeshan/workspace/SFX/build/sdl_utils && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sdl_utils.dir/src/tools/AutoResLoader.cpp.o -c /home/smeshan/workspace/SFX/sdl_utils/src/tools/AutoResLoader.cpp

sdl_utils/CMakeFiles/sdl_utils.dir/src/tools/AutoResLoader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sdl_utils.dir/src/tools/AutoResLoader.cpp.i"
	cd /home/smeshan/workspace/SFX/build/sdl_utils && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/smeshan/workspace/SFX/sdl_utils/src/tools/AutoResLoader.cpp > CMakeFiles/sdl_utils.dir/src/tools/AutoResLoader.cpp.i

sdl_utils/CMakeFiles/sdl_utils.dir/src/tools/AutoResLoader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sdl_utils.dir/src/tools/AutoResLoader.cpp.s"
	cd /home/smeshan/workspace/SFX/build/sdl_utils && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/smeshan/workspace/SFX/sdl_utils/src/tools/AutoResLoader.cpp -o CMakeFiles/sdl_utils.dir/src/tools/AutoResLoader.cpp.s

sdl_utils/CMakeFiles/sdl_utils.dir/src/tools/AutoResLoader.cpp.o.requires:

.PHONY : sdl_utils/CMakeFiles/sdl_utils.dir/src/tools/AutoResLoader.cpp.o.requires

sdl_utils/CMakeFiles/sdl_utils.dir/src/tools/AutoResLoader.cpp.o.provides: sdl_utils/CMakeFiles/sdl_utils.dir/src/tools/AutoResLoader.cpp.o.requires
	$(MAKE) -f sdl_utils/CMakeFiles/sdl_utils.dir/build.make sdl_utils/CMakeFiles/sdl_utils.dir/src/tools/AutoResLoader.cpp.o.provides.build
.PHONY : sdl_utils/CMakeFiles/sdl_utils.dir/src/tools/AutoResLoader.cpp.o.provides

sdl_utils/CMakeFiles/sdl_utils.dir/src/tools/AutoResLoader.cpp.o.provides.build: sdl_utils/CMakeFiles/sdl_utils.dir/src/tools/AutoResLoader.cpp.o


# Object files for target sdl_utils
sdl_utils_OBJECTS = \
"CMakeFiles/sdl_utils.dir/src/SDLLoader.cpp.o" \
"CMakeFiles/sdl_utils.dir/src/Monitor.cpp.o" \
"CMakeFiles/sdl_utils.dir/src/Texture.cpp.o" \
"CMakeFiles/sdl_utils.dir/src/Renderer.cpp.o" \
"CMakeFiles/sdl_utils.dir/src/InputEvent.cpp.o" \
"CMakeFiles/sdl_utils.dir/src/Media.cpp.o" \
"CMakeFiles/sdl_utils.dir/src/containers/ImageContainer.cpp.o" \
"CMakeFiles/sdl_utils.dir/src/containers/TextContainer.cpp.o" \
"CMakeFiles/sdl_utils.dir/src/containers/SoundContainer.cpp.o" \
"CMakeFiles/sdl_utils.dir/src/tools/AutoResLoader.cpp.o"

# External object files for target sdl_utils
sdl_utils_EXTERNAL_OBJECTS =

sdl_utils/libsdl_utils.a: sdl_utils/CMakeFiles/sdl_utils.dir/src/SDLLoader.cpp.o
sdl_utils/libsdl_utils.a: sdl_utils/CMakeFiles/sdl_utils.dir/src/Monitor.cpp.o
sdl_utils/libsdl_utils.a: sdl_utils/CMakeFiles/sdl_utils.dir/src/Texture.cpp.o
sdl_utils/libsdl_utils.a: sdl_utils/CMakeFiles/sdl_utils.dir/src/Renderer.cpp.o
sdl_utils/libsdl_utils.a: sdl_utils/CMakeFiles/sdl_utils.dir/src/InputEvent.cpp.o
sdl_utils/libsdl_utils.a: sdl_utils/CMakeFiles/sdl_utils.dir/src/Media.cpp.o
sdl_utils/libsdl_utils.a: sdl_utils/CMakeFiles/sdl_utils.dir/src/containers/ImageContainer.cpp.o
sdl_utils/libsdl_utils.a: sdl_utils/CMakeFiles/sdl_utils.dir/src/containers/TextContainer.cpp.o
sdl_utils/libsdl_utils.a: sdl_utils/CMakeFiles/sdl_utils.dir/src/containers/SoundContainer.cpp.o
sdl_utils/libsdl_utils.a: sdl_utils/CMakeFiles/sdl_utils.dir/src/tools/AutoResLoader.cpp.o
sdl_utils/libsdl_utils.a: sdl_utils/CMakeFiles/sdl_utils.dir/build.make
sdl_utils/libsdl_utils.a: sdl_utils/CMakeFiles/sdl_utils.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/smeshan/workspace/SFX/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Linking CXX static library libsdl_utils.a"
	cd /home/smeshan/workspace/SFX/build/sdl_utils && $(CMAKE_COMMAND) -P CMakeFiles/sdl_utils.dir/cmake_clean_target.cmake
	cd /home/smeshan/workspace/SFX/build/sdl_utils && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sdl_utils.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
sdl_utils/CMakeFiles/sdl_utils.dir/build: sdl_utils/libsdl_utils.a

.PHONY : sdl_utils/CMakeFiles/sdl_utils.dir/build

sdl_utils/CMakeFiles/sdl_utils.dir/requires: sdl_utils/CMakeFiles/sdl_utils.dir/src/SDLLoader.cpp.o.requires
sdl_utils/CMakeFiles/sdl_utils.dir/requires: sdl_utils/CMakeFiles/sdl_utils.dir/src/Monitor.cpp.o.requires
sdl_utils/CMakeFiles/sdl_utils.dir/requires: sdl_utils/CMakeFiles/sdl_utils.dir/src/Texture.cpp.o.requires
sdl_utils/CMakeFiles/sdl_utils.dir/requires: sdl_utils/CMakeFiles/sdl_utils.dir/src/Renderer.cpp.o.requires
sdl_utils/CMakeFiles/sdl_utils.dir/requires: sdl_utils/CMakeFiles/sdl_utils.dir/src/InputEvent.cpp.o.requires
sdl_utils/CMakeFiles/sdl_utils.dir/requires: sdl_utils/CMakeFiles/sdl_utils.dir/src/Media.cpp.o.requires
sdl_utils/CMakeFiles/sdl_utils.dir/requires: sdl_utils/CMakeFiles/sdl_utils.dir/src/containers/ImageContainer.cpp.o.requires
sdl_utils/CMakeFiles/sdl_utils.dir/requires: sdl_utils/CMakeFiles/sdl_utils.dir/src/containers/TextContainer.cpp.o.requires
sdl_utils/CMakeFiles/sdl_utils.dir/requires: sdl_utils/CMakeFiles/sdl_utils.dir/src/containers/SoundContainer.cpp.o.requires
sdl_utils/CMakeFiles/sdl_utils.dir/requires: sdl_utils/CMakeFiles/sdl_utils.dir/src/tools/AutoResLoader.cpp.o.requires

.PHONY : sdl_utils/CMakeFiles/sdl_utils.dir/requires

sdl_utils/CMakeFiles/sdl_utils.dir/clean:
	cd /home/smeshan/workspace/SFX/build/sdl_utils && $(CMAKE_COMMAND) -P CMakeFiles/sdl_utils.dir/cmake_clean.cmake
.PHONY : sdl_utils/CMakeFiles/sdl_utils.dir/clean

sdl_utils/CMakeFiles/sdl_utils.dir/depend:
	cd /home/smeshan/workspace/SFX/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/smeshan/workspace/SFX /home/smeshan/workspace/SFX/sdl_utils /home/smeshan/workspace/SFX/build /home/smeshan/workspace/SFX/build/sdl_utils /home/smeshan/workspace/SFX/build/sdl_utils/CMakeFiles/sdl_utils.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : sdl_utils/CMakeFiles/sdl_utils.dir/depend

