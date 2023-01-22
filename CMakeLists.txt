cmake_minimum_required(VERSION 3.17)
project(Dynamic-Cloth)

set(CMAKE_CXX_STANDARD 17)

# add_compile_options(-O3)
#add_compile_options(-g)

add_executable(Dynamic-Cloth dynamic_cloth/main.cpp dynamic_cloth/util.cpp dynamic_cloth/util.h dynamic_cloth/EventHandler.h dynamic_cloth/EventHandler.cpp dynamic_cloth/physics/Cloth.h dynamic_cloth/physics/Cloth.cpp dynamic_cloth/physics/ClothLoader.cpp dynamic_cloth/physics/ClothLoader.h dynamic_cloth/physics/ClothSimulator.h dynamic_cloth/physics/ClothSimulator.cpp dynamic_cloth/physics/Particle.h dynamic_cloth/physics/Particle.cpp)

target_link_libraries(Dynamic-Cloth -lsfml-graphics -lsfml-window -lsfml-system)
