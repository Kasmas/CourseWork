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

void Sub()
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

void Mul()
{
	int number;
	cout << "Enter the number of numbers: ";
	cin >> number;
	double * s = new double[number];
	double answer = 1;
	for (int i = 0; i < number; i++)
	{
		cout << "Enter " << i + 1 << " the number: ";
		cin >> s[i];
		answer *= s[i];
	}
	for (int i = 0; i < number - 1; i++)
		cout << setprecision(8) << s[i] << " * ";
	cout << setprecision(8) << s[number - 1] << " = " << setprecision(8) << answer << endl;
	delete[]s;
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

void Radical()
{
	double a, b;
	cout << "Enter the number: ";
	cin >> a;
	cout << "The root of which degree one must extract? ";
	cin >> b;
	cout << "Root " << b << " of degree " << a << " is equal to " << pow(a, 1 / b) << endl;
}

void Power()
{
	double a, b;
	cout << "Enter the number ";
	cin >> a;
	cout << "Enter the degree: ";
	cin >> b;
	cout << a << "^" << b << " = " << pow(a, b) << endl;
}
