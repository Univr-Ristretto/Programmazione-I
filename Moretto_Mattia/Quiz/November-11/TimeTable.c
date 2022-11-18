#include <stdio.h>

int main() {
    int n, x;
    // printf("Inserire un numero intero: ");
    scanf("%i", &n);
    // printf("Inserire il numero di iterazioni: ");
    scanf("%i", &x);

    for (int i = 1; i <= x; i++){
        printf("%i * %i = %i \n",n,i,n*i);
    }
    return 0;
}