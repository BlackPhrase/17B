project(17b-enginetest)

include_directories(${CMAKE_SOURCE_DIR}/src/17b)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} 17b-ecs)