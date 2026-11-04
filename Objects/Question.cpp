#include "Question.h"
#include <iostream>
#include <cstdlib>
#include <ctime> // for time()

void Question:: generate(int a, int b) {
	if (operand1 != 0) {
		operand1 = ans;
	}
	else {

		operand1 = +(rand() % (b - a + 1));;
	}
	operand2 = a + (rand() % (b - a + 1));

	if (rand() < RAND_MAX / 2) {
		symbol = '+';
		ans = operand1 + operand2;

	}
	else {
		symbol = '-';
		ans = operand1 - operand2;
	}

}

void Question:: display() {
	std::cout << operand1 << " " << symbol << " " << operand2 << " " << " =?" << std::endl;
	std::cin>> userAns;
}

bool Question::getAnswer() {

	if (userAns == ans) {
		std::cout << "Answer correct!"<<std::endl;
	}
	else {
		std::cout << "Incorrect, " << "correct answer is " << ans<<std::endl;
	}

	return ans==userAns;
}
