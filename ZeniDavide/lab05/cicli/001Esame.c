/*Chiamiamo coppia di quadrati (CQ) una coppia
<a,b> di numeri interi che sono uno il quadrato
dell’altro. Esempio <9,3> oppure <-3,9> (infatti
9=3*3).
Si codifichi un programma C che legge da
tastiera una sequenza che termina con 99 (di
lunghezza a priori illimitata) di numeri interi e
stampa a video quante coppie di numeri
consecutivi all’interno della sequenza
rappresentano una CQ.
Ad esempio: 2 4 16 0 3 9 99 contiene 3 CQ: <2,4>
<4,16> e <3,9>*/


#include <stdio.h>


#define TERMINATOR 99


int main(){
    int n;
    int quadrato;
    int cont = 0;
    do
    {
        scanf("%d",&n);
        // calcolo il quadrato cosi da poterlo comparare con il mumero siccessivo
        if (quadrato == n)
        {
            cont++;
        }
        
        quadrato = n*n;
    } while (n != TERMINATOR);
    

    printf("Nella sequenza di numeri inseriti ci sono %d coppie di quadrati \n", cont);
}
