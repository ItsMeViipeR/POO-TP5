cmake_minimum_required(VERSION 3.10)
project(POO-TP5 VERSION 1.0)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include_directories(include)

set(SOURCES
	src/main.cpp
	src/Figure.cpp
	src/Point2D.cpp
	src/CptAppel.cpp
	src/Tableau6.cpp
)

add_executable(${PROJECT_NAME} ${SOURCES})

target_compile_options(${PROJECT_NAME}
	PRIVATE
		-Wall
		-Wextra
		-Wpedantic
		-fsanitize=address
)

target_link_options(${PROJECT_NAME}
	PRIVATE -fsanitize=address
)