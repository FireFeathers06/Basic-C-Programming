
#include <math.h> 
#include <stdio.h> 



void insertionSort(int arr[], int n) 
{ 
	int i, key, j; 
	for (i = 1; i < n; i++) { 
		key = arr[i]; 
		j = i - 1; 
		while (j >= 0 && arr[j] > key) { 
			arr[j + 1] = arr[j]; 
			j = j - 1; 
		} 
		arr[j + 1] = key; 
	} 
} 

int main() 
{ 
	int arr[] = { 3,7,2,1,5 }; //input 
	int n = 5; //number of values 

	insertionSort(arr, n); 
	for (int i = 0; i < n; i++) 
		printf("%d ", arr[i]); 

	return 0; 
} 
