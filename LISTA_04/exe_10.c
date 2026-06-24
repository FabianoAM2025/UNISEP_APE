//10)Escreva uma função que inverta uma um vetor de char[].
#include <stdio.h>
#include <string.h>

void inverter(char vetor[], int tamanho){
    int i, j;
    char temp;
    for (i = 0, j = tamanho - 1; i < j; i++, j--) {
        temp = vetor[i];
        vetor[i] = vetor[j];
        vetor[j] = temp;
    }
}
int main(){
    char palavra[100];
    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    int tamanho = strlen(palavra);
    inverter(palavra, tamanho);
    printf("Palavra invertida: %s\n", palavra);
    return 0;
}
