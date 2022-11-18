
#include <stdio.h>


#define N 5
#define TRUE 1
#define FALSE 0

int main(){
    char s1[N],s2[N*2],inv;
    for (int i = 0; i < N; i++)
    {
        scanf("%s",&s1[i]);
        // pulisco il buffer
        // scanf("%*c",&inv);  a me da dei warning 
        fflush(stdin); // alternativa

    }
    int j = 0;
    for (int i = 0; i < N; i++,j++)
    {
        s2[j] = s1[i];
        if (s1[i] == 'a' || s1[i] == 'e' || s1[i] == 'i' || s1[i] == 'a' || s1[i] == 'o' || s1[i] == 'u')
        {
            j++;
            s2[j] = s1[i];
        }
    }

    for (int i = 0; i < j; i++)
    {
        printf("%c",s2[i]);
    }
    printf("\n");
}