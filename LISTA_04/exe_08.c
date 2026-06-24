//08)Crie uma função que verifique se um número é primo.
#include <stdio.h>
#include <stdbool.h>

bool eh_primo(int n) {
    if (n <= 1) {
        return false; // 0 e 1 nao sao primos
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if (eh_primo(num)) {
        printf("%d é primo.\n", num);
    } else {
        printf("%d não é primo.\n", num);
    }
    return 0;
}
