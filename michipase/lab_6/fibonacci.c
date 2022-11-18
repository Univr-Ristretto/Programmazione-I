#include <stdio.h>

#define LEN 15

int main() {
	int arr[LEN];
	arr[0] = 1;
	arr[1] = 1;
	for(int i = 2; i < LEN; i++) {
		arr[i] = arr[i-2] + arr[i-1];
	}
	
	for(int i = 0; i< LEN; i++)
		printf("%i ",arr[i]);
}

