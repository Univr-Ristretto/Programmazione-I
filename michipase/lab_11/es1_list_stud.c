#include<stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum {false, true}bool;

typedef struct {
    char nome[21];
    int eta;
}t_stud;

/**
 * Scrivere una funzione C che prende come parametro il numero
 * di studenti da inserire e che restituisce l’indirizzo dell’array
 * dinamico. I nomi e le età vengono lette da tastiera. Gestire
 * eventuali errori nella fase di allocazione di memoria,
 * restituendo NULL in caso di errori, l’indirizzo del vettore in
 * caso di successo. 
*/

int main() {

    int num;
    t_stud *ptr;

    printf("inserire il numero di studenti: ");
    scanf("%i", &num);


    // print array
    for(int i = 0; i < num; i++) {
        printf("\n[%i]------------", i);
        printf("\nnome: %s", ptr[i].nome);
        printf("\neta: %d", ptr[i].eta );
    }

    free(ptr); // dobby is a free elf
    return 0;
}
