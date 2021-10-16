#include <iostream>
#include "include/Calculator.h"
#include "include/config.h"

using namespace std;

int main(int, char**)
{
	double x = 0.0;
	double y = 0.0;
	double result = 0.0;
	char oper = '+';

	cout << "Calculator Console Application" << endl;
	cout << "Version Number: " << PROJECT_VER << endl;

	Calculator c;

	cin >> x >> oper >> y;

	switch (oper)
	{
	case '+':
		result = c.Sum(x, y);
		break;
	case '-':
		result = c.Sub(x, y);
		break;
	case '*':
		result = c.Multiply(x, y);
		break;
	case '/':
		result = c.Divide(x, y);
		break;
	default:
		result = 0.0;
	}

    cout << "Result is: " << result << endl;

	return 0;
}