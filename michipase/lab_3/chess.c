/**
81 82 83 84 85 86 87 88
71 72 73 74 75 76 77 78
61 62 63 64 65 66 67 68
51 52 53 54 55 56 57 58
41 42 43 44 45 46 47 48
31 32 33 34 35 36 37 38
21 22 23 24 25 26 27 28
11 12 13 14 15 16 17 18
*/

#include <stdio.h>

void main() {
	int xk, yk, xq, yq;
	int valid_coords = 0;

	// enter in the loop
	while(valid_coords == 0) {
		// set coords to any invalid number		
		xk = 0;
		yk = 0;
		xq = 0;
		yq = 0;
		// foreach piece coord, keep asking for it until the value is between 1 and 8 (included)
		while(xk <1 || xk > 8) {
			printf("Insert white king X coord (1-8):");
			scanf("%d", &xk);
		}
		while(yk <1 || yk > 8) {
			printf("Insert white king Y coord (1-8):");
			scanf("%d", &yk);
		}		
		while(xq <1 || xq > 8) {
			printf("Insert white queen X coord (1-8):");
			scanf("%d", &xq);
		}
		while(yq <1 || yq > 8) {
			printf("Insert white queen Y coord (1-8):");
			scanf("%d", &yq);
		}
		// check if pieces coords are not the same
		if ((xk == xq) && (yk == yq))
		{
			printf("king can't stay under the queen!\n\n");
		} else {
			printf("valid coords!\n");	
			valid_coords = 1;
		}
	}

	// check row / columns
	if ((xk == xq) || (yk == yq)) {
		printf("row! king is dead.\n");
		return;	
	}

	// check diagonals = differences betweens coords (squared to include "y = -x") must be the same to be on the same diagonal "y = x"
	if ((xk - xq)*(xk - xq) == (yk - yq)*(yk - yq)) {
		printf("diagonal! king is dead.\n");
		return;	
	}

	printf("King is save :)");

	// TODO
	// check for direction and distance Q -> K

}

