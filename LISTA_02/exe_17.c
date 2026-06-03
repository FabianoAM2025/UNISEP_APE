//17) Peça números até que o usuário digite um número negativo. Exiba quantos números foram digitados.
#include <stdio.h>

int main() {
    int num;
    int contador = 0;

    do {
        printf("Digite um numero (negativo para encerrar): ");
        scanf("%d", &num);

        if(num >= 0) {
            contador++;
        }
    } while(num >= 0);

    printf("Quantidade de numeros digitados: %d\n", contador);
    return 0;
}
