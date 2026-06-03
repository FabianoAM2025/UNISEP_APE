//12) Conte quantos números pares existem entre 1 e 50.
#include <stdio.h>

int main() {
    int i;
    int resultado = 0;

    for(i = 2; i <= 50; i += 2) {
        resultado++;
    }

    printf("Quantidade de numeros pares entre 1 e 50: %d\n", resultado);
    return 0;
}
