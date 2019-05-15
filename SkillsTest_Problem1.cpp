#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int a,b,c;
	cout << "Enter first number: ";
	cin >> a;
	cout << "Enter second number: "; 
	cin >> b;
	cout << "Enter third number: ";
	cin >> c;
	
	if (a>b && a>c)
		cout << "The LARGEST of the three numbers is " << a << "." << endl;
 
	else if (b>a && b>c)
		cout << "The LARGEST of the three numbers is " << b << "." << endl;

	else if (c>b && c>b)
		cout << "The LARGEST of the three numbers is " << c << "." << endl;

	else
		cout << "ERROR FINDING THE LARGEST NUMBER" << endl;

_getch();
return 0;
}