// Week 3: Individual: FizzBuzz Program, Part 2
// PRG/410: C++ Programming I
// October 10, 2016
// Marcia L. Allen
// Modify the FizzBuzz program developed in Week Two to record the user input using an array.
// The function must have the prototype int FizzBuzz(int, int), where the function takes the 
// row number input from user as the first parameter and the column input amount by the user 
// as secondparameter. Create the function to output the number of guesses user takes until 
// they get a FizzBuzz output. Replace this code in the body of your program with a switch 
// statement.When the user successfully enters a number that gets desired FizzBuzz ouput, 
//prompt to ask if the user wants to play again.

#include "stdafx.h"
#include<iostream>
#include<cstring>
#include <string>
#include <sstream>
using namespace std;

// Intialize Prototype
int FizzBuzz(int, int);
 
// Initalize Function
void printResult(int);

// Intialize inputVal
int inputVal[100];


int _tmain(int argc, _TCHAR* argv[]) {

		// Initalize Variables
		int number;
		int i = 0;
		int numGuess = 0;
		int rowNum, colNum;
		int flag = 0;
		int choice = 0;

		while (true) {
			flag = 0;
			cout << "Enter a row number:";
			cin >> rowNum;
			cout << "Enter a column number:";
			cin >> colNum;

			number = FizzBuzz(rowNum, colNum);
			numGuess++;

			// Determine if the number is divisable by the numbers 3 and 5.
			if ((number % 3 == 0) && (number % 5 == 0)) {
				flag = 1;
			}
			else if (number % 3 == 0) {
				flag = 2;
			}
			else if (number % 5 == 0) {
				flag = 3;
			}
			else
				printf("Please enter another number.\n");

			cin.ignore();

			// User enters a number that acheives a desired FizzBuzz ouput.
			// The required results displays, dependant on number entered.
			switch (flag) {

			case 1:
				cout << "Number: " << number << " - FizzBuzz" << endl;

				printResult(numGuess);
				break;

			case 2:
				cout << "Number: " << number << " - Fizz" << endl;
				break;

			case 3:
				cout << "Number: " << number << " - Buzz" << endl;
				break;

			}

			if (flag == 1){
				break;
			}
				// Prompt to ask if the user wants to play again.  
				cout << "Would you like to play FizzBuz again? (1 = Yes, 2 = No): " << endl;
				cin >> choice;

				if (choice == 2)
					break;
		}

		return 0;
	}

	// Prototype FizzBuzz
	int FizzBuzz(int rowNum, int colNum) {
		inputVal[rowNum] = colNum;
		return inputVal[rowNum];
	}

	// Function to output the number of guesses user takes until they acheive "FizzBuzz" output
	void printResult(int number) {

		int choice = 0;

		cout << "Total number of guesses to acheive FizzBuzz: " << number << endl;
}