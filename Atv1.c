#include <stdio.h>

int main() {
    int inteiro = 10;
    float real = 3.14;
    char caractere = 'A';

    int *ptrInteiro;
    float *ptrReal;
    char *ptrChar;

    ptrInteiro = &inteiro;
    ptrReal = &real;
    ptrChar = &caractere;

    printf("Valores originais:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.2f\n", real);
    printf("Char: %c\n\n", caractere);

    // Modificando os valores usando os ponteiros
    *ptrInteiro = 20;
    *ptrReal = 6.28;
    *ptrChar = 'B';

    printf("Valores modificados:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.2f\n", real);
    printf("Char: %c\n", caractere);

    return 0;
}
