#include <stdio.h>

void main() {
	int index;
	do {
		printf("Integer number between 0 and 9: ");
		scanf("%d", &index);
	} while ((index < 0) || (index > 9));

	int i = 0;
	int sum = 0;
	int prod = 1;
	
	int x;

	while(i <= 9) {
		printf("insert num %d: ", i);
		scanf("%d", &x);

		if(i <= index)
			sum += x;
		else
			prod *= x;
		i++;
	}
	
	printf("\n# sum: %d\n# prod: %d\n", sum, prod);
}
