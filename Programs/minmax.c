#include <stdio.h>

void findMinMax(int A[], int n){
    int high=0;
    int low=9999;
    for (int i=0; i<n; i++){
        if (A[i]<low){
            low=A[i];
        }
        if (A[i]>high){
            high=A[i];
        }
    }
    printf("highest element in the array is: %d \n", high);
    printf("lowest element in the array is %d \n", low);
}

void main(){
    int array[5];
    printf("populate array: \n");
    for (int i=0; i<5; i++){
        scanf("%d", &array[i]);
    }

    findMinMax(array, 5);
}
