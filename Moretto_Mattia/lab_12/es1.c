#include <stdio.h>


typedef struct 
{
    int ore, minuti, secondi;
} time;

time set(int h, int m, int s){
    time t;
    t.ore = h;
    t.minuti = m;
    t.secondi = s;
    return t;
}


int check(time t){
    if((t.ore < 24 && t.ore >= 0) && (t.minuti < 60 && t.minuti >= 0) && (t.secondi < 60 && t.secondi >= 0)){
        return 1;
    }else{
        return 0;
    }
};

void print(time t){
    printf("%d:%d:%d", t.ore,t.minuti,t.secondi);
}

void somma(time t){
    int H = 9;
    int M = 41;
    int S = 23;

    int second = t.secondi + S;

    if(second > 60){
        second = second - 60;
        M++;
    }

    int minute = t.minuti + M;

    if(minute > 60){
        minute = minute - 60;
        H++;
    }

    int hour = t.ore + H;

    if(hour > 23){
        hour = hour - 24;
    }

    printf("%d:%d:%d", hour, minute, second);
}

void sottrazione(time t){
    int H = 9;
    int M = 41;
    int S = 23;
    int hour, minute, second;

    if(t.secondi < S){
        second = 60 - (S - t.secondi);
        M++;
    }else{
        second = t.secondi - S;
    }

    if(t.minuti < M){
        minute = 60 - (M - t.minuti);
        H++;
    }else{
        minute = t.minuti - M;
    }

    if(t.ore < H){
        hour = 24 - (H - t.ore);
    }else{
        hour = t.ore - H;
    }

    printf("%d:%d:%d", hour, minute, second);
}

int main(){
    int h, m, s;
    time time1;
    
    do{
        printf("Inserisci il valore delle ore: ");
        scanf("%d", &h);
        printf("Inserisci il valore dei minuti: ");
        scanf("%d", &m);
        printf("Inserisci il valore dei secondi: ");
        scanf("%d", &s);

        time1 = set(h, m, s);
        check(time1);
    }while(check(time1) != 1);

    
    print(time1);
    printf("\n La somma dell'orario e': ");
    somma(time1);
    printf("\n La differenza dell'orario e': ");
    sottrazione(time1);
    
}