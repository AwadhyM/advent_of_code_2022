# Set the project name
project (utils)

# Add a library with the above sources
add_library(${PROJECT_NAME} src/utils.cpp)

target_include_directories(${PROJECT_NAME}
	PUBLIC
		inc
)

