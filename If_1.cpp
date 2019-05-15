#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int a;
	cout << "Enter number of units: "; 
	cin >> a;
	cout << "Enter second number: ";
	cin >> b;
	if (a < b)
		cout << "First number is less than second. \n";
	else if (a > b)
		cout << "Second number is less than first. \n";
	else 
		cout << "Both numbers are equal. \n";
_getch();
return 0;
}
