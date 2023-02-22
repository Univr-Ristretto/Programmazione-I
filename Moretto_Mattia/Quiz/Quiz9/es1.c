/* Definire un tipo di dato struct per rappresentare una data di nascita in termini di giorno, mese e anno (interi). 
Scrivere un programma che chiede all'utente due date di nascita, verifica che siano valide e determina quale delle due è più recente.
Il programma deve utilizzare i seguenti sottoprogrammi:
- input: inizializza una data di nascita da standard input (non sono necessari i controlli sulla validità della data)
- confronto: determina quale delle due date è più recente e restituisce 1 (prima data), 2 (seconda data), 0 (sono equivalenti)
*/

#include <stdio.h>
typedef struct{
	int g;
	int m;
	int a;
}data;


int check(data d){
    int valid = 0;
    if((1 <= d.g && d.g <= 31) && (1 <= d.m && d.m <= 12) && (0 <= d.a && d.a <= 2023)){
        valid=1;
    }
    if(valid == 1){
        return 1;
    }else{
        return 0;
    }
}

data input(int g, int m, int a){
    data d;
    d.g = g;
    d.m = m;
    d.a = a;
    return d;
};

int confronto(data data1,data data2){
    if(data1.a == data2.a){
        if(data1.m == data2.m){
            if(data1.g == data2.g){
                return 0;
            }else if (data1.g > data2.g){
                return 1;
            }else{
                return 2;
            }  
        }else if (data1.m > data2.m){
            return 1;
        }else{
            return 2;
        }     
    }else if (data1.a > data2.a){
        return 1;
    }else{
        return 2;
    }   
};

int main(){
	data data1;
	data data2;
    int valid;
	int esito;
    int giorno, mese, anno;
    
    do{
    scanf("%d %d %d", &giorno, &mese, &anno);
    data1= input(giorno, mese, anno);
    valid = check(data1);
    }while(valid != 1);
    
    do{
    scanf("%d %d %d", &giorno, &mese, &anno);
    data2= input(giorno, mese, anno);
    valid = check(data2);
    }while(valid != 1);
	esito=confronto(data1,data2);
	printf("%d",esito);

  return 0;
}