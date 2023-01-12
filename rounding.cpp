// Copyright Johanna Liu 2022
//
// Created by Johanna Liu
// Created in Jan 2023
// This program calculates the average

#include <iostream>
#include <cmath>
#include <string>

float decimalConverter(float &decimal, int &decimalPlaces) {
    // Converts a string to hex values
    decimal = decimal * pow(10.0, decimalPlaces) + 0.5;
    decimal = trunc(decimal);
    decimal = decimal / pow(10.0, decimalPlaces);
}

int main() {
    // Gets the string and prints the full hex value

    std::string strDecimal;
    std::string strDecimalPlaces;
    float decimal;
    int decimalPlaces;

    std::cout << "This program rounds a number." << std::endl;
    std::cout << "Enter a number you want to be round is: ";
    std::cin >> strDecimal;
    std::cout << "Enter the number of decimal places you want rounded: ";
    std::cin >> strDecimalPlaces;

    try {
        decimal = std::stof(strDecimal);
        decimalPlaces = std::stoi(strDecimalPlaces);

        // call functions
        decimalConverter(decimal, decimalPlaces);

        std::cout << "The number rounded is: " << decimal << "." << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "Invalid Integer.";
    }

    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
