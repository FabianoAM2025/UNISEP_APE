// 10) Leia 10 números e ordene o vetor em ordem crescente.
#include <stdio.h>

int main() {
    int num[10];
    int i, j, aux;
    for (i = 0; i < 10; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &num[i]);
    }
    for (i = 0; i < 9; i++) {          // 9 = 10 - 1
        for (j = 0; j < 9 - i; j++) {
            if (num[j] > num[j + 1]) {
                // Troca num[j] e num[j+1]
                aux = num[j];
                num[j] = num[j + 1];
                num[j + 1] = aux;
            }
        }
    }
    printf("Vetor em ordem crescente:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", num[i]);
    }
    printf("\n");

    return 0;
}
