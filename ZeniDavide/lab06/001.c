/*
Scrivere un programma C che memorizza in un
array i primi 15 numeri di Fibonacci e li stampa a
video
*/

#include <stdio.h>

#define N 15

int main(){
    int fibonacci[N];

    for (int i = 0; i < N; i++)
    {
        if (i>1)
        {
            fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
        }else{
            fibonacci[i] = 1;
        }
        printf(" %d ",fibonacci[i]);
    }    
}