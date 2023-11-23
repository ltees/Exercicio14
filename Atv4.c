#include <stdio.h>

// Função para trocar o conteúdo das variáveis
void trocarValores(int *ptrA, int *ptrB) {
    int temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;
}

int main() {
    int a, b;

    printf("Digite o valor de 'a': ");
    scanf("%d", &a);

    printf("Digite o valor de 'b': ");
    scanf("%d", &b);

    printf("Valores antes da troca: a = %d, b = %d\n", a, b);

    // Chamando a função para trocar os valores das variáveis
    trocarValores(&a, &b);

    printf("Valores depois da troca: a = %d, b = %d\n", a, b);

    return 0;
}
