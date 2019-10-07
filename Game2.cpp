// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Paul M
// Created on: October 2019
// number guessing game but now random

#include <iostream>
#include <cstdlib>

int main() {
    // variable declaration
    int RandomNumber;
    int NumberGuess;

    // set number
    RandomNumber = rand() % 9 + 0;
    // input
    std::cout << "Enter a number between 0 and 9: ";
    std::cin >> NumberGuess;
    // process
    if (NumberGuess == RandomNumber) {
        // output
        std::cout << "" << std::endl;
        std::cout << "Congrats you right dawg" << std::endl;
    }

    // process
    else {
        // output
        std::cout << "" << std::endl;
        std::cout << "You are a failure" << std::endl;
    }
}
