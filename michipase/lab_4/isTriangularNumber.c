#include <stdio.h>

void main() {
	int num;
        printf("Integer positive number: ");
        scanf("%d", &num);
	if (num < 0) num *=-1;

	int triang = 0;
	int i = 1;
	do {
		triang += i;
		i++;
	} while (triang < num);

	printf("\n%d is %s a traingolar number.", num, num == triang ? "" : "not");
}
