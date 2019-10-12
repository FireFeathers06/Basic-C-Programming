#include <stdio.h>
#include <sys/time.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

//function for finding out if a number is prime
bool chkprime(int n){
//Here n is the integer to be checked. We are using the simplest yet least efficient way to compute prime numbers.
//It divides the number by all numbers from 1 upto n-1
//If any one of the division has as remainder "0", it means that the number is not prime
//in this case, the function returns false, else it returns true

    bool prime = true;

    for (int i = 2 ; i < n ; i++){
        if ((n%i) == 0){
            prime = false;
            break;
        }
    }
    return prime;
}

void main(){

    struct timeval t1,t2,t3,t4; //refer to manual : man 2 gettimeofday
    srand(time(0));////if this is not included, we'll get same values at each run

    int arr[100][100];
    bool prime = true;
    
    gettimeofday(&t1,NULL);//Time at the start of generation of random numbers
    for(int i = 0 ; i < 100 ; i++){
        for(int j = 0 ; j < 100 ; j++){
            arr[i][j] = rand() % 100 + 1;
        }
    }
    gettimeofday(&t2,NULL);//getting time at the end of generation of random numbers

    gettimeofday(&t3, NULL);//Time before start of the finding prime numbers process
    for(int i = 0 ; i < 100 ; i++){
        for(int j = 0 ; j < 100 ; j++){
            prime = chkprime(arr[i][j]);
            if (prime == true) {
                printf("%d is a prime number\n",arr[i][j]);
            }
        }
    }
    gettimeofday(&t4,NULL);//time at the end of the finding prime numbers process

    double p1,p2;
    p1 = t2.tv_usec - t1.tv_usec;//calculating time for population of array with random nnumbers
    printf("The time taken for populating a 100x100 array is : %10.2fus\n", p1);

    p2 = t4.tv_usec - t3.tv_usec;//calculating time to  find the prime numbers
    printf("The time taken to search for prime numbers in a 100x100 array is : %10.2fus\n", p2);




}

