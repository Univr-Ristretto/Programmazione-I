#include<stdio.h>

int main(){
int n;
int count = 0;

do{
    scanf("%d", &n);
    for(int i = 1; i < n; i++){
        if(n % i == 0){
            count++;
        }
    }
}while( n > 0);

printf("%d", count);

  return 0;
}