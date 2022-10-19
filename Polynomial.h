//
// Created by asenkyrik on 19.10.2022.
//

#ifndef ALG2_POLYNOMIAL_POLYNOMIAL_H
#define ALG2_POLYNOMIAL_POLYNOMIAL_H

#include <vector>

class Polynomial {
private:
    std::vector<double> coefficients;

public:
    Polynomial();
    explicit Polynomial(std::vector<double> data);
    Polynomial(std::initializer_list<double> args);

    unsigned int degree();
    double calculate(double x0);
    Polynomial operator+(Polynomial other);

    void print();
};


#endif //ALG2_POLYNOMIAL_POLYNOMIAL_H
