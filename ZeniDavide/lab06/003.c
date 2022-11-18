/*
Scrivere un programma che dato un array di
interi (lungo 10) con i valori inseriti da tastiera
determina quanti massimi locali ci sono nell’array
stampando il risultato.
*/
#include <stdio.h>

#define N 10

int main(){

    int array[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d",&array[i]);
    }
    int contLocalMax = 0;
    for (int i = 0; i < N; i++)
    {
        if (i == 0 && array[i] > array[i+1] || i == 9 && array[i] < array[i+1])
        {
            contLocalMax++;
        }else if(array[i] < array[i+1] && array[i] > array[i-1]){
            contLocalMax++;
        }
    }

    printf("there are %d local max \n",contLocalMax);
    
}