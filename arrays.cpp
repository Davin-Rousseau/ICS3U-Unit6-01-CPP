
// Copyright (c) 2019.
//
// Created by: Davin Rousseau
// Created on: December 2019
// This is a program which generates 10 numbers and tells you the average.

#include <time.h>
#include <iostream>


main() {
    // this is what runs the program.

    srand(time(NULL));

    int randomNumbers[10];
    int total;
    int counter;
    int number;
    int average;

    total = 0;

    std::cout << "Here are the 10 numbers:" << std::endl;
    for (int counter = 0; counter < 10; counter++) {
        number = (rand() % 100) + 1;
        randomNumbers[counter] = number;
        total = total + randomNumbers[counter];
        std::cout << randomNumbers[counter] << " ";
    }
    std::cout << "" << std::endl;
    average = (total / 10);
    std::cout << "The average is: " << average << std::endl;
}
