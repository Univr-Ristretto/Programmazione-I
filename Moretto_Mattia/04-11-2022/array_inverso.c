#include<stdio.h>

int main(void){
    int i;
    int n = 10;
    char string[n];

    printf("Insert string (%d):", n);
    scanf("%s", &string);

    printf("Array is: "); 
    for(i=0; i < n; i++){
        printf(" %c |", string[i]);
    }
    printf("\n");
    printf("Inverted: "); 
    for(i=(n-1); i >= 0; i--){
        if((string[i] == 'a') || (string[i] == 'e') || (string[i] == 'i') || (string[i] == 'o') || (string[i] == 'u')){
            string[i] = '*';
            printf(" %c |", string[i]);
        }else{
            printf(" %c |", string[i]);
        }  
    }
    printf("\n");
}