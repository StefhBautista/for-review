#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	int n;
	cout << "Enter the starting number: ";
	cin >> n;
	while (n>0)
	{
		cout << n << ", ";
		n--;
	}
	cout << "FIRE!\n";

_getch();
return 0;

}