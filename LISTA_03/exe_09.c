// 9) Leia 10 números e substitua os negativos por zero.
#include <stdio.h>

int main() {
    int num[10];
    int i;
    for (i = 0; i < 10; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &num[i]);
    }
    for (i = 0; i < 10; i++) {
        if (num[i] < 0) {
            num[i] = 0;
        }
    }
    printf("Vetor apos substituicao:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", num[i]);
    }
    printf("\n");
    return 0;
}
