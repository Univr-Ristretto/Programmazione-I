// dato un valore in gradi centigradi, stampare il valore in Farenheit

#include <stdio.h>
void main() {
	float a;
	printf("Celsius: ");
	scanf("%f", &a);
	printf("%.2f", (float) a * 1.8 + 32);
}
