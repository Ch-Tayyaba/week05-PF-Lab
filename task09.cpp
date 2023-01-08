#include<iostream>
#include<windows.h>
using namespace std;

main()
{
	int volume,P1,P2;
	float hours;
	system("cls"); 
	while(1)
	{
		cout << endl;
		cout << "Enter the volume of pool in liter : ";
		cin >> volume;
		cout << "Enter the flow rate of the first pipe per hour : ";
		cin >> P1;
		cout << "Enter the flow rate of the second pipe per hour : ";
		cin >>P2;
		cout << "Enter the hours that the worker is absent : ";
		cin >>hours;
	
 		int full = (((P1*hours) + (P2*hours)) * 100) / volume;
 		int pipe1 = (P1*100) / (P1+P2);
 		int pipe2 = 100 - pipe1;
		if(full < volume)
		{
			cout<< "The pool is "<< full << "% full." << " Pipe01 = "<< pipe1 << "%. Pipe02 = "<< pipe2 << "%." << endl;
		}
		if(full > volume)
		{
			int overflow = ((((P1*hours) + (P2*hours)) * 100) / volume) - volume;
 			cout << "For " << hours << " hours the pool overflows with " << overflow << " liters." << endl;  
		}
	}
}
