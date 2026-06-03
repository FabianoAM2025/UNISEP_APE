//14) Peça um número e mostre a contagem regressiva até 0.
#include <stdio.h>


int main() {
    int i;

    printf("Digite um numero de 0 a 100: \n");
    scanf("%d", &i);

    for(; i >= 0; i--) {
        printf("%d\n", i);
    }

    return 0;
}
