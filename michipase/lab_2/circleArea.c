// dato un raggio calcola l'area del cerchio

#include <stdio.h>
void main() {
	float r;
	printf("Radius: ");
	scanf("%f", &r);
	printf("%.2f", (float) r*r * 3.1415);
}
