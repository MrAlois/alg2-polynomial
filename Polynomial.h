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
    [[nodiscard]] const std::vector<double> &getCoefficients() const;
    [[nodiscard]] unsigned int getPolynomialDegree() const;

public:
    Polynomial();
    explicit Polynomial(std::vector<double> data);
    Polynomial(std::initializer_list<double> args);

    double solve(double x0);
    Polynomial operator+(Polynomial other);
};


#endif //ALG2_POLYNOMIAL_POLYNOMIAL_H
