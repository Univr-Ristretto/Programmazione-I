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
    int value[n/2];
    int index1 = 0;
    int index2 = 0;
    int number = 0;
    int count = 0;
    int result = 0;
    int unique = 1;

    for(int i = 0; i < R; i++){
        for(int j = 0; j < C; j++){
            array[index1] = Matrix [i] [j];
            index1++;     
        }
    }

    for(int e = 0; e < n ; e++){
        number = array[e];
        for(int c = 0; c < n / 2; c++){
            if(number == value[c]){
                unique = 0;
            }
        }
        if(unique == 1){
            value[index2] = number;
            index2++;
            for(int f = 0; f < n; f++){
                if(number == array[f]){
                    count++;
                } 
            }
            if(count >= 2){
                result++;
            }
        }
        count = 0;   
    }
    printf("Inside matrix there is/are %d value insert more than two time", result);
}

