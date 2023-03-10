#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define N 100

int cons(char c) {
    c = tolower(c);
    return c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u';
}

int main() {
    char str[N];
    int l, count;

    fgets(str, N, stdin);
    
    // printf("%i\n", strlen(str));

    l = ((strlen(str) <= 100) ? strlen(str) : 100) - 1;

    for(int i = 0; i < l; i++) {
        if(str[i] == str[i+1] && !isspace(str[i]) && cons(str[i])) count ++;
    }

    printf("%i", count);

}
