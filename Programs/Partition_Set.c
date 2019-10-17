//This program partitions an integer array into two disjoint subsets
//such that the sum of numbers in both of them is the same...

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

	int size, k, l;
	int arr[100], s1[100], s2[100];
	int sum = 0, sum1 = 0, sum2 = 0;
	double num_set;

	printf("Enter the size of the array:\t");
	scanf("%d", &size);

	printf("Enter the elements of the array:\t");

	for(int i = 0; i<size; i++){
		scanf("%d", &arr[i]);
		sum += arr[i];
	}

	if(sum%2 == 1 || size == 0){
		printf("Partition not possible...\n");
		return 0;
	}

	num_set = pow(2,size);

	for(int i=1; i<num_set; i++){

		sum1 = sum2 = 0;
		k = l = -1;

		for(int j=0; j<size; j++){
			if(i & (1 << j)){
				sum1 += arr[j];
				s1[++k] = arr[j];
			}
			else{
				sum2 += arr[j]; 
				s2[++l] = arr[j];
			}
		}

		if(sum1 == sum2 && sum1 == sum/2){
			printf("Partition is possible...\n");

			printf("Subset 1 : ");
			for(int m = 0; m <= k; m++){
				printf("%d ", s1[m]);
			}

			printf("\nSubset 2 : ");
			for(int m = 0; m <= l; m++){
				printf("%d ", s2[m]);
			}
			printf("\n");
			return 0;
		}
	}
	return 0;
}