#include <stdio.h>

// Utility function to swap values at two indices in the array
void swap(int arr[], int i, int j)
{
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

// Function to perform selection sort on arr[]
void selectionSort(int arr[], int n)
{
	// run (n - 1) times
	for (int i = 0; i < n - 1; i++) 
	{
		// find the minimum element in the unsorted subarray[i..n-1] 
		// and swap it with arr[i]
		int min = i;
		
		for (int j = i + 1; j < n; j++)
		{
			// if arr[j] element is less, then it is the new minimum
			if (arr[j] < arr[min])
				min = j;	// update index of min element
		}

		// swap the minimum element in subarray[i..n-1] with arr[i]
		swap(arr, min, i);
	}
}

// Function to print n elements of the array arr
void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
}

// main function
int main(void)
{
	int arr[] = { 3, 5, 8, 4, 1, 9, -2 };
	int n = sizeof(arr) / sizeof(arr[0]);

	selectionSort(arr, n);
	printArray(arr, n);

	return 0;
}
