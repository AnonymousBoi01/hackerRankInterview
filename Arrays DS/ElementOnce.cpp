// C++ program to find the array element
// that appears only once

#include <iostream>
using namespace std;

// Function to find the
int findSingle(int A[], int ar_size)
{

	// Iterate over every element
	for (int i = 0; i < ar_size; i++) {

		// Initialize count to 0
		int count = 0;

		for (int j = 0; j < ar_size; j++) {

			// Count the frequency
			// of the element
			if (A[i] == A[j]) {
				count++;
			}
		}

		// if the frequency of the
		// element is one
		if (count == 1) {
			return A[i];
		}
	}

	// if no element exist at most once
	return -1;
}

// Driver code
int main()
{
	int ar[] = { 2, 3, 5, 4, 5, 3, 4 };
	int n = sizeof(ar) / sizeof(ar[0]);

	// Function call
	cout << "Element occurring once is "
		<< findSingle(ar, n);

	return 0;
}

// This code is contributed by Arpit Jain
