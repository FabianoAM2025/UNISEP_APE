//12)Desenvolva uma função que calcule o MDC (Máximo Divisor Comum) entre dois números usando o algoritmo de Euclides.
#include <stdio.h>

int mdc(int a, int b){
    while (b != 0) {
        int resto = a % b;
        a = b;
        b = resto;
    }
    return a;
}
int main(){
    int x, y;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &x, &y);
    printf("O MDC de %d e %d é: %d\n", x, y, mdc(x, y));
    return 0;
}
