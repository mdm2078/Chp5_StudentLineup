// Chp5_StudentLineup.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
	// Introductory Statement
	cout << "This program will arrange students in alphabetical order by their first names." << endl;
	cout << "It will determine the student at the front of the line and the student at the end." << endl;


	int numStudents;

	// Input Validation for number stduents
	do {
		cout << "Enter the number of students in the class (1-25):";
		cin >> numStudents;
		if (numStudents < 1 || numStudents > 25) {
			cout << "Invalid input. Please enter a number between 1 and 25." << endl;
		}
	} while (numStudents < 1 || numStudents > 25);

	// Array to store student names 
	string name, firstStudent, lastStudent;

	cout << "Enter the names of the studemts:" << endl;
	for (int i = 0; i < numStudents; ++i) {
		cout << "Student" << (i + 1) << ":";
		cin >> name;

		// Intialize firstStudent and lastStudent with the first input name
		if (i == 0) {
			firstStudent = name;
			lastStudent = name;
		}
		else {
			// Compare names to find the alphabetically first and last names
			if (name < firstStudent) {
				firstStudent = name;
			}
			if (name > lastStudent) {
				lastStudent = name;
			}
		}
	}

	// Dispaly the results
	cout << "\nThe student at the front of the line is:" << firstStudent << endl;
	cout << "The student at the end of the line is:" << lastStudent << endl;

	return 0;
}

