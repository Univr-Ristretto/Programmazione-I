// Scrivere un programma scomposto in funzioniche:

#include <stdio.h>
#include <stdlib.h>
#define N 4
#define MAX 10
#define MIN 0
typedef enum { false, true} bool;

// - Definisce globalmente una matrice 4*4 di interi
int mat[N][N];

// - Riempie la matrice con valori random tra 0 e 10(estremi compresi)
bool fill_mat() {
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            mat[i][j] = rand() % MAX + 1;
    return true;
}

// - Stampa la matrice
void print_mat() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            printf("%i ", mat[i][j]);
        printf("\n");
    };
}

// - Restituisce al main l’indice di riga e di colonna che hanno somma degli elementi massima (se esistono più righe e/o colonne con somma massima restituire la prima incontrata)
int max_row() {
    int max = 0;
    int max_i = 0;
    
    for(int r = 0; r < N; r++) {
        int sum = 0;
        for (int c = 0; c < N; c++) sum += mat[r][c];
        if (sum > max) {
            max = sum;
            max_i = r;
        }
    }

    return max_i;
}
int max_col() {
    int max = 0;
    int max_i = 0;
    
    for(int r = 0; r < N; r++) {
        int sum = 0;
        for (int c = 0; c < N; c++) sum += mat[c][r];
        if (sum > max) {
            max = sum;
            max_i = r;
        }
    }

    return max_i;
}

int main() {
    if (fill_mat()) {
        print_mat();
        printf("\nmax COL %i", max_col());
        printf("\nmax ROW %i", max_row());
    } else
        printf("Something went wrong");

    printf("\n");
    return 0;
}