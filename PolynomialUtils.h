//
// Created by asenkyrik on 19.10.2022.
//

#ifndef ALG2_POLYNOMIAL_POLYNOMIALUTILS_H
#define ALG2_POLYNOMIAL_POLYNOMIALUTILS_H


#include "Polynomial.h"

class PolynomialUtils {
public:
    static std::vector<double> mergeAndAdd(std::vector<double> &first, std::vector<double>  &second){

        std::vector<double> result;
        std::transform(first.begin(), first.end(),
                       second.begin(), result.begin(),
                       [&](const auto& first, const auto& second){
                            std::cout << first << " - " << second;
                           return second;
                       });

        return result;
    }

    static void print(Polynomial& polynomial){
        const auto& coefficients = polynomial.getCoefficients();

        std::cout << "P(x) = ";
        for(unsigned i = 0; i < coefficients.size(); ++i){
            const auto& c = coefficients[i];
            if(c == 0) continue;
            if(i != 0) std::cout << ((c >= 0) ? " + " : " - ");

            auto power = coefficients.size() - i - 1;

            if(c != 1)      std::cout << std::abs(c);
            if(power != 0)  std::cout << "x^" << power;
        }
        std::cout << std::endl;
    }
};


#endif //ALG2_POLYNOMIAL_POLYNOMIALUTILS_H
