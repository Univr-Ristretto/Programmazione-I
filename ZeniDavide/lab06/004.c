/*

Richiede all’utente di inserire 20 numeri interi a piacere e li
salva in un array.
    ○ Crea e stampa un array risultato in cui:
        ● Ogni elemento in posizione pari (n) è uguale alla somma
        degli elementi dell’array originale in posizione pari
        dall’inizio fino a n.
        ● Ogni elemento in posizione dispari (m) è uguale alla
        somma degli elementi dell’array originale in posizione
        dispari dall’inizio fino a m.

*/

#include <stdio.h>

#define N 10

int main(){
    int array[N];
    int result[N] = {0};
    int sumEven = 0;
    int sumOdd = 0;
    for (int i = 0; i < N; i++)
    {
        scanf("%d",&array[i]);
    }
    for (int i = 0; i < N; i++)
    {
        if (i%2==0)
        {
            sumOdd += array[i];
            result[i] = sumOdd;
        }else
        {
            sumEven += array[i];
            result[i] = sumEven;
        } 
    }
    for (int i = 0; i < N; i++)
    {
        printf(" %d ",result[i]);
    }
    
    
}