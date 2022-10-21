/*

Input: arr[] = 1 9 5 3 2 6 7 11
Output: 2 6 5 3 1 9 7 11

Input: arr[] = 1 3 2 4 7 6 9 10
Output:  2 4 6 10 7 1 9 3

*/

// C++ Implementation of the above approach
#include <iostream>
using namespace std;
void arrayEvenAndOdd(int arr[], int n)
{
	int a[n], index = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0)
		{
			a[index] = arr[i];
			index++;
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 != 0)
		{
			a[index] = arr[i];
			index++;
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

// Driver code
int main()
{
	int arr[] = { 1, 3, 2, 4, 7, 6, 9, 10 };
	int n = sizeof(arr) / sizeof(int);

	// Function call
	arrayEvenAndOdd(arr, n);
	return 0;
}
