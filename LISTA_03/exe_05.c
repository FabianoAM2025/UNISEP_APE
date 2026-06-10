//5) Leia 6 números e mostre o menor valor.
#include <stdio.h>

int main() {
    int num[6];
    int i = 0;
    int menor;

    for(i = 0; i < 6; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &num[i]);
    }
    menor = num[0];
    for(i = 1; i < 6; i++) {
        if(num[i] < menor) {
            menor = num[i];
        }
    }
    printf("O menor numero digitado e: %d\n", menor);

    return 0;
}
