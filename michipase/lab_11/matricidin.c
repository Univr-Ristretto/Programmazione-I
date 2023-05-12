#include <stdio.h>
#include <stdlib.h>

int main(){
int i,j;
int r;
int c;
int **p; // initalize pointer p

printf("Quanti righe e colonne? ");
scanf("%d%d",&r,&c); // ask for number of rows and column

p=(int**)malloc(r*sizeof(int*)); // allocate memory for n elements of type int

for(i=0;i<r;i++)
	p[i]=malloc(c*sizeof(int)); // allocate each row


printf("\n Inserisci i valori matrice \n");

for(i=0;i<r;i++)
	for(j=0;j<c;j++)
		scanf("%d",&p[i][j]); // add value to cell
	
/**
 * print matrix
*/
for(i=0;i<r;i++){
	for(j=0;j<c;j++)
		printf("%3d",p[i][j]);

printf("\n");
}

free(p); // free pointers
}