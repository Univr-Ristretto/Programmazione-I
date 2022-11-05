#include <stdio.h>

void main() {
	// array with -1 as stop codon
	// int array[] = {1, 2, 3, 4, 5, 6, 7, -1, 6}; // crescente
	int array[] = {-1}; // decrescente
	// int array[] = {2,6,3,2,1,6,3, -1}; //disordinato
	
	// print the array with his status: crescente, decrescente or disordinato
	
	int asc = 1;
	int desc = 1;
	
	printf("array = {");
	int i = 0;
	/*
	for(i = 0; array[i] != -1; i++) {
		printf("%d, ", array[i]);

		// assign faulty value if not asc or desc
		if(array[i] > array[i+1])
			asc = 0; 
		else
			desc = 0;
	}
	*/

	while(array[i] != -1) {
		printf("%d, ", array[i]);

		// assign faulty value if not asc or desc
		if(array[i] > array[i+1])
			asc = 0; 
		else
			desc = 0;
		i++;
	}
	printf("-1} is ");
	
	if(asc == 1 && desc == 0)
		printf("asc");
	if(asc == 0 && desc == 1)
		printf("desc");
	if(asc == 0 && desc == 0)
		printf("caotic");
	if(asc == 1 && desc == 1)
		printf("empty :(");
	printf("\n");
}
