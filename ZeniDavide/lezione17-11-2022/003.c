#include <stdio.h>



#define N 2
int main(){
    int matrix[N][N]; 
    int r,c;
    for (int i = 0; i < N; i++)
    {
       for (int j = 0; j < N; j++){
        scanf("%d",&matrix[i][j]);
       }
    }

    do
    {
        scanf("%d",&r);
    } while (r < 0 || r>= N);
    do
    {
        scanf("%d",&c);
    } while (c < 0 || c>= N);

    printf("%d \t",matrix[r][c]);
}