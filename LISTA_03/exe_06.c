//6) Leia 10 números e conte quantos são positivos.
#include <stdio.h>

int main() {
    int num[10];
    int i;
    int positivos = 0;

    for (i = 0; i < 10; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &num[i]);
    }
    for (i = 0; i < 10; i++) {
        if (num[i] > 0) {
            positivos++;
        }
    }
    printf("Quantidade de numeros positivos: %d\n", positivos);

    return 0;
}
