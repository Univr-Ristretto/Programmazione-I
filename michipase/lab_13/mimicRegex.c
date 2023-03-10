#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define N 100

int main() {
    char s1[N], s2[N];
    fgets(s1, N, stdin);
    fgets(s2, N, stdin);

    for(int i = 0; i < strlen(s1); i ++) {

        // c is the first character to test, with i as index in s1
        int check = 1;
        for (int j = 0; j < strlen(s2); j++) {
            if(s1[i+j] != s2[j]) {
                check = 0;
                break;
            } 
        }

        if(check) {
            for(int k = i; k < i + strlen(s2); k++) {
                s1[k] = 'X';
            }
            i += strlen(s2) -1;
        }

    }

    printf("%s", s1);

}
