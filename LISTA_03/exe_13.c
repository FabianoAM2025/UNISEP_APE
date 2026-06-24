// 13) Leia um vetor e encontre o número que mais se repete.
#include <stdio.h>
#define N 10

int main() {
    int num[N];
    int i, j;
    int contagem, max_contagem;
    int valor_mais_repete;
    for (i = 0; i < N; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &num[i]);
    }
    max_contagem = 0;
    valor_mais_repete = num[0];
    for (i = 0; i < N; i++) {
        contagem = 0;
        for (j = 0; j < N; j++) {
            if (num[j] == num[i]) {
                contagem++;
            }
        }
        if (contagem > max_contagem) {
            max_contagem = contagem;
            valor_mais_repete = num[i];
        }
    }
    if (max_contagem == 1) {
        printf("Nenhum numero se repetiu no vetor.\n");
    } else {
        printf("O numero que mais se repete e: %d\n", valor_mais_repete);
        printf("Ele aparece %d vezes.\n", max_contagem);
    }
	       return 0;
}
