#include <stdio.h>

int main(){

    int occorrenze[10] = {0};

    int n;

    scanf("%d",&n);
    while (n <= 9 && n >= 0)
    {
        occorrenze[n]++;
        scanf("%d",&n);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d",i);
        for (int j = 0; j < occorrenze[i]; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    
    return 0;
}