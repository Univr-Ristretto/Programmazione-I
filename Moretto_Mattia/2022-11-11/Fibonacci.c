#include <stdio.h>
#define n 15

int main() {
    int Fibonacci_value[n];

    printf("%i \n",Fibonacci_value[0] = 1);
    printf("%i \n",Fibonacci_value[1] = 1);

    for(int i = 2; i < n; i++){
        Fibonacci_value[i] = Fibonacci_value[i-2] + Fibonacci_value[i-1];
        printf("%i \n", Fibonacci_value[i]);
    }
}