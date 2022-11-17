#include <stdio.h>

#define N 3

int main(){
    int m1[N][N];
    int m2[N][N];


    for (int i = 0; i < N; i++)
    {
       for (int j = 0; j < N; j++){
            scanf("%d",&m1[i][j]);

       }
    }
    // rotazione anti-oraria della matrice
    for (int i = 0; i < N; i++)
    {
       for (int j = 0; j < N; j++){
            m2[N-1-j][i] = m1[i][j];
       }
    }
}