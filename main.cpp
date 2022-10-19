#include <iostream>
#include "Polynomial.h"
#include "PolynomialUtils.h"

int main(){
    Polynomial A{4, 5, -1, 7, 0, 3};
    Polynomial B{0.8, 10, 1, 3, 0};

    PolynomialUtils::print(A);
    PolynomialUtils::print(B);

    auto C = A + B;
    PolynomialUtils::print(C);

    return 0;
}