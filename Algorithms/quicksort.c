#include <stdio.h>

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

int arrPart(int *arr, int low, int high)
{
  // Utility function for partitioning arrays
  // To be used with quicksort divide and conquer.
  int pivot = arr[high];
  int sml = low - 1;

  for (int i = low; i <= high - 1; i++)
  {
    if (arr[i] <= pivot)
    {
      sml = sml + 1;
      swap(&arr[sml], &arr[i]);
    }
  }
  swap(&arr[sml + 1], &arr[high]);
  return (sml + 1);
}

void quicksort(int *arr, int low, int high)
{
  if (low < high)
  {
    int part = arrPart(arr, low, high);
    quicksort(arr, low, part - 1);  // sort from low to part
    quicksort(arr, part + 1, high); // sort from part to high
  }
}

void printArray(int arr[], int n)
{
  printf("[");
  for (int i = 0; i < n; i++)
  {
    printf("%d, ", arr[i]);
  }
  printf("]\n");
}

int main()
{
  int arr1[] = {100, 55, 4, 98, 10, 18, 90, 95, 43, 11, 47, 67, 89, 42, 49, 79};
  int n = sizeof(arr1) / sizeof(arr1[0]);

  printf("Original array: ");
  printArray(arr1, n);
  quicksort(arr1, 0, n - 1);
  printf("Sorted array:   ");
  printArray(arr1, n);

  printf("\n");

  return 0;
}