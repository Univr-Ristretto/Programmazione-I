#include <stdio.h>

int main() {
    int Primo = 1;
    int N = 0;
    int i = 1;

    printf("Inserisci un numero: ");
    scanf("%d", &N);

    do{
        if( (N % i == 0) && (i != 1)){
            Primo = 0;
            printf("%d is divisor of the number %d\n", i, N);
        }
        i++;
    }while(i < N);
    if(Primo == 1){
        printf("%d is prime number", N);
    }
    
}