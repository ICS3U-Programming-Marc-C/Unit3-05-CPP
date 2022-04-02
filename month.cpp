// Copyright (c) 2022 Coffi All rights reserved.
// Created by: Marc Coffi
// Date: April, 2022
// This program finds the month based on a number

#include <iostream>

int main() {
    // Declaring variables
    int number;

    // input
    std::cout << "Enter a number for a month : ";
    std::cin >> number;

    // switch case that compare number with the months of the year
    switch (number) {
        case 1 :
            std::cout << "This is January." << std::endl;
            break;
        case 2 :
            std::cout << "This is February." << std::endl;
            break;
        case 3 :
            std::cout << "This is March." << std::endl;
            break;
        case 4 :
            std::cout << "This is April." << std::endl;
            break;
        case 5 :
            std::cout << "This is May." << std::endl;
            break;
        case 6 :
            std::cout << "This is June." << std::endl;
            break;
        case 7 :
            std::cout << "This is July." << std::endl;
            break;
        case 8 :
            std::cout << "This is August." << std::endl;
            break;
        case 9 :
            std::cout << "This is September." << std::endl;
            break;
        case 10 :
            std::cout << "This is October." << std::endl;
            break;
        case 11 :
            std::cout << "This is November." << std::endl;
            break;
        case 12 :
            std::cout << "This is December." << std::endl;
            break;
        default :
            std::cout << "There is no month for this value!" << std::endl;
    }
}
