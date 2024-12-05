//the is the display function defined

#include <iostream>
#include <string>
#include "Display.h"

void displayresults(std::string students[], double scores[][4], double averages[], char grades[], int numstudents, int numtests) {
    for (int i = 0; i < numstudents; i++) {
        std::cout << "Student: " << students[i] << std::endl;
        std::cout << "Scores: ";
        for (int j = 0; j < numtests; j++) {
            std::cout << scores[i][j] << " ";
        }
        std::cout << std::endl;
        std::cout << "Average: " << averages[i] << std::endl;
        std::cout << "Grade: " << grades[i] << std::endl;
        std::cout << "-----------------------------" << std::endl;
    }
}
