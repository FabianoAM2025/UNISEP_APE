//11) Peça um número e calcule o fatorial dele.
#include <stdio.h>

int main() {
    int n, fat = 1;

    printf("Insira um valor: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        fat = fat * i;
    }

    printf("%d! = %d\n", n, fat);
    return 0;
}
