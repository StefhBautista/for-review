#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int a;
	cout << "Enter number of units: "; 
	cin >> a;
	if (a < 36)
		cout << "You are a freshman. \n";
	else if (36 <= a && a <= 63)
		cout << "You are a sophomore. \n";
	else if (64 <= a && a <= 95)
		cout << "You are a junior. \n";
	else if (96 <= a && a <= 120)
		cout << "You are a senior. \n";
	else 
		cout << "Invalid Input. Try again. \n";
_getch();
return 0;
}
