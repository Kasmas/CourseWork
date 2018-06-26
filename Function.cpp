#include <iostream>
#include <math.h>
#include <iomanip>
#include "Function_declaration.h"

using namespace std;

bool ShowMenu()
{
	short menu;

	cout << "1. Addition   2. Computation  3. Multiplication  4. Division" << endl;
	cout << "5. Square root extraction  6. Root of any degree  7. Exponentiation " << endl;
	
	cin >> menu;
	if (menu == 1)
		Sum();
	else if (menu == 2)
		Sub();
	else if (menu == 3)
		Mul();
	else if (menu == 4)
		Div();
	else if (menu == 5)
		Sqrt();
	else if (menu == 6)
		Radical();
	else if (menu == 7)
		Power();
	else if (menu == 8)
		return true;
	else
		Error();

	return false;
}

void Error()
{
	cout << "Invalid input, try again" << endl;
}

void Sum()
{
	int number;
	cout << "Enter the number of numbers: ";
	cin >> number;
	double * s = new double[number];
	double answer = 0;
	for (int i = 0; i < number; i++)
	{
		cout << "Enter " << i + 1 << " the number: ";
		cin >> s[i];
		answer += s[i];
	}
	for (int i = 0; i < number - 1; i++)
		cout << setprecision(8) << s[i] << " + ";
	cout << setprecision(8) << s[number - 1] << " = " << setprecision(8) << answer << endl;
	delete[]s;
}
