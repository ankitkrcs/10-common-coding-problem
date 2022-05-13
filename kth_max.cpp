// Simple C++ program to find k'th smallest element
#include <algorithm>
#include <iostream>
using namespace std;

// Function to return k'the largest element in a given array
int kth_max(int arr[], int n, int k)
{
	// Sort the given array
	sort(arr, arr + n);
    reverse(arr,arr+n);
	// Return k'th element in the sorted array
	return arr[k - 1];
}


int main()
{
	int arr[] = { 12, 3, 5, 7, 19 };
	int n = sizeof(arr) / sizeof(arr[0]), k = 2;
	cout << "K'th largest element is " << kth_max(arr, n, k);
	return 0;
}
