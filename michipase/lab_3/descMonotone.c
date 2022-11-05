#include <stdio.h>

void main() {
	unsigned int data;
	printf("Insert a number (absolutly > 0 :/ ): ");
	scanf("%d", &data);

	// finchè il valore è minore di 10
	while (data > 10) {
		// controlla se il resto di 10 (ultima cifra del numero) è maggiore del resto di 10 del numero successivo (ovvero la cifra successiva)
		if (data % 10 >= data / 10 % 10) {
			// in quel caso ritorna perchè non è decrescente
			printf("NO, It's not monotone\n");
			return;		
		}
		// altrimenti prosegui eliminando l'ultima cifra del numero
		data /= 10;
	}
	// se arriva qua allora il ciclo è arrivato alla fine e tutti i numeri sono 
	printf("YES, It is monotone!\n");
}

