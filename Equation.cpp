//this defines the equation function and i also allowed for it to drop the lowest found grade


#include "Equation.h"

double Averagecalculator(double scores[], int numtests) {
    // Find the lowest score
    double lowest = scores[0];
    for (int i = 1; i < numtests; i++) {
        if (scores[i] < lowest) {
            lowest = scores[i];
        }
    }

    // Calculate the total without the lowest found grade
    double total = 0;
    for (int i = 0; i < numtests; i++) {
        total += scores[i];
    }
    total -= lowest;  //subtract lowest grade from total

    return total / (numtests - 1);
}

