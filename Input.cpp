//this define the actual input function 

#include <iostream>
#include <string>
#include "input.h"

void inputscores(std::string students[], double scores[][4], int numberstudents, int numtests) {
    for (int i = 0; i < numberstudents; i++) {
        std::cout << "Enter Student Name:  ";
        std::cin >> students[i];

        for (int j = 0; j < numtests; j++) {
            std::cout << "Enter Test Score:  " << (j + 1) << " for " << students[i] << ": ";
            std::cin >> scores[i][j];
        }
    }

    }
