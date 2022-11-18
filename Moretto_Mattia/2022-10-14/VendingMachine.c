/**
. Scrivere in linguaggio C un programma per calcolare il numero di bottigliette d’acqua che si possono comprare alla macchinetta. Il
programma, dopo aver chiesto all’utente i soldi a disposizione, stampa a video il numero di bottigliette che possono essere acquistate e il resto da
ricevere dopo l’acquisto. Il prezzo di ciascuna bottiglietta è di 40 centesimi. Si supponga che la cifra a disposizione sia positiva e che la
macchinetta abbia in giacenza un numero illimitato di bottigliette. Per erogare il resto, la macchinetta utilizza pezzi da 20, 10, 5 e 1 centesimi:
il programma dovrà calcolare il numero di monete di resto di ciascun taglio, prediligendo l’utilizzo di monete di taglio maggiore (ad esempio,
se il resto è di 0.37 €, il programma dovrà restituire: 1*20 cent, 1*10 cent, 1*5 cent, 2*1 cent)
 */

#include <stdio.h>
#define p 40
void main() {
	float a;
	printf("Vending machine, cost for single bottle of water = .%d euros \n insert your finances: ", p);
	scanf("%f", &a);
	a = a * 100;
	
	int max_bottles = a / p;
	int rest = a - (max_bottles * p);
	
	int rest_20 = rest / 20;
	rest = rest - (rest_20 * 20);

	int rest_10 = rest / 10;
	rest = rest - (rest_10 * 10);

	int rest_5 = rest / 5;
	rest = rest - (rest_5 * 5);

	printf("You give me %.0f euros yor receive: %d bottle of water (Pretty Fair eh?)\n Rest: \n .20: = %d \n .10 = %d \n .5 = %d \n .1 = %d \n", a/100 , max_bottles, rest_20, rest_10, rest_5, rest);
}
