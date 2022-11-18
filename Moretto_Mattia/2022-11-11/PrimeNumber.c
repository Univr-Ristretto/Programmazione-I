#include <stdio.h>
#define len 15
#define n 50

int main() {
    int PrimeNumber[len];
    int index = 0;
        for (int TestNum = 2; TestNum < n; TestNum++ ){
                int Primo = 1;
                for(int DivNum = 2; DivNum < TestNum-1; DivNum++){
                    if(TestNum % DivNum == 0){
                        Primo = 0; 
                    }
                }
                if(Primo == 1){
                    PrimeNumber[index] = TestNum;
                    printf("%d,", PrimeNumber[index]);
                    index++;
                }
            }  
}