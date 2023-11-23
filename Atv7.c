#include <stdio.h>

// Função para calcular a soma de dois números e armazenar o resultado em A
void calcularSoma(int *ptrA, int b) {
    *ptrA = *ptrA + b;
}

int main() {
    int a, b;

    printf("Digite o valor de 'a': ");
    scanf("%d", &a);

    printf("Digite o valor de 'b': ");
    scanf("%d", &b);

    printf("Valores antes da função: a = %d, b = %d\n", a, b);

    // Chamando a função para calcular a soma e armazenar em 'a'
    calcularSoma(&a, b);

    printf("Valores depois da função: a = %d, b = %d\n", a, b);

    return 0;
}
