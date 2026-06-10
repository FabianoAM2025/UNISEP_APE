//2) Leia 10 números e mostre apenas os números pares.
#include <stdio.h>

int main() {
    int num[10];
    int i = 0;


    for(i = 0; i < 10; i++) {

        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &num[i]);
    }

		printf("Os numeros pares sao:\n");

    for(i = 0; i < 10; i++) {
        if(num[i] % 2 == 0) {

            printf("%d\n", num[i]);
        }
    }

    return 0;
}
