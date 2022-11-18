/*
Chiedere all’utente una sequenza di numeri interi
che termina con l’inserimento dello 0 (e in ogni
caso lunga al massimo 100 elementi). Creare un
array che contenga tutti e soli valori distinti della
sequenza (ovvero omettendo i duplicati).
Visualizzare l’array e il numero di elementi unici
inseriti.
*/

#include <stdio.h>

#define LEN 5

int main() {
	int arr[LEN];
	int unique[LEN];
	int i = -1;
	int index = 0;

	do {
		i++;
		scanf("%i", &arr[i]);
		
		int u = 1;
		for(int j = 0; j < i; j++) {
			if(unique[j] == arr[i]) u = 0;
		}
		
		if(u == 1) {
			unique[index] = arr[i];
			index ++;
		}		
	} while(arr[i] != 0 && i != LEN -1);
	
	i = -1;
	do {
		i++;
		printf("%i", arr[i]);
	} while(arr[i] != 0 && i != LEN - 1);
	printf("\n");	
	i = -1;
	do {
		i++;
		printf("%i", unique[i]);
	} while(unique[i] != 0 && i != LEN - 1);


}

