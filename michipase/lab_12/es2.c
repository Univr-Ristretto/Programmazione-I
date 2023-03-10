#include <stdio.h>
#define N 7
void print_arr(int arr[N]) {
	for(int i = 0; i < N; i++)
		printf("%i ",arr[i]);
	printf("\n");
}



int main() {
	int a[7] = {0,1,2,0,3,4,0};
	
	print_arr(a);

	for(int i = 0; i < N; i++) {
		if(a[i] == 0) {
			int appo = a[i];
			int j = N - 1;
			printf("a[j] %i\n", a[j]);
			while (j > 0) {
				if(a[j] != 0) {
					printf("%i <=> %i : %i <=> %i\n",i,j, a[i], a[j]);
					a[i] = a[j];
					a[j] = appo;
				}
				j--;
			}
		}
	}
	
	print_arr(a);

}
