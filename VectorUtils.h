//
// Created by asenkyrik on 19.10.2022.
//

#ifndef ALG2_POLYNOMIAL_VECTORUTILS_H
#define ALG2_POLYNOMIAL_VECTORUTILS_H


#include "Polynomial.h"

class VectorUtils {
public:
    static std::vector<double> mergeAndAdd(std::vector<double> &first, std::vector<double>  &second){
        std::vector<double> result;

        std::transform(first.begin(), first.end(),
                       second.begin(), result.begin(),
                       [&](const auto& first, const auto& second){
                            std::cout << first << " - " << second;
                           return second;
                       });

        for(auto f: result)
            std::cout << " f" << f;

        return result;
    }
};


#endif //ALG2_POLYNOMIAL_VECTORUTILS_H
