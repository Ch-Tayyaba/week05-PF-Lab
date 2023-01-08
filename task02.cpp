#include<iostream>
#include<cmath>
#include<windows.h>

using namespace std;
float findX01(float a , float b , float c);
float findX02(float a , float b , float c);

main()
{
while(true)
{
	system("cls");
	float a;
	float b;
	float c;
	float value01;
	float value02;
	cout << endl << endl;
	cout << "Enter Value of a : "; 
	cin >> a;
	cout << "Enter Value of b : "; 
	cin >> b;
	cout << "Enter Value of c : "; 
	cin >> c;

	value01 = findX01(a , b , c);
	if(value01 != 0)
	{
	cout << "x = " << value01;
	}
	if(value01 == 0)
	{
	cout << "Your Discriminant is less than zero . ";
	
	}

	value02 = findX01(a , b , c);
	if(value02 != 0)
	{
	cout << "  or x = " << value02;	
	}
}
}

float findX01(float a , float b , float c)
{
	float squareOfB = pow(b,2); 
	float innerValue = squareOfB - (4*a*c);
	if(innerValue > 0)
	{
	float squarRoot = sqrt(innerValue);
	float outerValue = -b + squarRoot;
	float finalValue = outerValue / (2*a); 
	return finalValue;
	}
	return 0;
}

float findX02(float a , float b , float c)
{
	float squareOfB = pow(b,2); 
	float innerValue = squareOfB - (4*a*c);
	if(innerValue > 0)
	{
	float squarRoot = sqrt(innerValue);
	float outerValue = -b - squarRoot;
	float finalValue = outerValue / (2*a); 
	return finalValue;
	}
	return 0;
}

