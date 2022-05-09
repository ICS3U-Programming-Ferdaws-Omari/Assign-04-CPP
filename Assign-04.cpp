// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Oct 2019
// This program uses a while loop

#include <iostream>

main() {
    // this function uses a while loop
    int loopCounter = 0;
    float positiveInteger, product;
    std::string userInput;
    // input
    std::cout << "Enter a positive number: ";
    std::cin >> userInput;
    try {
    positiveInteger = std::stof(userInput);
    // process
        while (loopCounter <= 10) {
            if (positiveInteger < 0) {
                std::cout << "Your number cannot be negative!";
                break;
            } else {
                product = positiveInteger * loopCounter;
                std::cout << positiveInteger << " x " << loopCounter << " = "<< product << "\n";
                loopCounter = loopCounter + 1;
        }
    }
    } catch (std::invalid_argument) {
        std::cout << "Invalid input";
    }
}
