#include <stdio.h>

// Função para encontrar o maior e o menor valor entre dois inteiros
void encontrarMaiorMenor(int *ptrA, int *ptrB) {
    if (*ptrA < *ptrB) {
        int temp = *ptrA;
        *ptrA = *ptrB;
        *ptrB = temp;
    }
}

int main() {
    int a, b;

    printf("Digite o valor de 'a': ");
    scanf("%d", &a);

    printf("Digite o valor de 'b': ");
    scanf("%d", &b);

    printf("Valores antes: a = %d, b = %d\n", a, b);

    // Chamando a função para encontrar o maior e o menor valor
    encontrarMaiorMenor(&a, &b);

    printf("Maior valor em 'a': %d\n", a);
    printf("Menor valor em 'b': %d\n", b);

    return 0;
}
