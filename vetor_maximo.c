#include <stdio.h>
#define TAM 10

int main(void) {
    int v[TAM];
    int i, max;

    printf("Digite %d valores inteiros:\n", TAM);
    for (i = 0; i < TAM; i++) {
        printf("Valor %d: ", i + 1);
        if (scanf("%d", &v[i]) != 1) {
            printf("Entrada invalida. Encerrando.\n");
            return 1;
        }
    }

    max = v[0];
    for (i = 1; i < TAM; i++) {
        if (v[i] > max) max = v[i];
    }

    printf("Maior valor: %d\n", max);
    return 0;
}
