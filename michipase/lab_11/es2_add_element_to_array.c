#include<stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int *ptr;
    int num;

    printf("inserire il numero valori: ");
    scanf("%i", &num);
    ptr = leggi(num);

    // print array
    for(int i = 0; i < num; i++) {
        printf("%d", ptr[i]);
    }

    free(ptr); // dobby is a free elf
    return 0;
}

int* leggi(int num) {
    // create the sized array
    int * ptr = malloc(num * sizeof(int));

    // populate the array
    for(int i = 0; i < num; i++) {
        scanf("%d", &ptr[i]);
        printf(" ");
    }

    return ptr;
}