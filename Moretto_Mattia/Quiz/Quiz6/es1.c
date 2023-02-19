/* Completare il programma definendo la funzione coppiei che dato come parametro un intero n non negativo restituisce quante coppie, 
anche con sovrapposizione, di cifre uguali in posizioni adiacenti sono presenti nel numero n. Ad esempio, coppiei(551122) 
restituisce 3, coppiei(5122) restituisce 1, coppiei(5222) restituisce 2 (le coppie di valori adiacenti uguali si sovrappongono), 
coppiei(9) restituisce 0.
*/

#include <stdio.h>

int coppiei(int n){
    int count = 0;
    int prev_digit = n % 10;

    n /= 10;

    while(n > 0){
        int current_digit = n % 10;
        if(current_digit == prev_digit){
            count++;
        }
        prev_digit = current_digit;
        n /= 10;
    }
    return count;
};

int main(){
	int a,r;
	
	do{
		scanf("%d",&a);
	}while(a<0);
	
	r=coppiei(a);
	printf("%d",r);
	
	return 0;
}