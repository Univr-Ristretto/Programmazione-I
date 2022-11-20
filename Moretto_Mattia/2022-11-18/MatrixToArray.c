#include <stdio.h>
#define R 4
#define C 6
#define n R*C

int main() {
    int Matrix [R] [C] =
    {{1, 4, 5, 2, 3, 6},
     {4, 5, 4, 1, 1, 1},
     {7, 3, 2, 3, 4, 5},
     {2, 2, 6, 6, 0, 1}};

    int array[n];
    int index = 0;

    for(int i = 0; i < R; i++){
        for(int j = 0; j < C; j++){
            if(j == C-1){
                printf("%d \n", Matrix [i] [j]);
                printf("--------------------- \n");
            }else{
                printf("%d | ", Matrix [i] [j]);   
            }
        
            array[index] = Matrix [i] [j];
            index++;     
        }
    }
    printf("\n");
    for(int t = 0; t < n; t++){
        printf("%d", array[t]);
    }
}