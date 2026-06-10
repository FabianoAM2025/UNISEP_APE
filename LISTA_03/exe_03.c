//3) Leia 8 números e calcule a soma de todos os elementos do vetor.
#include <stdio.h>

int main() {
    int num[8];
    int i = 0;
    int soma = 0;

    for(i = 0; i < 8; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &num[i]);
    }
    for(i = 0; i < 8; i++) {
        soma = soma + num[i];
    }
		printf("A soma dos numeros sao: %d\n", soma);

    return 0;
}
