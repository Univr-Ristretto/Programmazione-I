#include<stdio.h> 

#define N 5

int main() {
	int mat[N][N]={
		{0,1,5,6,14},
		{2,4,7,13,15},
		{3,8,12,16,21},
		{9,11,17,20,22},
		{10,18,19,23,24}
 	};
 	
 	int arr[N*N];
 	int index = 0;
 
 	// iterate for each upper diagonal
	for (int i = 0; i < N*2; i++) {
		printf("%d: ", i);
		
		if (i < N) {
			
			// if index is even
			if(i % 2 == 0) {

				for(int j = 0; j <= i; j++) {
					printf("[%d:%d]",i-j, j);
					arr[index] = mat[i-j][j];
					index ++;
				}
			} else { // if index is not even
				
				// coord x = 0, y = i ==> x+y = i
				for(int j = 0; j <= i; j++) {
					printf("[%d:%d]",j, i-j);
					arr[index] = mat[j][i-j];
					index ++;
				}
			
			}
		} else {
			// 5
					
			// 5 => 14 23 32 41
			// 6 => 42 33 24
			// 7 => 34 43
			// 8 => 44
			if (i % 2 == 0) {
				for(int i =)
			}
		}
		
		
		printf("\n");
	}
	
	printf("TEST:\n");
	printf("0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24\n");
	for(int i = 0; i < N*N; i++) {
		printf("%d,",arr[i]);
	}
}
