#include <stdio.h>
#include <stdlib.h>

int size, minCost = 100, **mat, *sol;

/*int fact(int n){
    int fact = 0;
    for(int i=2;i<=n;i++){
        fact *= i;
    }
    return fact;
}*/

void swap(int *x, int *y){
    int temp; 
    temp = *x; 
    *x = *y; 
    *y = temp; 
}

void permute(int *a, int l, int r){
    int i, cost = 0; 
    if (l == r){ 
        for(int j=0;j<size;j++){
            printf("%d ",a[j]+1);
            cost += mat[j][a[j]];
        }
        printf("cost: %d\n", cost);
        if(cost < minCost){
            minCost = cost;
            for(int k=0; k<size; k++){
                sol[k] = a[k];
            }
        }
    }
    else{ 
        for (i = l; i <= r; i++){ 
            swap((a+l), (a+i)); 
            permute(a, l+1, r); 
            swap((a+l), (a+i));
        } 
    } 
}


int main(){

    int n, *Cost;

    printf("Enter number of jobs/people: ");   
    scanf("%d",&n);
    //n = 4; 
    size = n;
    printf("\nEnter the person/job matrix:\n");

    mat = (int**)calloc(n, sizeof(int*));
    for(int i=0;i<n;i++){
        mat[i] = (int*)calloc(n ,sizeof(int));
        for(int j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
        }
    }

    Cost = (int*)malloc(n*sizeof(int));
    sol = (int*)malloc(n*sizeof(int));
    for(int i=0; i<n; i++){
        Cost[i] = i;
    }

    permute(Cost, 0, n-1);

    printf("Solution is: ");
    for(int i=0; i<size; i++){
        printf("%d ",sol[i]+1);
    }
    printf("with cost of %d\n", minCost);
    printf("\n");
    
    return 0;
}