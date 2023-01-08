#include<iostream>
#include<windows.h>

using namespace std;

string oddishOrEvenish(int number);

main()
{
	system("cls");
	int number;
	string numberType;
	while(true)
	{
		cout << "Enter five digit number : ";
		cin >> number;
		numberType = oddishOrEvenish(number);  
		cout << "Number is " << numberType << endl;
	}

}

string oddishOrEvenish(int num)
{
	int rem01 , rem02 , rem03 , rem04;
	int num01 , num02 , num03;
	int quotient01 , quotient02 , quotient03 , quotient04;
	int sum;
	rem01 = num % 10 ;
	quotient01 = num / 10 ;
	rem02 = num01 % 10 ;
	quotient02 = num01 / 10 ;
	rem03 = num02 % 10 ;
	quotient03 = num02 / 10 ;
	rem04 = num03 % 10 ;
	quotient04 = num03 / 10 ;
	sum = rem01 + rem02 + rem03 + rem04 + quotient04;
	if(sum % 2 == 1)
	{
		return "Oddish";
	}
	if(sum % 2 == 0)
	{
		return "Evenish";
	} 
	return 0; 
}