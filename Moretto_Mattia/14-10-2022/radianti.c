#include<stdio.h>

int main()  
{  
    /*define variable to use in this program*/
    float degree, radian;  
  
    /*Enter the degree value*/
    printf("Enter angle in Degrees: ");  
    scanf("%f", &degree);  
  
    /*Calculate conversion radian -> degree*/
    radian = degree * ( 3.17 / 180.0 );  
  
    /*Output*/
    printf("Angle in Radian is %f\n", radian);  
  
    return 0;  
}  