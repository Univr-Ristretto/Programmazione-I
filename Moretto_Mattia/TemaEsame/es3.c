#include <stdio.h>

int main() {
    int Primo = 1;
    int N = 0;
    int count = 0;
    int index = 0;

    printf("Inserisci un numero: ");

    do{
        scanf("%d", &N);
        index = N;
        for(int i = 2; i < index; i++){
            if( (N % i == 0)){
                Primo = 0;
            }
        }
        if(Primo == 1){
            printf("%d is prime number \n", N);
            count++;
        }
        Primo = 1;
        index = 0;
    }while(N != 0);

    printf("You insert %d prime number", count);
     
}