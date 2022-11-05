// include the standard library
#include <stdio.h>

// main is the main function that needs to exist in any C program
void main() {
	// declare variables on top of execution
	int a, b;
	float mean;
	
	// printf is required to stamp text on screen
	printf("Insert your marks\n");

	// scanf read the user input
	// requires the definition of input type and a variable to assign it (of the same type) 
	/**
	 * %c char
	 * %d integer
	 * %f float
	 * ... others look online
	 */
	scanf("%d", &a);
	scanf("%d", &b);
	
	// calculate the mean
	mean =(float) (a + b) / 2;

	// String iterpolation requires a reference to the type of variable to insert in str followed by variable of that type
	printf("the mean between %d and %d is %.1f\n", a,b,mean);
}
