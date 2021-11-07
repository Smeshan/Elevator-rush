cmake_minimum_required(VERSION 3.5.1)

include(${CMAKE_CURRENT_SOURCE_DIR}/cmake_helpers/helpers.cmake)

set(CMAKE_MODULE_PATH
	${CMAKE_MODULE_PATH} ${CMAKE_CURRENT_SOURCE_DIR}/cmake_helpers/find_modules)

<<<<<<< HEAD
project(timers LANGUAGES CXX)
=======
project(animations LANGUAGES CXX)
>>>>>>> 6bb771e45190decd39b99884f258ab88a9b899ff

if(UNIX)
	set(SDL2_image_name SDL2_image)
	set(SDL2_ttf_name SDL2_ttf)
	set(SDL2_mixer_name SDL2_mixer)
elseif(WIN32 OR APPLE)
	set(SDL2_image_name SDL2_IMAGE)
	set(SDL2_ttf_name SDL2_TTF)
	set(SDL2_mixer_name SDL2_MIXER)
endif()

find_package(SDL2 REQUIRED)
find_package(SDL2_image REQUIRED)
find_package(${SDL2_ttf_name} REQUIRED)
find_package(${SDL2_mixer_name} REQUIRED)

set(_INC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include)
set(_SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)

add_executable(${PROJECT_NAME} 

	${_INC_DIR}/common/CommonDefines.h
	
	${_INC_DIR}/game/Game.h
	${_INC_DIR}/game/config/GameConfig.h
	${_INC_DIR}/game/entities/Console.h
	${_INC_DIR}/game/entities/KeyWords.h
	${_INC_DIR}/game/entities/TextField.h
	${_INC_DIR}/game/entities/TextLine.h
	${_INC_DIR}/game/entities/SettingsScreen.h
	${_INC_DIR}/game/entities/Hero.h

	${_INC_DIR}/game/entities/building/FloorTile.h
	${_INC_DIR}/game/entities/building/Building.h

	${_INC_DIR}/game/proxies/GameProxy.h

	${_INC_DIR}/game/animations/BuildingLigth.h

	${_INC_DIR}/game/ui_buttons/TestButton.h
	${_INC_DIR}/game/ui_buttons/MenuButton.h

	${_INC_DIR}/game/screens/SettingsScreen.h
	${_INC_DIR}/game/screens/MenuScreen.h
	${_INC_DIR}/game/screens/GameScreen.h

	${_INC_DIR}/engine/config/EngineConfig.h
	${_INC_DIR}/engine/EngineConfigLoader.h
	${_INC_DIR}/engine/Engine.h
	
	${_SRC_DIR}/main.cpp

	${_SRC_DIR}/game/Game.cpp
	${_SRC_DIR}/game/entities/Console.cpp
	${_SRC_DIR}/game/entities/KeyWords.cpp
	${_SRC_DIR}/game/entities/TextField.cpp
	${_SRC_DIR}/game/entities/TextLine.cpp
<<<<<<< HEAD
	
	${_SRC_DIR}/game/entities/building/FloorTile.cpp
	${_SRC_DIR}/game/entities/building/Building.cpp

	${_SRC_DIR}/game/animations/BuildingLigth.cpp

	${_SRC_DIR}/game/ui_buttons/TestButton.cpp
	${_SRC_DIR}/game/ui_buttons/MenuButton.cpp

	${_SRC_DIR}/game/screens/SettingsScreen.cpp
	${_SRC_DIR}/game/screens/MenuScreen.cpp
	${_SRC_DIR}/game/screens/GameScreen.cpp
=======
	${_SRC_DIR}/game/entities/SettingsScreen.cpp
	${_SRC_DIR}/game/entities/Hero.cpp
>>>>>>> 6bb771e45190decd39b99884f258ab88a9b899ff

	${_SRC_DIR}/engine/Engine.cpp
	${_SRC_DIR}/engine/EngineConfigLoader.cpp
)

set_target_cpp_standard(${PROJECT_NAME} 17)
enable_target_warnings(${PROJECT_NAME})

target_include_directories(
	${PROJECT_NAME} PRIVATE 
		${_INC_DIR}
)

target_link_libraries(
	${PROJECT_NAME}
		PRIVATE 
			manager_utils
)

if (CMAKE_BUILD_TYPE MATCHES Release)
	target_compile_definitions(
		${PROJECT_NAME}
			PRIVATE
				-DRELEASE_BUILD=1
	)
	add_custom_command(
		TARGET ${PROJECT_NAME} POST_BUILD
			COMMAND ${CMAKE_COMMAND} -E copy_directory
				${CMAKE_CURRENT_SOURCE_DIR}/resources/
				$<TARGET_FILE_DIR:${PROJECT_NAME}>/resources/
	)
endif()

add_subdirectory(utils)
add_subdirectory(sdl_utils)
add_subdirectory(manager_utils)