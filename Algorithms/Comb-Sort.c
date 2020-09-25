#include<stdio.h>
#include<stdlib.h>

// Program to perform comb sort on an integer with a gap factor of 1.3
// Time Complexity: Best case O(n), Worst case O(n^2)
// Performs better than bubble sort on average

void combsort(int* arr, int size) {
	int gap = (int)(size / 1.3);
	
	int sorted = 0;
	while (!sorted) {
		
		sorted = 1;

		for (int i = 0; i + gap < size; i++) {
			
			if (arr[i] > arr[i+gap])
			{
				int temp = arr[i];
				arr[i] = arr[i+gap];
				arr[i+gap] = temp;
				sorted = 0;
			}
				
		}
		gap = (int)(gap / 1.3);
	}
	
}
int main()
{
	int n;
	printf("Enter the size of the array:\n");
	scanf("%d", &n);

	int* arr = (int*)malloc(n * sizeof(int));

	printf("\nEnter the elements in the array:\n");
	for (int i = 0; i < n; i++)
		scanf("%d", arr + i);

	combsort(arr, n);

	printf("Sorted array: \n");
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);

	printf("\n");
	return 0;
}
