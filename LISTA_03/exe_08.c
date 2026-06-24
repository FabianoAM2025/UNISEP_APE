//8) Leia 10 números e exiba apenas os valores maiores que a média.
#include <stdio.h>

int main() {
    int num[10];
    int i;
    float soma = 0.0;
    float media;
    for (i = 0; i < 10; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &num[i]);
        soma += num[i];
    }
    media = soma / 10.0;
    printf("Media dos valores: %.2f\n", media);
    printf("Valores maiores que a media:\n");
    for (i = 0; i < 10; i++) {
        if (num[i] > media) {
            printf("%d\n", num[i]);
        }
    }

    return 0;
}
