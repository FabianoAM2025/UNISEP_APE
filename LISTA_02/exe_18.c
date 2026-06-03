//18) Solicite várias idades até o usuário digitar 0. Calcule a média das idades.
#include <stdio.h>

int main() {
    int idade;
    int soma = 0;
    int contador = 0;
    float media;

    do {
        printf("Digite uma idade (0 para encerrar): ");
        scanf("%d", &idade);

        if(idade != 0) {
            soma = soma + idade;
            contador++;
        }
    } while(idade != 0);

    if(contador > 0) {
        media = (float)soma / contador;
        printf("A media das idades e: %.1f\n", media);
    } else {
        printf("Nenhuma idade foi digitada.\n");
    }

    return 0;
}
