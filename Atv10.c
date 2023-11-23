#include <stdio.h>

int main() {
    // Criando um array de inteiros com 5 elementos
    int array[5];

    // Ponteiro para percorrer o array
    int *ptr = array;

    // Lendo o array do teclado
    printf("Digite 5 valores inteiros:\n");
    for (int i = 0; i < 5; ++i) {
        scanf("%d", ptr + i);
    }

    // Imprimindo o dobro de cada valor lido
    printf("O dobro de cada valor lido é:\n");
    for (int i = 0; i < 5; ++i) {
        printf("%d\n", *(ptr + i) * 2);
    }

    return 0;
}

