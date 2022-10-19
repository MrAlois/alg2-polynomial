//
// Created by alois on 19.10.2022.
//
#include "PolynomialUtils.h"

/**
 * Prints polynomial in mathematical format.
 * @param polynomial Polynomial to print
 */
void PolynomialUtils::print(Polynomial &polynomial) {
    std::cout << "P(x) = " << build_body(polynomial) << std::endl;
}

/**
 * Prints polynomial in mathematical format with computed root.
 * @param polynomial Polynomial to print
 * @param root Polynomial root to calculate
 */
void PolynomialUtils::print(Polynomial &polynomial, const int root) {
    std::cout << "P(" << root << ") = " << build_body(polynomial) << " = " << polynomial.solve(root) << std::endl;
}

/**
 * Utility function. Creates the Polynomial body.
 * @param polynomial
 * @return Built string of the mathematical formula
 */
std::string PolynomialUtils::build_body(Polynomial &polynomial) {
    const auto& coefficients = polynomial.getCoefficients();
    std::stringstream stream;

    for(unsigned i = 0; i < coefficients.size(); ++i){
        const auto& coeff = coefficients[i];
        if(coeff == 0) continue;
        if(i != 0) stream << ((coeff >= 0) ? " + " : " - ");

        const auto power = coefficients.size() - i - 1;

        if(std::abs(coeff) == 1 && i + 1 == coefficients.size()) stream << std::abs(coeff);
        if(std::abs(coeff) != 1) stream << std::abs(coeff);
        if(power != 0)              stream << "x^" << power;
    }

    return stream.str();
}





