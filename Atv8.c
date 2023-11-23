#include <stdio.h>

int main() {
    // Criando um array de float com 10 elementos
    float array[10];

    // Preenchendo o array (isso é opcional para o propósito deste exemplo)
    for (int i = 0; i < 10; ++i) {
        array[i] = i * 1.1;
    }

    // Imprimindo o endereço de cada posição do array
    for (int i = 0; i < 10; ++i) {
        printf("Endereço do elemento %d: %p\n", i, (void*)&array[i]);
    }

    return 0;
}
