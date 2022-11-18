/*Scrivere un programma in C che chiede all'utente un valore che
rappresenta una temperatura in gradi celsius, converte il valore in
gradi Fahrenheit e visualizza il risultato. NOTA: la formula per la
conversione è gradi_F = gradi_C x 1.8 + 32*/
#include<stdio.h>

int main()  
{  
    /*define variable to use in this program*/
    float T, F;

  
    /*Enter the value*/
    printf("Insert the Temperature (°C) value: ");
    scanf("%f", &T);
  
    /*Calculate circle Area*/
    F = (T * 1.8 + 32);
  
    /*Output*/
    printf("%.2f°C correspond to %2.fF \n", T, F );
} 