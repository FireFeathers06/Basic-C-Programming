//This program generates random numbers and counts the number of prime numbers present in the selection

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


void populateArray(int row, int col, int arr [row][col]){//fill array with random numbers

	srand(time(NULL));//if this is not included, we'll get same values at each run
	for (int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			arr[i][j] = (rand() % 100) + 1;
		}
	}

}

int isPrime(int n){// Function to check if number is prime
	int prime = 1, num;
	num = sqrt(n);
	for (int i = 2; i < num; i++){
		if(num%i == 0){
			prime = 0;
		}
	}
	return prime;
}

int main(void) {
	int row, col;
	printf("Input row: ");
	scanf("%d", &row);
	printf("Input column: ");
	scanf("%d", &col);

	int grid [row][col];
	populateArray(row, col, grid);//Initialising array



	for (int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			printf("%d\t", grid[i][j]);
		}
		printf("\n");
	}

	int count= 0;

	for (int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			if (isPrime(grid[i][j]) == 1){
				count++;
			}
		}
	}

	printf("Count of prime numbers: %d", count);

  return 0;
}
