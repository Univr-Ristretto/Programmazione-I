/*
Completare il file scrivendo il sottoprogramma int higherdigit(int n, int m) che ricevuti in ingresso due interi n e non negativi, 
restituisce la cifra più alta tra quelle presenti nei due numeri, se i due numeri sono formati dallo stesso numero di cifre, -1 
altrimenti. Ad esempio, se al sottoprogramma vengono passati in ingresso i numeri 31 e 421 esso restituirà -1, infatti 31 è composto 
di 2 cifre mentre 421 di 3; se al sottoprogramma vengono passati in ingresso i numeri 31 e 42 esso restituirà 4, infatti i numeri 
sono di 2 cifre e la più alta che compare è 4.
*/

#include <stdio.h>
int higherdigit(int n, int m){
    int countN = 0;
    int countM = 0;
    int value = 0;
    int valueN = n;
    int valueM = m;
    
    do{
        int divN = valueN/10;
        countN++;
        valueN= divN;
    }while(valueN != 0);

    do{
        int divM = valueM/10;
        countM++;
        valueM= divM;
    }while(valueM != 0);


    if(countN != countM){
        value = -1;
    }else{
        int prev_Mdigit = m % 10;
        int maxM = 0;
        int prev_Ndigit = n % 10;
        int maxN = 0;
        n /= 10;
        m /= 10;
        while(n > 0){
            int current_Ndigit = n % 10;
            if(prev_Ndigit < current_Ndigit){
                maxN = current_Ndigit;
            };
            prev_Ndigit = current_Ndigit;
            n /= 10;
        };
        while(m > 0){
            int current_Mdigit = m % 10;
            if(prev_Mdigit < current_Mdigit){
                maxM = current_Mdigit;
            };
            prev_Mdigit = current_Mdigit;
            m /= 10;
        };

        if(maxN > maxM){
            value=maxN;
        }else{
            value=maxM;
        }
    }

    return value;

};

int main(){
    int a, b, r;

	scanf("%d",&a);
    scanf("%d",&b);

    r=higherdigit(a,b);

	printf("%d",r);

	return 0;
} 