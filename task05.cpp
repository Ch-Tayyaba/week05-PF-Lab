#include<iostream>
#include<windows.h>

using namespace std;

string alphabetCase( char );

main()
{
	system("cls");
	char alphabet;
	string alphabetOutput;
	while(1)
	{
	cout << "Enter a character : "; 
	cin >> alphabet;
	alphabetOutput = alphabetCase(alphabet);
	cout << alphabetOutput << endl;	
	}

}


string alphabetCase( char alphabet )
{
	if(alphabet == 'A')
	{
		return "YouHaveEnteredCapital-A";
	}
	if(alphabet == 'B')
	{
		return "YouHaveEnteredCapital-B";
	} 
	if(alphabet == 'C')
	{
		return "YouHaveEnteredCapital-C";
	} 
	if(alphabet == 'D')
	{
		return "YouHaveEnteredCapital-D";
	} 
	if(alphabet == 'E')
	{
		return "YouHaveEnteredCapital-E";
	} 
	if(alphabet == 'F')
	{
		return "YouHaveEnteredCapital-F";
	} 
	if(alphabet == 'G')
	{
		return "YouHaveEnteredCapital-G";
	} 
	if(alphabet == 'H')
	{
		return "YouHaveEnteredCapital-H";
	} 
	if(alphabet == 'I')
	{
		return "YouHaveEnteredCapital-I";
	} 
	if(alphabet == 'J')
	{
		return "YouHaveEnteredCapital-J";
	} 
	if(alphabet == 'K')
	{
		return "YouHaveEnteredCapital-K";
	} 
	if(alphabet == 'L')
	{
		return "YouHaveEnteredCapital-L";
	} 
	if(alphabet == 'M')
	{
		return "YouHaveEnteredCapital-M";
	} 
	if(alphabet == 'N')
	{
		return "YouHaveEnteredCapital-N";
	} 
	if(alphabet == 'O')
	{
		return "YouHaveEnteredCapital-O";
	} 
	if(alphabet == 'P')
	{
		return "YouHaveEnteredCapital-P";
	} 
	if(alphabet == 'Q')
	{
		return "YouHaveEnteredCapital-Q";
	} 
	if(alphabet == 'R')
	{
		return "YouHaveEnteredCapital-R";
	} 
	if(alphabet == 'S')
	{
		return "YouHaveEnteredCapital-S";
	} 
	if(alphabet == 'T')
	{
		return "YouHaveEnteredCapital-T";
	} 
	if(alphabet == 'U')
	{
		return "YouHaveEnteredCapital-U";
	} 
	if(alphabet == 'V')
	{
		return "YouHaveEnteredCapital-V";
	} 
	if(alphabet == 'W')
	{
		return "YouHaveEnteredCapital-W";
	} 
	if(alphabet == 'X')
	{
		return "YouHaveEnteredCapital-X";
	} 
	if(alphabet == 'Y')
	{
		return "YouHaveEnteredCapital-Y";
	} 
	if(alphabet == 'Z')
	{
		return "YouHaveEnteredCapital-Z";
	} 
	if(alphabet == 'a')
	{
		return "YouHaveEnteredSmall-A";
	}
 	if(alphabet == 'b')
	{
		return "YouHaveEnteredSmall-B";
	}
 	if(alphabet == 'c')
	{
		return "YouHaveEnteredSmall-C";
	}
 	if(alphabet == 'd')
	{
		return "YouHaveEnteredSmall-D";
	}
 	if(alphabet == 'e')
	{
		return "YouHaveEnteredSmall-E";
	}
 	if(alphabet == 'f')
	{
		return "YouHaveEnteredSmall-F";
	}
 	if(alphabet == 'g')
	{
		return "YouHaveEnteredSmall-G";
	}
 	if(alphabet == 'h')
	{
		return "YouHaveEnteredSmall-H";
	}
 	if(alphabet == 'i')
	{
		return "YouHaveEnteredSmall-I";
	}
 	if(alphabet == 'j')
	{
		return "YouHaveEnteredSmall-J";
	}
 	if(alphabet == 'k')
	{
		return "YouHaveEnteredSmall-K";
	}
 	if(alphabet == 'l')
	{
		return "YouHaveEnteredSmall-L";
	}
 	if(alphabet == 'm')
	{
		return "YouHaveEnteredSmall-M";
	}
 	if(alphabet == 'n')
	{
		return "YouHaveEnteredSmall-N";
	}
 	if(alphabet == 'o')
	{
		return "YouHaveEnteredSmall-O";
	}
 	if(alphabet == 'p')
	{
		return "YouHaveEnteredSmall-P";
	} 
	if(alphabet == 'q')
	{
		return "YouHaveEnteredSmall-Q";
	}
 	if(alphabet == 'r')
	{
		return "YouHaveEnteredSmall-R";
	}
 	if(alphabet == 's')
	{
		return "YouHaveEnteredSmall-S";
	}
 	if(alphabet == 't')
	{
		return "YouHaveEnteredSmall-T";
	}
 	if(alphabet == 'u')
	{
		return "YouHaveEnteredSmall-U";
	}
 	if(alphabet == 'v')
	{
		return "YouHaveEnteredSmall-V";
	}
 	if(alphabet == 'w')
	{
		return "YouHaveEnteredSmall-W";
	}
 	if(alphabet == 'x')
	{
		return "YouHaveEnteredSmall-X";
	}
 	if(alphabet == 'y')
	{
		return "YouHaveEnteredSmall-Y";
	} 
	if(alphabet == 'z')
	{
		return "YouHaveEnteredSmall-Z";
	} 
	return 0; 

}
