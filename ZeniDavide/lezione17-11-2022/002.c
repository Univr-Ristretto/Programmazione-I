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
    int max;
    for (int i = 0; i < N; i++)
    {
        max = matrice[i][0]; 
       for (int j = 0; j < N; j++){
        if (matrice[i][j] > max){
            max = matrice[i][j]; 
        }
       }
       
       printf("%d\n",max);
    }
}