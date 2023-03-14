//
// Created by adr39 on 16/08/2022.
//

#ifndef CLOTH_CLOTHLOADER_H
#define CLOTH_CLOTHLOADER_H

#include "Cloth.h"
#include "Particle.h"
#include <fstream>
#include <iostream>
#include <regex>
#include <string>

class ClothLoader
{
  private:
    void load_cloth_coordinates(Cloth& c, std::string& filepath);
    void load_cloth_connectivity(Cloth& c, std::string& filepath);

  public:
    ClothLoader();

    Cloth load_cloth_from_file(std::string filepath);
};

#endif // CLOTH_CLOTHLOADER_H
