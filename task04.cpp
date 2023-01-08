#include<iostream>

using namespace std;

int multiplication(int number);

main()
{
	int number;
	int finalValue;
	cout << "Enter a Number = ";
	cin >> number;
	finalValue = multiplication(number);
	cout << "Answer = " << finalValue;

}

int multiplication(int number)
{
	int result;
	result = 5 * number;
	return result;
}
