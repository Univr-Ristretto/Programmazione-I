/*
Scrivere un programma che dato un numero intero positivo num inserito
da tastiera (correggere eventuali errori in inserimento) e un array di 5 interi
di nome cifre contenente tutti numeri maggiori o uguali a zero composti da
una sola cifra, verificare se tutte le cifre di num sono presenti nell’array. Ad
esempio se num vale 353 e l’array è int cifre[]= {3, 3,0, 7, 4}, l’array non
contiene tutte le cifre di num.
*/



#include <stdio.h>

#define N 5
#define TRUE 1
#define FALSE 0

int main(){
    // numero strettamente maggiore di 0
    int n; 
    do {
        scanf("%d",&n);
    } while (n < 0);
    int array[N];
    printf("inserire i valori nel vettore: \ni valori devono essere maggiori di 0, 0 compreso e minori di 10 \n");
    for (int i = 0; i < N; i++){
        //verifico che l'input inserito sia valido
        do
        {            
            scanf("%d",&array[i]);
        } while (array[i] < 0 || array[i] > 10);
    }

    //scompongo il numero con ls trategia dei moduli e divisione per 10
    // 432 % 10 = 2 --> 432 / 10 = 43
    // 43 % 10 = 3 --> 43 / 10 = 4
    
    int valid = TRUE;
    do
    {
        // sarebbe bello fare una funzione che dato un valore 
        //restituisce se il valore è all'interno dell vettore ma non ho voglia kek w
        int singolaCifra = n % 10;
        n = n/10;
        int flag= FALSE;
        for (int i = 0; i < 5; i++)
        {
            if (singolaCifra == array[i])
            {
                flag = TRUE;
            }
        }
        if (flag == FALSE) valid = FALSE;
    } while (valid == TRUE && n > 0);

    if (valid == FALSE) printf(" l’array non contiene tutte le cifre di n \n");
    if (valid == TRUE) printf(" l’array contiene tutte le cifre di n \n");
    
    
    
}