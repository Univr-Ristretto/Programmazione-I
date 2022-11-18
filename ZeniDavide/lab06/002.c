/*
Scrivere un programma C che memorizza in un
array di lunghezza 15 tutti i numeri primi minori
di 50 e successivamente li stampa a video.*/

#include <stdio.h>

#define N 15
#define MAXN 50
#define TRUE 1
#define FALSE 0
int main()
{

    int primeNumber[N];
    int counter = 0;
    for (int j = 2; j < MAXN; j++)
    {
        int divisibile = FALSE;
        int cont = j / 2;
        while (cont > 1 && divisibile == FALSE)
        {
            if (j % cont == 0)
            {
                divisibile = TRUE;
            }
            cont--;
        }
        if (divisibile == FALSE)
        {
            primeNumber[counter] = j;
            counter++;
        }
    }
    for (int i = 0; i < N; i++)
    {
        printf(" %d ",primeNumber[i]);
    }
    printf("\n");
}