# pragma once

#include "raining.hpp"
#include <string>
#include <iostream>
#include <algorithm> 

std::string* resizeArray(std::string* oldArray, int currentSize) {
    std::string* newArray = new std::string[currentSize + 1];
    for (int i = 0; i < currentSize; ++i) {
        newArray[i] = oldArray[i];
    }
    delete[] oldArray;
    return newArray;
}

void printBusinesses(std::string* businesses, int size) {
    if (size == 0) {
        std::cout << "Your Business is:\n";
        return;
    }
    std::cout << "Your Businesses are:\n";
    for (int i = 0; i < size; ++i) {
        std::cout << businesses[i] << std::endl;
    }
}

void rainingStrings() {
    bool loop = true;
    int size = 0;

    // Start with an empty array
    std::string* businesses = new std::string[0];

    std::cout << "Welcome to the Business Sorting Program!\n";

    while (loop) {
        std::string businessName;
        std::cout << "\nPlease enter the name of a business: ";
        std::getline(std::cin, businessName);

        businesses = resizeArray(businesses, size);
        businesses[size] = businessName;
        ++size;

        std::sort(businesses, businesses + size);

        printBusinesses(businesses, size);

        std::string again;
        std::cout << "\nAnother Business?\t";
        std::cin >> again;
        std::cin.ignore(); 


        if (again != "yes" && again != "Yes" && again !="Y" && again != "y") {
            loop = false;
        }
    }

    delete[] businesses;
}
