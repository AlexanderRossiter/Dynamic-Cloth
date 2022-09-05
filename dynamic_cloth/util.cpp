//
// Created by adr39 on 16/08/2022.
//

#include "util.h"

std::vector<std::string> util::str_split(const std::string& inputString, const std::string& delimiter) {
    // The vector that will contain the split string.
    std::vector<std::string> splitString;
    int startIndex = 0;
    int endIndex = 0;

    while ( (endIndex = inputString.find(delimiter, startIndex)) <
            inputString.size() ) {
        std::string subString = inputString.substr(startIndex, endIndex -
                                                               startIndex);
        splitString.push_back(subString);
        startIndex = endIndex + delimiter.size();
    }

    if (startIndex < inputString.size()) {
        std::string subString = inputString.substr(startIndex);
        splitString.push_back(subString);
    }

    return splitString;
}

void util::HSV_to_RGB(float h, float s, float v, std::vector<float>& rgb) {
    //float c = (1.f - std::abs(2.f * b - 1.f)) * s;
    float c = v * s;
    float h_dash = h / 60.f;
    float x = c * (1 - std::abs(std::fmod(h_dash, 2) - 1));

    if ((0 <= h_dash) && (h_dash < 1)) {
        rgb[0] = c;
        rgb[1] = x;
        rgb[2] = 0.f;
    }
    else if ((1 <= h_dash) && (h_dash < 2)) {
        rgb[0] = x;
        rgb[1] = c;
        rgb[2] = 0.f;
    }
    else if ((2 <= h_dash) && (h_dash < 3)) {
        rgb[0] = 0.f;
        rgb[1] = c;
        rgb[2] = x;
    }
    else if ((3 <= h_dash) && (h_dash < 4)) {
        rgb[0] = 0.f;
        rgb[1] = x;
        rgb[2] = c;
    }
    else if ((4 <= h_dash) && (h_dash < 5)) {
        rgb[0] = x;
        rgb[1] = 0.f;
        rgb[2] = c;
    }
    else if ((5 <= h_dash) && (h_dash < 6)) {
        rgb[0] = c;
        rgb[1] = 0.f;
        rgb[2] = x;
    }

    float m = v - c / 2.f;
    for (float val : rgb)
        val += m;

}
