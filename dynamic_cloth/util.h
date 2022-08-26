//
// Created by adr39 on 16/08/2022.
//

#ifndef CLOTH_UTIL_H
#define CLOTH_UTIL_H

#include <vector>
#include <string>
#include <sstream>
#include <cmath>
#include <iostream>

namespace util {
    std::vector <std::string> str_split(const std::string &inputString, const std::string &delimiter);


    template<typename T>
    std::string vector_to_string(const std::vector<T>& vector) {
        std::ostringstream ss;
        ss << "[";

        for (int i = 0; i < vector.size(); i++) {
            ss << vector.at(i);
            if (i != vector.size()-1) {
                ss << ", ";
            }
        }
        ss << "]";

        return ss.str();
    }

    template<typename T>
    void vector_normalise(std::vector<T>& vec) {
        T val_sq = (T) 0.0;
        for (T val : vec) {
            val_sq += val*val;
        }
        if (val_sq != 0) {
            val_sq = std::sqrt(val_sq);
            for (int i = 0; i < vec.size(); i++) {
                vec[i] = vec[i] / val_sq;
            }
        }
    }

    template<typename T>
        T vector_magnitude(std::vector<T>& vec) {
            T val_sq = (T) 0.0;
            for (T val : vec) {
                val_sq += val*val;
            }
        val_sq = std::sqrt(val_sq);
        return val_sq;
    }


}


#endif //CLOTH_UTIL_H
