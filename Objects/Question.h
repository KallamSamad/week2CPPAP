#pragma once

#include <stdlib.h>

class Question
{
private:
	int operand1 = 0;
	int operand2 = 0;
	int userAns = 0;
	int ans = 0;
	char symbol ='+' ;
	int score = 0;


public:
	void generate(int a, int b);
	void display();
	bool getAnswer();
};


