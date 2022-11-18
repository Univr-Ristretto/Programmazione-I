#include <stdio.h>

#define DIM 8

int main() {
    char array[DIM];
    char trash;
    int i;
    // printf("Inserisci %i caratteri ognuno seguito da invio:\n", DIM);

    for(i = 0 ; i < DIM; i++){
        scanf("%c", &array[i]);
        scanf("%c", &trash);
    }
    
    for(i = 0 ; i < DIM; i++){
        printf("%c", array[i]);
    }

    printf("\n");
    for(i=(DIM-1); i >= 0; i--){
        printf("%c", array[i]);
    }
    
    printf("\n");
    for(i=(DIM-1); i >= 0; i--){
        if((array[i] == 'a') || (array[i] == 'e') || (array[i] == 'i') || (array[i] == 'o') || (array[i] == 'u')){
            array[i] = '*';
            printf("%c", array[i]);
        }else{
            printf("%c", array[i]);
        }  
    }
    
}