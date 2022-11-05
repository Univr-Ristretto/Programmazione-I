#include <stdio.h>
#define LEN 10

void main() {
	
	char string[LEN];
	
	// populate char array (eheh consider the input a string and cast it as char[])
	printf("%d char array plz: ", LEN);
	scanf("%s", string);
	
	printf("%s\n", string);
		
	// foreach element in the array in reverse
	for(int i = LEN-1; i >= 0; i--) {
		// if the char is "a" or "e" or "i" or "o" or "u" stamp *, elsewere stamp the normal char
		if(string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u')
			printf("*");
		else
			printf("%c", (char) string[i]);
	}
	
	printf("\n");
}
