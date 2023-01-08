#include<iostream>
#include<cmath>
#include<windows.h>

using namespace std;

main()
{
	system("cls");
	int num01;
	int num02;
	int result01;
	cout<< "FOR GREATER VALUE OF INTEGER TYPE:- " << endl << endl;
	cout<< "Enter first number : ";
	cin>> num01;
	cout<< "Enter second number : ";
	cin>> num02;
	result01 = max(num01 , num02);
	cout<< result01 <<" is greater.";
	cout << endl << endl << endl ;


	float num03;
	float num04;
	float result02;
	cout<< "FOR GREATER VALUE OF FLOATING POINT :- " <<endl << endl;
	cout<< "Enter first floating point number : ";
	cin>> num03;
	cout<< "Enter second floating point number : ";
	cin>> num04;
	result02 = max(num03 , num04);
	cout<< result02 <<" is greater.";
	cout << endl << endl << endl ;


	int num05;
	int num06;
	int result03;
	cout<< "FOR MINIMUM VALUE OF INTEGER TYPE:- " << endl << endl;
	cout<< "Enter first number : ";
	cin>> num05;
	cout<< "Enter second number : ";
	cin>> num06;
	result03 = min(num05 , num06);
	cout<< result03 <<" is minimum.";
	cout << endl << endl << endl ;

	
	float num07;
	float num08;
	float result04;
	cout<< "FOR GREATER VALUE OF FLOATING POINT :- " << endl << endl;
	cout<< "Enter first floating point number : ";
	cin>> num07;
	cout<< "Enter second floating point number : ";
	cin>> num08;
	result04 = min(num07 , num08);
	cout<< result04 <<" is minimum.";
	cout << endl << endl << endl ;


	int num09;
	int num10;
	int result05;
	cout<< "FOR POWER OF NUMBER :- " << endl << endl;
	cout<< "Enter first number : ";
	cin>> num09;
	cout<< "Enter second number : ";
	cin>> num10;
	result05 = pow(num09 , num10);
	cout<< result05 <<" is answer.";
	cout << endl << endl << endl ;


	float num11;
	float result06;
	cout<< "FOR SQUARE-ROOT OF NUMBER :- " << endl << endl;
	cout<< "Enter first floating point number : ";
	cin >> num11;
	result06 = sqrt(num11);
	cout << result06 <<" is answer.";
	cout << endl << endl << endl ;


	float num12;
	float result07;
	float result08;
	cout<< "TO ROUND OFF TNE NUMBERS:- " << endl << endl;
	cout<< "Enter first number : ";
	cin>> num12;
	result07 = ceil(num12);
	cout<< "For upper case : " << result07 << endl;
	result08 = floor(num12);
	cout<< "For lower case : " << result08;
	cout << endl << endl << endl ;




}

