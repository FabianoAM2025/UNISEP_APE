//1) Leia 5 números inteiros e armazene em um vetor. Exiba todos os valores.
#include <stdio.h>

int main(){
    int num[5];
    int i = 0;

    // Ler 5 números
    for(i = 0; i < 5; i++){
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &num[i]);
    }

    // Exibir todos os valores
    printf("Os numeros sao:\n");
    for(i = 0; i < 5; i++){
        printf("%d\n", num[i]);
    }

    return 0;
}
