//
// Created by asenkyrik on 19.10.2022.
//

#include <iostream>
#include <utility>
#include <cmath>
#include "Polynomial.h"
#include "PolynomialUtils.h"


Polynomial::Polynomial() {
    this->coefficients.push_back(0.0);
}

Polynomial::Polynomial(std::initializer_list<double> args) {
    this->coefficients = args;
    std::reverse(this->coefficients.begin(), this->coefficients.end());
}

Polynomial::Polynomial(std::vector<double> data) {
    this->coefficients = std::move(data);
//    std::reverse(this->coefficients.begin(), this->coefficients.end());
}

unsigned int Polynomial::degree() {
    return coefficients.size();
}

double Polynomial::calculate(double x) {
    double result = 0;
    for(unsigned int i = 0; i < degree(); ++i)
        result += this->coefficients.at(i) * pow(x, degree() - i - 1);

    return result;
}

Polynomial Polynomial::operator+(Polynomial other) {
    const auto largestSize = (other.degree() > this->degree())
                      ? other.coefficients.size() : this->coefficients.size();

    std::vector<double> result;
    for(unsigned int i = 0; i < largestSize; ++i){
        if(this->coefficients.size() < largestSize) this->coefficients.insert(this->coefficients.begin(), 0);
        if(other.coefficients.size() < largestSize) other.coefficients.insert(other.coefficients.begin(), 0);

        result.push_back(this->coefficients.at(i) + other.coefficients.at(i));
    }

    return Polynomial(result);
}

const std::vector<double> &Polynomial::getCoefficients() const {
    return coefficients;
}



