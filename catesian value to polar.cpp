#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <math.h>
using namespace std;

int main ()
{
	float x,y;
	float r,theta;
	
	cout << "Enter value of x: ";
	cin >> x;
	cout << "Enter value of y: ";
	cin >> y;
	
	r = sqrt ((x*x)+(y*y));
	theta = atan (y/x);
	
	cout << "\nValue of R: " << r;
	cout << "\nValue of THETA: " <<theta;
	
	getch();
}
