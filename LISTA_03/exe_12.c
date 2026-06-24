// 12) Leia um vetor de 6 posições e encontre o segundo maior valor.
#include <stdio.h>

int main() {
    int num[6];
    int i;
    int maior, segundo_maior;
    for (i = 0; i < 6; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &num[i]);
    }
    if (num[0] > num[1]) {
        maior = num[0];
        segundo_maior = num[1];
    } else {
        maior = num[1];
        segundo_maior = num[0];
    }
    for (i = 2; i < 6; i++) {
        if (num[i] > maior) {
            segundo_maior = maior;
            maior = num[i];
        } else if (num[i] > segundo_maior) {
            segundo_maior = num[i];
        }
    }
    printf("O segundo maior valor digitado e: %d\n", segundo_maior);
    return 0;
}
