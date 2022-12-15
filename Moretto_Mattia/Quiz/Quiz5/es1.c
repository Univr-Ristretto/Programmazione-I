#include<stdio.h>
#define D 8

int main(){
    int array[D];
    int i = 0;

    do{
        scanf("%d", &array[i]);
        i++;
    }while(i < D);

    for(int j = 0; j < D; j++){
        if(array[j] >= 10){
            array[j] /= 10;
        }
    }

    for(int i = 0; i < D; i++){
        if(i != D-1){
            printf("%d,", array[i]);
        }else{
            printf("%d", array[i]);
        }
    }
    
}