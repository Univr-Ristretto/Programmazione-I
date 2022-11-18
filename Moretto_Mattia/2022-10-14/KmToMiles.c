/*Scrivere un programma che chiede all’utente una velocità in km/h, la
converte e visualizza a schermo in m/s e miglia per ora (1 km/h= 0.64
Mph)*/
#include<stdio.h>

int main()  
{  
    /*define variable to use in this program*/
    float Miglia, speed;

  
    /*Enter the value*/
    printf("Insert the Km value: ");
    scanf("%f", &speed);
  
    /*Calculate circle Area*/
    Miglia = speed * 0.64;
  
    /*Output*/
    printf("%.2fKm correspond to %2.fMph \n", speed, Miglia );
} 