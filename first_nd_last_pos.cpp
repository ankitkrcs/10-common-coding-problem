// C++ program to find first and last occurrence of
// an elements in given sorted array
#include <bits/stdc++.h>
using namespace std;

// Function for finding first and last occurrence
// of an elements
void findFirstAndLast(int arr[], int n, int target)
{
	int first = -1, last = -1;
	for (int i = 0; i < n; i++) {
		if (target != arr[i])
			continue;
		if (first == -1)
			first = i;
		last = i;
	}
	if (first != -1)
		cout << "First Occurrence = " << first
			<< "\nLast Occurrence = " << last;
	else
		cout << "Not Found";
}


int main()
{
	int arr[] = { 1, 2, 2, 2, 2, 3, 4, 7, 8, 8 };
	int n = sizeof(arr) / sizeof(int);
	int target = 8;
	findFirstAndLast(arr, n, target);
	return 0;
}
