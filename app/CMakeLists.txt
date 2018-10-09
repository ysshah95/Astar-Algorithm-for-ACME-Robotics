find_package(SDL2 REQUIRED)

add_executable(shell-app main.cpp)

include_directories(
    ${CMAKE_SOURCE_DIR}/include
    ${SDL2_INCLUDE_DIRS}
)

target_link_libraries(shell-app ${SDL2_LIBRARIES})