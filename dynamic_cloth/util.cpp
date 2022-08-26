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
