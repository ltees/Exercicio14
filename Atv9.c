#include <stdio.h>

int main() {
    int matriz[3][3];

    // Preenchendo a matriz com valores arbitrários para demonstração
    int valor = 1;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matriz[i][j] = valor;
            valor++;
        }
    }

    printf("Endereços de cada posição da matriz:\n");

    // Imprimindo o endereço de cada posição da matriz
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Endereço de matriz[%d][%d]: %p\n", i, j, (void*)&matriz[i][j]);
        }
    }

    return 0;
}

