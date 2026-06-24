//05) Faça uma função que receba três números e retorne o maior deles.
#include <stdio.h>

int maior(int a, int b, int c) {
    int m = a;
    if (b > m) {
        m = b;
    }
    if (c > m) {
        m = c;
    }
    return m;
}
int main() {
    int x, y, z;
    printf("Digite três números: ");
    scanf("%d %d %d", &x, &y, &z);
    printf("O maior número é: %d\n", maior(x, y, z));

    return 0;
    }
