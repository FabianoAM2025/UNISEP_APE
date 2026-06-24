//11)Crie uma função que conte quantas vogais existem em uma string.
#include <stdio.h>
#include <string.h>

int contar_vogais(const char str[]) {
    int contador = 0;
    for (int i = 0; i < strlen(str); i++) {
        char c = str[i];
        if (c == 'a' || c == 'A' ||
            c == 'e' || c == 'E' ||
            c == 'i' || c == 'I' ||
            c == 'o' || c == 'O' ||
            c == 'u' || c == 'U') {
            contador++;
        }
    }
    return contador;
}
int main() {
    char texto[200];
    printf("Digite uma string: ");
    fgets(texto, sizeof(texto), stdin);
    texto[strcspn(texto, "\n")] = '\0';
    printf("Numero de vogais: %d\n", contar_vogais(texto));

    return 0;
}
