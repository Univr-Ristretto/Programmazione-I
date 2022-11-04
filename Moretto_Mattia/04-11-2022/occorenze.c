#include<stdio.h>

int main(void){
    int i;
    int value;
    int integer;
    int count = 0;
    int n = 0;
    int array_value[n];

    printf("Insert the size of Array: ");
    scanf("%d", &n);
    printf("Insert the value you want to find: ");
    scanf("%d", &value);

    for(i=0; i < n; i++){
        printf("Insert the value at the position %d of the array", i);
        scanf("%d", &integer);

        array_value[i] = integer;

        if(array_value[i] == value){
            count++;
        }
    }
    printf("In the insert array the value %d is present %d times \n", value, count);
}