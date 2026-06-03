//19) Peça números até o usuário digitar 999. Mostre o maior número digitado.
#include <stdio.h>

int main() {
    int num;
    int maior =0;



    do {
        printf("Digite um numero (999 para encerrar): ");
        scanf("%d", &num);

        if(num > maior && num != 999) {
		 maior = num;

        }

    } while(num != 999);

    printf("O maior  numero digitado e: %d\n", maior);
    return 0;
}
