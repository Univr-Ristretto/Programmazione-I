// Scrivere un programma C che:
// chiede all'utente di inserire da tastiera una matrice quadrata m di numeri interi e dimensione NxN (con N pari a 3);
// modifica la matrice m inserendo come valori della diagonale principale la somma dei valori della riga corrispondente. 
// stampa la matrice risultante

#include <stdio.h>
#define N 3 
int main(){
int m[N][N], x, y, s;

//completa qui la parte mancante

// Insert the value of the NxN matrix
for (x = 0; x < N; x++) {
    for (y = 0; y < N; y++) {
        scanf("%d", &m[x][y]);
    }
}

// Sum of the value present in each row ad susbstitute the result into the main diagonal
for(int i = 0; i < N; i++){
    s = 0;
    for(int j = 0; j < N; j++){
        s += m[i][j];
    }
    m[i][i] = s;
}

// visualizzazione
for(x = 0; x < N; x++){
	for(y = 0; y < N; y++)
		printf("%3d ", m[x][y]);
	printf("\n");
} 
}