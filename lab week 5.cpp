// ConsoleApplication7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

int main()
{
	int z, x;
	double y = 0.0;

	cout << "please enter positive value of x";
	cin >> x;
	cout << "please enter positive value of z";
	cin >> z;

	if (x>0 && z>0) 
	{
		y = x / pow(z, 2) + 2;
		cout << "y = x/ pow(z,2) is " << y << endl << endl;
	}

	else
	{
		cout << "please enter the positive value" << endl;
	}

	return 0;
}


