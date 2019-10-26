#include<stdio.h> 
#define MAX 100



void main() 
{ 
	int arr[MAX]; 
	int arr_size;
	int i; 
	printf("enter array size\n");
	scanf("%d", &arr_size);
	
	printf("\n enter array \n");
	for(int i=0;i<arr_size;i++)
	{
	    scanf("%d", &arr[i]);
	}

	mergeSort(arr, 0, arr_size - 1); 

	printf("\nSorted array is \n"); 
	for (i=0; i < arr_size; i++) 
		printf("%d ", arr[i]); 
	printf("\n"); 
} 

void mergeSort(int arr[], int left, int right) 
{ 
    int i, j, k; 
	if (left < right) 
	{ 
	    
		int middle = left+(right-left)/2; 
		mergeSort(arr, left, middle); 
		mergeSort(arr, middle+1, right); 
	
		int n1 = middle - left + 1; 
	int n2 = right - middle; 
	int L[n1], R[n2]; 
	for (i = 0; i < n1; i++) 
		L[i] = arr[left + i]; 
	for (j = 0; j < n2; j++) 
		R[j] = arr[middle + 1+ j]; 
	i = 0;  
	j = 0;  
	k = left;  
	while (i < n1 && j < n2) 
	{ 
		if (L[i] <= R[j]) 
		{ 
			arr[k] = L[i]; 
			i++; 
		} 
		else
		{ 
			arr[k] = R[j]; 
			j++; 
		} 
		k++; 
	} 
	while (i < n1) 
	{ 
		arr[k] = L[i]; 
		i++; 
		k++; 
	} 
	while (j < n2) 
	{ 
		arr[k] = R[j]; 
		j++; 
		k++; 
	} 

	}
	
} 
