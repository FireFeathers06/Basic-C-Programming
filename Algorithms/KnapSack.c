#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int knapsack(unsigned int* w, unsigned int *val, int size, int capacity, int *maxVal, int *finalWeight);

int main(){

	unsigned int *w, *val, size, capacity, knaps, index, value, weight;

	printf("Enter the number of items: ");
	scanf("%d",&size);
	w = (unsigned int*)calloc(size, sizeof(unsigned int));
	val = (unsigned int*)calloc(size, sizeof(unsigned int));

	printf("Enter the weights of the items: ");
	for(int i=0;i<size;i++){
		scanf("%u",&w[i]);
	}

	printf("Enter the values of the itmes: ");
	for(int i=0;i<size;i++){
		scanf("%u",&val[i]);
	}

	printf("Enter capacity of the knapsack: ");
	scanf("%u",&capacity);

	knaps = knapsack(w, val, size, capacity, &value, &weight);

	printf("The knapsack will contain the following items:\n");

	index = 0;

	while(knaps){
		if(knaps & 0x1){
			printf("item %u\t value: %d\t weight: %u\n", (index+1), val[index], w[index]);
		}
		index++;
		knaps = knaps >> 1;
	}

	printf("Total Value: %u\tTotal Weight: %u\n", value, weight);

	return 0;
}

int knapsack(unsigned int* w, unsigned int *val, int size, int capacity, int *maxVal, int *finalWeight){

	int maxSequence = 0, opCount = 0;
	*maxVal = *finalWeight = 0;
	unsigned int totalWeight, totalValue, temp, index;

	for(int i=1; i<pow(2,size); i++){
		opCount++;
		temp = i;
		totalValue = totalWeight = 0;
		index = 0;
		while(temp){
			if(temp & 0x1){
				totalWeight = totalWeight + w[index];
				totalValue = totalValue + val[index];
			}
			index++;
			temp = temp >> 1;
		}
		if(totalWeight <= capacity && totalValue > *maxVal){
			*maxVal = totalValue;
			maxSequence = i;
			*finalWeight = totalWeight;
		}
	}
	printf("\nOperation Count is %d\n",opCount);
	return maxSequence;
}