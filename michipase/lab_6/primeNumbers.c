#include <stdio.h>

#define LEN 30

void main() {
	int array[LEN];
	int index = 0; // index to push elements to
	 
	for(int n = 2; n < 40; n++) { // for each number between 0 to 50
		int prime = 0; // set a flag
		for(int i = 2; i<n; i++) { // for each number smaller than 50
			if(n % i == 0) { // if i is a valid divisor of n
				prime = 1; // change the flag
			}
		}
		
		if(prime == 0) { // if flag has not been changed, n is not prime aka there is at least one divisor
			array[index] = n;
			index ++;
		}
	}

	// print primes	
	printf("primes: ");
	for(int j = 0; j < LEN; j++) {
		printf("%d, ", array[j]);
	}
}
