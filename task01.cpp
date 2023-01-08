#include<iostream>
#include<cmath>

using namespace std;

float calculateHeight(float base , float angle);

main()
{
	while(true)
	{
	float base;
	float angle;
	float height; 
	cout << "Enter the base in feet : ";
	cin >> base;
	cout << "Enter angle in degrees : ";
	cin >> angle; 

	height = calculateHeight(base , angle);
	cout << "Height : " << height << endl;
	}



}

float calculateHeight(float base , float angle)
{

	float radians = angle / 57.2958;
	float tanAngle = tan(radians);
	float height = base * tanAngle;
	return height;	

}