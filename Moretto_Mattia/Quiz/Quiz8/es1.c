#include <stdio.h>
#define N 5

void sostituisci_valori(int matrice[N][N], int i, int j){
    for(int r = i-1; r <= i+1; r++){
        for(int c = j-1; c <= j+1; c++){
            if(r >= 0 && r < 5 && c >= 0 && c < 5){
                if(r == i && c == j){
                    matrice[r][c] = matrice[r][c];
                }else{
                    matrice[r][c] = 0;
                }
            }
        }
    }
};

void stampa_matrice(int matrice[N][N]){
    for(int r = 0; r < N; r++){
        for(int c = 0; c < N; c++){
            if(c < N){
                printf("%d ", matrice[r][c]);
            }else
            {
                printf("%d", matrice[r][c]);
            }
        }
        printf("\n");
    }
}

int main(){
    int matrix[N][N];
    int i=0;
    int j=0;

    for(int r=0; r < N; r++){
        for(int c=0; c < N; c++){
            scanf("%d", &matrix[r][c]);
        }
    }

    scanf("%d", &i);
    scanf("%d", &j);

    sostituisci_valori(matrix, i, j);
    stampa_matrice(matrix);

	return 0;
} 