#include <stdio.h>
#define R 4
#define C 4

int main() {
    int Matrix [R] [C] =
    {{3, 4, 5, 8},
     {2, 9, 3, 1},
     {4, 8, 3, 6},
     {5, 9, 3, 6}};

    for(int i = 0; i < R; i++){
        for(int j = 0; j < C; j++){
                if(j == C-1){
                    printf("%d \n", Matrix [i] [j]);
                    printf("-------------- \n");
                }else{
                    printf("%d | ", Matrix [i] [j]);   
                }
        }
    }

    printf("\n");

    for(int i = 0; i < C; i++){
        for(int j = 0; j < R; j++){
                if(j == R-1){
                    printf("%d \n", Matrix [j] [i]);
                    printf("-------------- \n");
                }else{
                    printf("%d | ", Matrix [j] [i]);   
                }
        }
    }
}