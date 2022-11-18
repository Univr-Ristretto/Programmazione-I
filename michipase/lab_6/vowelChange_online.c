#include <stdio.h>
#define LEN 8

int main() {
	
	char string[LEN];
	char changed[LEN];
	char trash;
	
	// populate char array (eheh consider the input a string and cast it as char[])
	/*
	printf("%d char array plz: ", LEN);
	scanf("%s", string);
	
	printf("%s\n", string);
	*/
	
	// printf("Please insert %i one by one followed by 'Enter'\n", LEN);
	
	// foreach element in the array in reverse
	for(int i = 0; i < LEN; i++) {
		scanf("%c", &string[i]);
		scanf("%c", &trash);
		
		if(string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u')
			changed[i] = '*';
		else
			changed[i] = string[i];
	}
	
	for(int i = 0; i < LEN; i++)
		printf("%c", string[i]);
	
	printf("\n");
	for(int i = LEN-1; i >= 0; i--)
		printf("%c", string[i]);
	
	printf("\n");
	for(int i = LEN-1; i >= 0; i--)
		printf("%c", changed[i]);
}
