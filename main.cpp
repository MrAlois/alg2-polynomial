#include <iostream>
#include "Polynomial.h"

int main(){
    Polynomial polynomial1{3, 0, 7, -1, 5, 4};
    Polynomial polynomial2{0.8, 10, 1, 3, 0};

    polynomial1.print();
    polynomial2.print();

    auto added = polynomial1 + polynomial2;
    added.print();
    std::cout << polynomial1.calculate(5);

    return 0;
}