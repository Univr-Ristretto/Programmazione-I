// invert the number es. 123 => 321, than say of it's palindrome

#include <stdio.h>

void main() {
	
	// input integer positive
	int num;
	do {
		printf("Integer positive number: ");
		scanf("%d", &num);
	} while (num < 0);

	int inv = 0;	// initialize inverted number
	int appo = num; // save num in a support variable
	
	// calc input lenght and save it in i
	int len = 0;	// input length
	while(appo >= 1) {
		appo /= 10;
		len++;
	}

	// reset appo to num
	appo = num;
	while (len > 0) {

		int p = 1; 	// power of ten init
		int j = len;	// length

		// calc power of 10 
		while(j > 1) {
			p *= 10;
			j--;	
		} // should end with something like 100000, 10000, 1000, 100, 10, 1....

		inv += (appo % 10) * p;
			
		appo /= 10; 
		len--;
	}

	printf("\n# Inverted: %d", inv);
	if(inv == num)
		printf("\n    Psssst! I'm also plaindrome ;)");
}
