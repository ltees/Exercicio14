#include <stdio.h>

int main() {
    int a, b;

    printf("Digite o valor de 'a': ");
    scanf("%d", &a);

    printf("Digite o valor de 'b': ");
    scanf("%d", &b);

    printf("Endereço de 'a': %p\n", (void*)&a);
    printf("Endereço de 'b': %p\n", (void*)&b);

    // Comparando endereços e exibindo o conteúdo do maior endereço
    if (&a < &b) {
        printf("Conteúdo do maior endereço ('b'): %d\n", b);
    } else {
        printf("Conteúdo do maior endereço ('a'): %d\n", a);
    }

    return 0;
}
