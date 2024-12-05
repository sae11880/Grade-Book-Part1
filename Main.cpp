//the assignment is to create a functiong grade book

//I decided that to make it easier to find mistakes with certain parts to also use modules to define my actions


#include <iostream>
#include <string>
#include "Input.h"
#include "Equation.h"
#include "Grading.h"
#include "Display.h"


const int NUMBER_OF_STUDENTS = 5;
const int NUMBER_OF_TESTS = 4;

int main() {
	std::string students[NUMBER_OF_STUDENTS];
	double scores[NUMBER_OF_STUDENTS][NUMBER_OF_TESTS];
	double averages[NUMBER_OF_STUDENTS];
	char grades[NUMBER_OF_STUDENTS];


	//name and score input

	inputscores(students, scores, NUMBER_OF_STUDENTS, NUMBER_OF_TESTS);

	//next we need to calculate grade

	for (int i = 0; i < NUMBER_OF_STUDENTS; i++) {
		averages[i] = Averagecalculator(scores[i], NUMBER_OF_TESTS);
		grades[i] = Lettergrade(averages[i]);
	}


	//now we will display the grade book!
	displayresults(students, scores, averages, grades, NUMBER_OF_STUDENTS, NUMBER_OF_TESTS);

	return 0;


}
