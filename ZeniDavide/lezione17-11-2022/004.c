//matrice simmetrica 

#include <stdio.h>

#define N 5

int main(){
    int matrix[N][N];

    for (int i = 0; i < N; i++)
    {
       for (int j = 0; j < N; j++){
            scanf("%d",&matrix[i][j]);
       }
    }

    int s = 1;
    for (int i = 0; i < N && s; i++)
    {
        for (int j = 0; j < N && s; j++)
        {
            if (matrix[i][j] != matrix[j][i])
            {
                s = 0;
            }
            
        }
        
    }
    

    if (s == 1)
    {
        printf("la matrice è simmetrica");
    }
    if (s == 0)
    {
        printf("la matrice non è simmetrica");
    }
    
}