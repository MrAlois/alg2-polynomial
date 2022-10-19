//
// Created by asenkyrik on 19.10.2022.
//

#include <iostream>
#include <utility>
#include <cmath>
#include <ranges>
#include "Polynomial.h"
#include "PolynomialUtils.h"

/**
 * Constructors. If the one with initializer_list is used, reverses data order (implementation-dependant).
 */
Polynomial::Polynomial() {
    this->coefficients.push_back(0.0);
}

Polynomial::Polynomial(std::initializer_list<double> args) : coefficients(args) {
    std::reverse(this->coefficients.begin(), this->coefficients.end());
}

Polynomial::Polynomial(std::vector<double> data) : coefficients(std::move(data)) {}

/**
 * Computes the root value of this polynomial using Horner's scheme
 * @param x The root
 * @return Computed root value.
 */
double Polynomial::solve(double x) {
    double result = coefficients.at(0);
    for (const auto& coefficient: coefficients | std::views::drop(1))
        result = (result * x) + coefficient;


    return result;
}

/**
 * Adds two polynomial together using operator overloading. Pads the copy of the data with zeroes, if the size is uneven.
 * @param other Polynomial to add
 * @return Merged Polynomial
 */
Polynomial Polynomial::operator+(Polynomial other) {
    const auto largestSize = (other.getPolynomialDegree() > this->getPolynomialDegree())
                      ? other.coefficients.size() : this->coefficients.size();

    std::vector<double> result;
    for(unsigned int i = 0; i < largestSize; ++i){
        if(this->coefficients.size() < largestSize) this->coefficients.insert(this->coefficients.begin(), 0);
        if(other.coefficients.size() < largestSize) other.coefficients.insert(other.coefficients.begin(), 0);

        result.push_back(this->coefficients.at(i) + other.coefficients.at(i));
    }

    return Polynomial(result);
}


unsigned int Polynomial::getPolynomialDegree() const {
    return coefficients.size();
}

const std::vector<double> &Polynomial::getCoefficients() const {
    return coefficients;
}



