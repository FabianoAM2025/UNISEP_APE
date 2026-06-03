//10) Peça dois números e mostre todos os números entre eles.
#include <stdio.h>

int main(void) {
    int num1, num2, i;

    printf("Digite um numero:\n");
    scanf("%i", &num1);

    printf("Digite mais um numero:\n");
    scanf("%i", &num2);

    if (num1 < num2) {

        for (i = num1 + 1; i < num2; i++) {
            printf("%d\n", i);
        }
    } else if (num2 < num1) {

        for (i = num1 - 1; i > num2; i--) {
            printf("%d\n", i);
        }
    } else {
        printf("Os numeros sao iguais, nao ha numeros entre eles.\n");
    }

    return 0;
}
