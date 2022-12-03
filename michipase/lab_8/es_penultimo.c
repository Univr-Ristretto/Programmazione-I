#include <stdio.h>

#define N 5

int main() {
	int mat[N][N];
	
	for(int i = 0; i < N; i++) {
		for(int j = 0; j < N; j++) {
			if(i > j) mat[i][j] = N + i;
			else mat[i][j] = N + j;
		}
	}
	
	for(int x = 0; x < N; x++) {
		for(int y = 0; y < N; y++) printf("%d ", mat[x][y]);
		printf("\n");
	}
}
