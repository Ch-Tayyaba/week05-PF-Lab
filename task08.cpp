#include<iostream>
#include<windows.h>

using namespace std;

string output01(int value01);
string output02(int value02);

main()
{
	system("cls");
 	int input , number01 , number02;
 	string no01 , no02;
	while(true)
	{
		cout << endl;
 		cout << "Enter Your Number : ";
		cin >> input;
 		number01 = input / 10; 
  		number02 = input % 10;
  		if(input >= 10)
 		{
  			no01 = output01(number01);
 		}
  		no02 = output02(number02);
  		cout << no01 << " " << no02 << endl;
	}
}


string output01(int value01)
{
	if(value01 == 1)
 	{
 		return "One";
 	}
 	if(value01 == 2)
 	{
  		return "Twenty";
 	}
  	if(value01 == 3)
 	{
 		return "Thirty";
 	}
  	if(value01 == 4)
 	{
 		return "Fourty";
 	}
  	if(value01 == 5)
 	{
  		return "Fifty";
 	}
  	if(value01 == 6)
 	{
  		return "Sixty";
 	}
  	if(value01 == 7)
 	{
  		return "Seventy";
 	}	
 	if(value01 == 8)
 	{
 		return "Eighty";
 	}
  	if(value01 == 9)
 	{
  		return "Ninety";
 	}
 	return 0; 
}


string output02(int value02)
{
	if(value02 == 0)
 	{
 		return " ";
 	}
  	if(value02 == 1)
 	{
  		return "One";
 	}
  	if(value02 == 2)
 	{
  		return "Two";
 	}
  	if(value02 == 3)
 	{
  		return "Three";
 	} 
  	if(value02 == 4)
 	{
  		return "Four";
 	}
  	if(value02 == 5)
 	{
  		return "Five";
 	}
  	if(value02 == 6)
 	{
  		return "Six";
 	}
  	if(value02 == 7)
 	{
  		return "Seven";
 	}
  	if(value02 == 8)
 	{
  		return "Eight";
 	}
  	if(value02 == 9)
 	{
  		return "Nine";
 	}	
	return 0;
}
 