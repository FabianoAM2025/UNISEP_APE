//4) Leia 6 números e mostre o maior valor.
#include <stdio.h>

int main() {
    int num[6];
    int i = 0;
    int maior = 0;

    for(i = 0; i < 6; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &num[i]);
    }
    for(i = 0; i < 6; i++) {
        if(num[i] > maior) {
            maior = num[i];
        }
    }
    printf("O maior numero digitado e: %d\n", maior);

    return 0;
}
