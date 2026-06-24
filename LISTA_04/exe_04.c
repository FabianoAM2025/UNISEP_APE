//04) Escreva uma função que calcule o quadrado de um número.
#include <stdio.h>

int quadrado(int numero) {
    return numero * numero;
}
int main() {
    int n;
    printf("Digite um número: ");
    scanf("%d", &n);

    printf("O quadrado de %d é %d\n", n, quadrado(n));

    return 0;
