//3)Crie uma função que receba um número e retorne:
// 1 se ele for par;
// 0 se ele for ímpar.
#include <stdio.h>

int par_ou_impar(int numero){
    if (numero % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}
int main(){
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);

    int resultado = par_ou_impar(n);
    printf("Resultado: %d\n", resultado);

    return 0;
    }
