#include <stdio.h>
#define R 3
#define C 3

int main() {
    int Matrix [R] [C] =
    {{3, 4, 5},
     {2, 9, 3},
     {4, 8, 3}};

    int X;
    int count = 0;
    printf("Insert the value you want to find:");
    scanf("%d", &X);

    for(int i = 0; i < R; i++){
        for(int j = 0; j < C; j++){
            if(Matrix [j] [i] == X){
                count++;
            }
        }
    }
    printf("I can find the iserted value %d times", count);
}