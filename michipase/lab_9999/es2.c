// Una stringa è detta palindroma se è uguale quando letta nei due versi: anna, radar, abbcbba, ecc..
// Scrivere un programma C composto dalle seguenti funzioni:
// - leggi(): che richiede all’utente di inserire una stringa di al massimo 80 caratteri.
// - palindroma(): che verifica se la stringa inserita è palindroma.
// - main(): che richiama le due funzioni precedenti e stampa il risultato.
// La funzione palindroma() deve essere implementata in modo ricorsivo. Una stringa è palindroma se:
// - Caso base: la stringa è vuota, oppure ha un solo carattere.
// - Passo ricorsivo: è composta da un primo ed ultimo carattere uguali che racchiudono una stringa ancora palindroma.



#include <stdio.h>
#include <string.h>
#define N 80

char str[N];

void leggi() {
    scanf("%s", str);
}

int palindrome(long int i, long int j) {
    // if current i is greater than j (or are equal), it means the half word is reached and that the word is palindrome
    if ((i > j) || (i == j)) return 1;

    // otherwise, if the 2 letters are the same i can increment the values and repeat the process
    if (str[i] == str[j]) {
        i++;
        j--;
        return palindrome(i, j);
    };

    // if the letters are different the word is not palindrome
    return 0;
}

int main() {
    leggi();
    printf("%i",palindrome(0, strlen(str) -1));
}