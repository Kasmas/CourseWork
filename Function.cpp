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

void Div()
{
	double a, b;
	cout << "Enter the first number: ";
	cin >> a;
	cout << "Enter the second numbe: ";
	cin >> b;
	cout << a << " / " << b << " = " << setprecision(8) << a / b << endl;
}

void Sqrt()
{
	double a;
	cout << "Enter the number: ";
	cin >> a;
	cout << "sqrt(" << a << ") = " << sqrt(a) << endl;
}
