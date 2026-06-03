//16) Faça um programa que peça números ao usuário até que ele digite 0.
// No final, mostre a soma de todos os números digitados.
#include <stdio.h>

int main() {
    int num;
    int soma = 0;

    do {
        printf("Digite um numero (0 para encerrar): ");
        scanf("%d", &num);
        soma = soma + num;
    } while(num != 0);

    printf("A soma total e: %d\n", soma);
    return 0;
}
