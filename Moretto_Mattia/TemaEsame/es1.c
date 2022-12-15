#include <stdio.h>

int main() {
    int val = 0;
    int number = 0;
    int asc = 1;
    
    printf("Inserisci un valore: \n");


    do{
        if(number > val ){
            asc = 0;
        }
        number = val;
        scanf("%d", &val);
    }while(val != 0);
    if(asc == 1 ){
        printf("The sequence is ascendant");
    }else{
        printf("The sequence is not ascendant");
    }
}