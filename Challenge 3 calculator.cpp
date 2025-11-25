#include <iostream>
#include <cmath>
#include <string>
using namespace std;


int main()
{
	cout << "Welcome to my calculator\n";
	cout << "Feel free to use +, -, *, /, ^, sqrt, and %\n";
	cout << "Please don't use a negative sqrt please.\n\n Thank you!\n\n";

	{double num1;
		double num2;
		string operation;
		
		cout << "enter your first number: ";
		cin >> num1;
		cout << "enter your second number";
		cin >> num2;
		cout << "What would you like to do to these numbers? +,-,*,%,sqrt ";
		cin >> operation;
		if (operation == "+")
		{
			cout << num1 + num2;
		}
		else if (operation == "-")
		{
			cout << num1 - num2;
		}
		else if (operation == "*")
		{
			cout << num1 * num2;
		}
		else if (operation == "/")
		{
			cout << num1 / num2;
		}
		else if (operation == "^")
		{
			cout << pow(num1, num2);
		}
		else if (operation == "sqrt")
		{
			cout << sqrt(num1);
		}
		else if (operation == "%")
		{
			cout << fmod(num1, num2);
		}
		else
		{
			cout << "invalid operation";
		}

		return 0;
	}




}