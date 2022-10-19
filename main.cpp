#include <iostream>
#include "Polynomial.h"
#include "PolynomialUtils.h"

int main(){
    Polynomial P{4, 5, -1, 7, 0, 3};
    PolynomialUtils::print(P, 5);

    Polynomial Q{-3, 1, 0, -1, 0, 0, 4};
    PolynomialUtils::print(Q);

    Polynomial R = P + Q;
    PolynomialUtils::print(R);

    return 0;
}