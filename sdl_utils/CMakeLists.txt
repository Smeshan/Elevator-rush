cmake_minimum_required(VERSION 3.5.1)

project(sdl_utils LANGUAGES CXX)

set(_BASE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include)
set(_INC_DIR ${_BASE_DIR}/sdl_utils)
set(_SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)

add_library(
    ${PROJECT_NAME} STATIC

    ${_INC_DIR}/SDLLoader.h
	${_INC_DIR}/Monitor.h
	${_INC_DIR}/Texture.h
	${_INC_DIR}/Renderer.h
	${_INC_DIR}/InputEvent.h
	${_INC_DIR}/Media.h

	${_INC_DIR}/containers/ImageContainer.h
	${_INC_DIR}/containers/TextContainer.h
	${_INC_DIR}/containers/SoundContainer.h
	${_INC_DIR}/containers/MusicContainer.h

	${_INC_DIR}/config/MonitorConfig.h
	${_INC_DIR}/config/ConfigApplier.h
	${_INC_DIR}/config/ImageContainerConfig.h
	${_INC_DIR}/config/TextContainerConfig.h
	${_INC_DIR}/config/SoundContainerConfig.h
<<<<<<< HEAD
	${_INC_DIR}/config/MusicContainerConfig.h
=======
>>>>>>> 6bb771e45190decd39b99884f258ab88a9b899ff

	${_SRC_DIR}/SDLLoader.cpp
	${_SRC_DIR}/Monitor.cpp
	${_SRC_DIR}/Texture.cpp
	${_SRC_DIR}/Renderer.cpp
	${_SRC_DIR}/InputEvent.cpp
	${_SRC_DIR}/Media.cpp

	${_SRC_DIR}/containers/ImageContainer.cpp
	${_SRC_DIR}/containers/TextContainer.cpp
	${_SRC_DIR}/containers/SoundContainer.cpp
	${_SRC_DIR}/containers/MusicContainer.cpp

	${_SRC_DIR}/config/ConfigApplier.cpp

<<<<<<< HEAD
=======
	${_SRC_DIR}/config/ConfigApplier.cpp

>>>>>>> 6bb771e45190decd39b99884f258ab88a9b899ff
)

set_target_cpp_standard(${PROJECT_NAME} 17)
enable_target_warnings(${PROJECT_NAME})

target_include_directories(
	${PROJECT_NAME} 
        PUBLIC 
		    ${_BASE_DIR}
        PRIVATE
            ${SDL2_INCLUDE_DIR}
            ${SDL2_IMAGE_INCLUDE_DIR}
            ${SDL2_TTF_INCLUDE_DIR}
            ${SDL2_MIXER_INCLUDE_DIR}
)

target_link_libraries(
	${PROJECT_NAME} 
        PUBLIC 
		    utils
        PRIVATE
            ${SDL2_LIBRARY}
            ${SDL2_IMAGE_LIBRARY}
            ${SDL2_TTF_LIBRARY}
            ${SDL2_MIXER_LIBRARY}
)