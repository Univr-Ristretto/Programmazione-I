#include <stdio.h>

void main() {
        int num;
        printf("Integer positive number: ");
        scanf("%d", &num);
	if (num < 0) num *=-1;

	int i = 1;
	printf("dividers: \n");
	while (i <= num/2) {
		if (num % i == 0) printf("%d\n", i);
		i ++;
	}
	printf("%d", num);
}
