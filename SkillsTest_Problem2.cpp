#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int a,x;
	cout << "Enter a number: ";
	cin >> x;
	cout << "Multiplication Table of " << x << ":" << endl;

	for (a=1; a<=10; a++)
	{
		cout << a << " x " << x << " = " << (a*x) << endl;
	}

_getch();
return 0;
}