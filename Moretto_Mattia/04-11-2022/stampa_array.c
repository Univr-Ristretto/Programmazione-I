#include<stdio.h>

int main(void){
    int number;
    int sum = 0;
    int max_number = 0;
    int min_number= 31;
    float average = 0;
    int array_values[10];
    int i;
    int n = 10;

    for(i = 0; i < n; i++){
        printf("Insert grade n %d/10, between 18 and 30: ", i+1);
        scanf("%d", &number);

        if((number >= 18) && (number <= 30)){
            array_values[i] = number;
            if (max_number < array_values[i]) {
                max_number = array_values[i];
            }
            if(min_number > array_values[i]){
                min_number = array_values[i];
            }
            sum += array_values[i];
        }else{
            printf("The grade value is incorrect, it must be included by 18 and 30 \n");
            i--;
        }
    }
    for( i = 0; i< n; i++ ){
        printf( "array_values[%d]: %d \n",i,array_values[i] );
    }
    average = sum / n;
    printf("Tha max grade of this array is: %d \n", max_number);
    printf("The min grade of this array is: %d \n", min_number);
    printf("The average of this array is: %.1f \n", average);
}