/*Scrivere un programma che chiede all'utente il raggio di un cerchio. L'algoritmo calcola e visualizza l'area di tale cerchio.*/
#include<stdio.h>

int main()  
{  
    /*define variable to use in this program*/
    float Area, radius;

  
    /*Enter the value*/
    printf("Insert the radius value: ");
    scanf("%f", &radius);
  
    /*Calculate circle Area*/
    Area = (radius*radius)*3.14;
  
    /*Output*/
    printf("The circle Area is: %.2f \n", Area);
} 