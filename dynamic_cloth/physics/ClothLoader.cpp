//
// Created by adr39 on 16/08/2022.
//

#include "ClothLoader.h"
#include "../util.h"

Cloth ClothLoader::load_cloth_from_file(std::string filepath) {
    // Initialise the cloth
    Cloth c;
    load_cloth_coordinates(c, filepath);
    load_cloth_connectivity(c, filepath);

    return c;
}


void ClothLoader::load_cloth_coordinates(Cloth &c, std::string& filepath) {
    // Start by loading the points of the cloth.
    std::ifstream file(filepath + "\\cloth_points");

    if (file.fail()) {
        std::cout << "Failed to open points file." << std::endl;
        throw std::exception();
    }

    // Our string for reading the lines.
    std::string str;

    // Get the number of points in the file (header).
    std::getline(file, str);
    c.np = std::stoi(str);

    for (int i = 0; i < c.np; i++) {
        float x;
        float y;
        float z;
        float m;

        std::getline(file, str);

        std::vector<std::string> tmp = util::str_split(str, ", ");
        x = std::stof(tmp[0]);
        y = std::stof(tmp[1]);
        z = std::stof(tmp[2]);
        m = std::stof(tmp[3]);

        c.points.push_back(Particle(x, y, z, m));
    }
}

void ClothLoader::load_cloth_connectivity(Cloth &c, std::string &filepath) {
// Start by loading the points of the cloth.
    std::ifstream file(filepath + "\\cloth_connectivity");

    if (file.fail()) {
        std::cout << "Failed to open connectivity file." << std::endl;
        throw std::exception();
    }

    // Our string for reading the lines.
    std::string str;

    for (int i = 0; i < c.np; i++) {
        std::getline(file, str);
        std::vector<std::string> tmp = util::str_split(str, ",");
        Particle& current_coord = c.points.at(i);

        for (const std::string& idx_str : tmp) {
            int idx_int = std::stoi(idx_str);
            current_coord.neighbours.push_back(idx_int);
        }
    }

}



ClothLoader::ClothLoader() {}

ClothLoader::~ClothLoader() {

}