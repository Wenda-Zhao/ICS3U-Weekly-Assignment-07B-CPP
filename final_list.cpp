// Copyright (c) 2020 St. Mother Teresa HS All rights reserved.
//
// Created by: Wenda Zhao
// Created on: Jan 2021
// This program for arrarys

#include <iostream>
#include <array>


template<size_t N>
int SumNumber(std::array<int, N> my_numbers) {
    // this functions add up all the numbers in the list

    int total = 0;

    for (int loop_number : my_numbers) {
        total += loop_number;
    }

    return total;
}

main() {
    // this function uses an array

    std::array<int, 10> my_numbers;
    int randomNumbers = 0;
    int sum_number = 0;

    srand(time(NULL));

    // input
    std::cout << "The numbers are: ";
    for (int loop_counter = 0; loop_counter < 10; loop_counter++) {
        randomNumbers = (rand() % 10) + 1;
        my_numbers[loop_counter] = randomNumbers;
        std::cout << randomNumbers << ", ";
    }
    std::cout << " " << std::endl;

    sum_number = SumNumber(my_numbers);

    std::cout << "The sum of all the numbers is: " << sum_number << std::endl;
}
