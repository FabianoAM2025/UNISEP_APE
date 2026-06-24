//7) Leia 10 números e mostre a média dos valores.
#include <stdio.h>

int main(){
    int num[10];
    int i;
    float soma = 0.0;
    float media;

    for (i = 0; i < 10; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &num[i]);
        soma += num[i];  // soma = soma + num[i];
    }
    media = soma / 10.0;
    printf("A media dos valores digitados e: %.2f\n", media);

    return 0;
}
