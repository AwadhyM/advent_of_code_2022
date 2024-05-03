cmake_minimum_required(VERSION 3.5)
set(CMAKE_CXX_STANDARD 20)
project(calorie_count CXX)

add_executable(${PROJECT_NAME}
	src/main.cpp
	src/calorie_count.cpp
)

target_include_directories(${PROJECT_NAME}
	PRIVATE
		inc
)
