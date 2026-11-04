// Objects.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Question.h"
#include <iostream>
#include <cstdlib>
#include <ctime> // for time()

// START OF CODE BLOCK
#include <iostream>
using namespace std;
int main()
{
	const int NO_OF_QUESTIONS = 10;
	const int MIN_OP_VALUE = 1;
	const int MAX_OP_VALUE = 10;
	srand((int)time(nullptr));

		cout << "Keep Counting - With Objects\n";
	cout << "----------------------------\n";
	int score = 0;
	// an array of 10 Question objects
	Question questions[NO_OF_QUESTIONS];
	for (int i = 0; i < NO_OF_QUESTIONS; i++)
	{
		// ask the object to generate and store information
		questions[i].generate(MIN_OP_VALUE, MAX_OP_VALUE);
		cout << "Question " << (i + 1) << ": ";
		// ask the question to display itself
		questions[i].display();
		// ask the question to get input from the user, check for correctness and
		// return true if correct (false if incorrect)
		if (questions[i].getAnswer())
			++score;
	}
	cout << "You got " << score << " out of " << NO_OF_QUESTIONS << " questions right\n";
	return 0;
}