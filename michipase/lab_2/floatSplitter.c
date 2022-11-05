// Given a flot value, return separatly the integer and the decimal part

#include <stdio.h>
void main() {
	float a;
	printf("Float value: ");
	scanf("%f", &a); // 8.13

	int integer = (int) a;
	printf("%d \n", integer );

	float decimal = a - integer;
	printf("%f", decimal);
}
