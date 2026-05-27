//8) Solicite um número ao usuário e exiba a tabuada dele (de 1 a 10).
#include <stdio.h>

int main(){
    int numero;

    printf("digite um numero da tabuada:\n");
    scanf("%i", &numero);

    for(int i = 1; i <= 10; i++){
        printf("%i x %i = %i\n", numero, i, numero * i);
    }

    return 0;
}
