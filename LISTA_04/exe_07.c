//07)Implemente uma função para calcular o fatorial de um número.
#include <stdio.h>

long long fatorial(int n) {
    long long resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}
int main() {
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("Nao existe fatorial de numero negativo.\n");
    } else {
        printf("O fatorial de %d é %lld\n", num, fatorial(num));
    }
    return 0;
}
