#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int arr[100], temp, count, i, j;

	cout << "Enter number of elements in array: ";
    cin >> count;

    cout << "Enter " << count << " numbers: "; 

	for (i = 0; i < count; i++)
	{
		cin >> arr[i];
	}

	cout << " " << endl;
	cout << "Sorting array using selection sort...";
	cout << " " << endl;
	cout << " " << endl;

	for (i = 0; i < count; i++)
	{
		for (j = i + 1; j < count; j++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
	cout << "Sorted Array:";

	for (i = 0; i < count; i++)
	{
		cout << arr[i] << " ";
	}
	

_getch();
return 0;
}
















