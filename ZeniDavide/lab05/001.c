/*
 *Scrivere un programma che dato un array di interi >0 (sicuramente è così,
non serve correggere errori) inizializzato in fase di dichiarazione e che
finisce con il valore sentinella -1 (dichiarato come costante simbolica STOP),
verificare se l’array è in ordine:
1. Crescente
2. Decrescente
3. Nessun ordine
e stampare un opportuno messaggio. Ad esempio l’array int values[] = {7,
4, 5, 4, 2, STOP}; non è in nessun ordine, l’array int values[] = {7, 5, 3, 2, 1,
STOP}; è in ordine decrescente, mentre l’array int values[] = {1, 3, 4, 7, 9,
STOP}; è in ordine crescente.
 *
 * */


#include <stdio.h>

#define N 4
#define STOP -1

#define CRESCENTE 0
#define DECRESCENTE 1 
#define NESSUN_ORDINE 2


int main(){
	int array[N] = {8,4,3,STOP};
	int order;
	if (array[0] < array[1])
	{
		order = CRESCENTE;
	}else{
		order = DECRESCENTE;
	}
	

	for(int i = 0; i < N-2 ; i++){
		if (order == CRESCENTE && array[i] > array[i+1] || order == DECRESCENTE && array[i] < array[i+1])
		{
			order = NESSUN_ORDINE;
		}
	}

	if (order == CRESCENTE)
	{
		printf("L'array è crescente \n");
	}else if (order == DECRESCENTE)
	{
		printf("L'array è decrescente \n");
	}else{
		printf("L'array non è ordinato\n ");
	}
	
	
}
