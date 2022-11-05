// transform deg to rad
// rad = 180 * pi / deg
#include<stdio.h>

void main() {
    float deg;
	printf("Degrees: ");
    scanf("%f", &deg);
    printf("%f", (float) (180 * 3.14 / 180));
}