#include <stdio.h>
#define SCORES_NUMBER 2

void main() {
	// create an array of n integers
	float score[SCORES_NUMBER];
	// init max and min to their minimum invalid vale
	float max = 17;
	float min = 31;
	// init score sum
	float sum = 0;
	
	// foreach element in the array 
	for(int i = 0; i < SCORES_NUMBER; i++) {
		// get user score and add it to array
		printf("Insert score %d :", i + 1);
		scanf("%f", &score[i]);

		if (score[i] < 18 || score[i] > 30) {
			printf("\n%f is not valid, please insert it again correctly :)\n", score[i]);
			i--;
		} else {		
			// if new score is bigger then current max assign it to max
			if(score[i] > max) max = score[i];
			
			// if new score is smaller then current min assing it to min 
			if(score[i] < min) min = score[i];
				
			// add newly inserted value to sum
			sum += score[i];
		}		
	}

	printf("\nAvg: %.2f", (float) sum/SCORES_NUMBER);
	printf("\nMax: %.2f", max);
	printf("\nMin: %.2f", min);

	printf("\n");
}
