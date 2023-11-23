#include <stdio.h>

int main() {
    int a, b;

    // Supondo que os endereços sejam comparáveis usando operador relacional "<"
    // Endereços de variáveis locais geralmente estão na stack e podem ser comparados
    // mas isso pode não ser verdade em todos os casos, especialmente em sistemas complexos
    // ou situações específicas de otimização do compilador.

    // Atribuindo valores arbitrários para as variáveis
    a = 10;
    b = 20;

    printf("Endereço de 'a': %p\n", (void*)&a);
    printf("Endereço de 'b': %p\n", (void*)&b);

    // Comparando endereços e exibindo o maior
    if (&a < &b) {
        printf("O endereço de 'b' (%p) é maior.\n", (void*)&b);
    } else {
        printf("O endereço de 'a' (%p) é maior.\n", (void*)&a);
    }

    return 0;
}
