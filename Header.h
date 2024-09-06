#pragma once
#include <iostream>

void calculator();
void calculator()
{
	char op;
	float num1, num2;
	cout << "Enter operator (+, -, *, /): ";
	cin >> op;
	cout << "Enter two operands: ";
	cin >> num1 >> num2;

	switch (op)
	{
	case '+':
		cout << num1 + num2 << endl;
		break;
	case '-':
		cout << num1 - num2 << endl;
		break;
	case '*':
		cout << num1 * num2 << endl;
		break;
	case '/':
		if (num2 != 0)
			cout << num1 / num2 << endl;
	}
}