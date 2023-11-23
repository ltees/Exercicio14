#include <stdio.h>

// Função que retorna a soma do dobro de A e B e atualiza A e B com seus dobros
int somaDobro(int *a, int *b) {
    *a = 2 * (*a);  // Atualiza A com o dobro de A
    *b = 2 * (*b);  // Atualiza B com o dobro de B
    return (*a + *b);  // Retorna a soma do dobro de A e B
}

int main() {
    int A, B;

    // Leitura dos valores A e B
    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    // Chamada da função e exibição do resultado
    int resultado = somaDobro(&A, &B);
    printf("A soma do dobro de A e B é: %d\n", resultado);

    // Exibição dos valores atualizados de A e B
    printf("A agora é: %d\n", A);
    printf("B agora é: %d\n", B);

    return 0;
}
