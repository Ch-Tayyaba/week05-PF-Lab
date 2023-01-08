#include<iostream>

using namespace std;

int add(int , int);
float divide(float , float);
int maximum(int , int);

main()
{
	int num01;
	int num02;
	float result;
	cout<< "Enter first number : ";
	cin>> num01;
	cout<< "Enter second number : ";
	cin>> num02;
	result = add(num01,num02);
	cout<< "Sum : " << result <<endl;

	result = divide(num01 , num02);
	cout << "Division : " << result << endl;

	result = maximum(num01,num02);
	cout << "Greater Number : " << result << endl;
	
}


int add(int num1 , int num2)
{
	int sum = num1 + num2;
	return sum;
}

float divide(float num1 , float num2)
{
	float division = num1 / num2;
	return division;
}

int maximum(int num1 , int num2)
{
	if(num1>num2)
	{
	return num1;
	}
	if(num1<num2)
	{
	return num2;
	}
	return 0;

}