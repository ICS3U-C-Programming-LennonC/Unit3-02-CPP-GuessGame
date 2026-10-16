// Copyright (c) 2026 Lennon Cehajic All rights reserved.
// Created by: Lennon Cehajic
// Date: October 15th, 2026
// This program runs a random number guessing game.

#include <iostream>
int main() {
    // Declare the variables
    int userGuess, correctNum;

    // Set the secret number
    correctNum = 2;

    // get the user's guess
    std::cout << "Guess a number between 0 and 9: ";
    std::cin >> userGuess;

    // check if the user is correct or not
    if (userGuess == correctNum) {
        std::cout << "You have guessed correctly!";
    }
    if (userGuess != correctNum) {
        std::cout << "You have guessed incorrectly.";
        std::cout << "The correct answer is " << correctNum << std::endl;
    }
}
