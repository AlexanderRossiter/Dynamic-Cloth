cmake_minimum_required(VERSION 3.20.0)
project(Dynamic-Cloth CXX)

set(CMAKE_CXX_STANDARD 17)

add_executable(Dynamic-Cloth 
               src/main.cpp 
               src/EventHandler.cpp
               src/EventHandler.h
               src/App.cpp
               src/App.h
)

add_subdirectory(./src/physics)
add_subdirectory(./src/util)

target_link_libraries(Dynamic-Cloth PRIVATE 
                    physics
                    util
                    -lsfml-graphics 
                    -lsfml-window 
                    -lsfml-system 
)
