//Some apenas os números ímpares entre 1 e 100.
#include <stdio.h>

int main() {
    int i;
    int resultado = 0;

    for(i = 1; i <= 100; i += 2) {
        resultado++;
    }

    printf("Quantidade de numeros impares entre 1 e 100: %d\n", resultado);
    return 0;
}
