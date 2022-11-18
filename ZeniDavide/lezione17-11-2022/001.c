#include <stdio.h>


#define N 3

int main(){
    int matrice[N][N];


    for (int i = 0; i < N; i++)
    {
       for (int j = 0; j < N; j++){
        scanf("%d",&matrice[i][j]);
       }
    }
    
    for (int i = 0; i < N; i++)
    {
        printf("%d \t",matrice[i][i]);
    }
}