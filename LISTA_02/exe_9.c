//9)Peça um número e mostre todos os números de 1 até ele.
#include <stdio.h>

int main(void) {
    int numero;

    printf("digite um numero:\n");
    if (scanf("%d", &numero) != 1) return 1;

    for (int i = 1; i <= numero; i++) {
        printf("%d\n", i);
    }

    return 0;
}
