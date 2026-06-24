//09)Faça uma função que receba um vetor e seu tamanho e retorne a média dos elementos.
#include <stdio.h>

float media(int vetor[], int tamanho){
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }
    return (float)soma / tamanho;
}
int main(){
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    int v[n];
    printf("Digite %d elementos:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
    printf("A media dos elementos e: %.2f\n", media(v, n));

    return 0;
}
