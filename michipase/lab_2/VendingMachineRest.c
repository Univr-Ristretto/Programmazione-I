/**
 * 	ask for available cash
 *	1 bottle = 40cent
 * 	calc max bottle number and the rest available
 */

#include <stdio.h>
#define p 30
void main() {
	float a;
	printf("### VENDING MACHINE MONSTER ###\n# 1 bottle of H2O = .%d euros  #\navailable finances:", p);
	scanf("%f", &a);
	a = a * 100;
	
	int max_bottles = a / p;
	int rest = a - (max_bottles * p);
	
	int rest_20 = rest / 20;
	rest = rest - (rest_20 * 20);

	int rest_10 = rest / 10;
	rest = rest - (rest_10 * 10);

	int rest_5 = rest / 5;
	rest = rest - (rest_5 * 5);

	printf("Bottles: %d\nRest:\n  .20 = %d\n  .10 = %d\n  .5 = %d\n  .1 = %d\n", max_bottles, rest_20, rest_10, rest_5, rest);
}
