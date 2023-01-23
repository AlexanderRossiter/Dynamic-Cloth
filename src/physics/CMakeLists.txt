add_library(physics OBJECT
    Cloth.cpp
    ClothLoader.cpp
    Particle.cpp
    ClothSimulator.cpp
)

target_include_directories(physics PUBLIC .)
target_link_libraries(physics PRIVATE util)