#include<iostream>
#include<windows.h>

using namespace std;

main()
{
	system("cls");
	int hours,mins;
	int mins01,hours01;
	while (true)
  	{
		cout << endl;
 		cout << "ENTER HOURS : ";
 		cin >> hours;
 		cout << "ENTER MINUTES : ";
 		cin >> mins;
		if((mins+15) <= 59)
 		{
  			mins01 = mins + 15;
  			hours01 = hours;
  			cout << "TIME AFTER 15 MINS IS : " << hours01 << ":" << mins01 << endl;
 		}
 		if((mins+15) >= 60)
 		{
  			mins01 = (mins+15) - 60;
			hours01 = hours + 1;
			if((hours+1) == 24)
  			{
  				hours01 = 00;
  			}
  			cout << "TIME AFTER 15 MINS IS : " << hours01 << ":" << mins01 << endl; 
		} 
	}
} 


  
 