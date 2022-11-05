#include <stdio.h>

void main() {
	char c;
	scanf("%c", &c);
	int ch = c;


	if ((ch >= 48) && (ch <= 57)) {
		printf("%s", " is a number");
	} else if (((ch >= 65) && (ch <= 90)) || ((ch >= 97) && (ch <= 122))) {
		printf("%s", " is a char");	
	} else {
		printf("%s", " is something else");	
	}
}
