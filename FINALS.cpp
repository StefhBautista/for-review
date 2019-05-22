#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
	float a, b;
	char c, x;
	
	cout << "Enter the number and operator:";
	cout << " " << endl;
	cin >> a >> c >> b;
	
	switch (c)
	{
		case '+':
			cout << "Answer: " << setprecision(2) << fixed << a + b;
			break;

		case '-':
			cout << "Answer: " << setprecision(2) << fixed << a - b;
			break;

		case '*':
		case 'x':
			cout << "Answer: " << setprecision(2) << fixed << a * b;
			break;

		case '/':
			cout << "Answer: " << setprecision(2) << fixed << a / b; 
	}

	cout << " " << endl;
	cout << " " << endl;
	cout << "Do another (Y/N)?: ";
	cin >> x;


	switch (x)
	{
		case 'Y':
		case 'y':
			
	
		case 'N':
		case 'n':
			cout << " " << endl;
			cout << "Press any key to exit.";
			break;
			
	}



_getch();
return 0;
}