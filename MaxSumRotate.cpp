// C++ program to implement
// the above approach
#include<bits/stdc++.h>
using namespace std;

// Function to return Mth element of
// array after k right rotations
int getFirstElement(int a[], int N,
					int K, int M)
{
	// The array comes to original state
	// after N rotations
	K %= N;
	int index;

	// If K is greater or equal to M
	if (K >= M)

		// Mth element after k right
		// rotations is (N-K)+(M-1) th
		// element of the array
		index = (N - K) + (M - 1);

	// Otherwise
	else

		// (M - K - 1) th element
		// of the array
		index = (M - K - 1);

	int result = a[index];

	// Return the result
	return result;
}

// Driver Code
int main()
{
	int a[] = { 1, 2, 3, 4, 5 };

	int N = sizeof(a) / sizeof(a[0]);

	int K = 3, M = 2;

	cout << getFirstElement(a, N, K, M);

	return 0;
}
