//
// Created by asenkyrik on 19.10.2022.
//

#ifndef ALG2_POLYNOMIAL_POLYNOMIALUTILS_H
#define ALG2_POLYNOMIAL_POLYNOMIALUTILS_H

#include <iostream>
#include <sstream>
#include "Polynomial.h"


class PolynomialUtils {
public:
    static void print(Polynomial& polynomial);

    static void print(Polynomial& polynomial, const int root);

private:
    static std::string build_body(Polynomial& polynomial);
};


#endif //ALG2_POLYNOMIAL_POLYNOMIALUTILS_H
