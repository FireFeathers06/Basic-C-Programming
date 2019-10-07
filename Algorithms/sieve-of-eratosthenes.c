/*
Author : MiKueen
Algorithm : Sieve of Eratosthenes

Given a number n, print all primes smaller than or equal to n.

Example:
Input : n =10
Output : 2 3 5 7 

Input : n = 20 
Output: 2 3 5 7 11 13 17 19

The Sieve of Eratosthenes is one of the most efficient ways to find all primes smaller than n when n is smaller than 10 million or so (Ref Wiki).

Following is the algorithm to find all the prime numbers less than or equal to a given integer n by Eratosthenes’ method:

1) Create a list of consecutive integers from 2 to n: (2, 3, 4, …, n).
2) Initially, let p equal 2, the first prime number.
3) Starting from p^2, count up in increments of p and mark each of these numbers greater than or equal to p^2 itself in the list. These numbers will be p(p+1), p(p+2), p(p+3), etc..
4) Find the first number greater than p in the list that is not marked. If there was no such number, stop. Otherwise, let p now equal this number (which is the next prime), and repeat from step 3.

*/

#include<stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int primes[n+1];

	for(int i = 1; i <= n; i++) {
		primes[i] = i;
	}

	for(int i = 2; i*i <= n; i++) {
		if(primes[i] != 0) {
			for(int j = 2*i; j <= n ; j += i)
				primes[j] = 0;
		}
	}

	for(int i = 2; i <= n; i++) {
		if(primes[i] != 0) {
			printf("%d ", i);
		}
	}

	return 0;
}