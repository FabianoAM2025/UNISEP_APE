/*  6) Ano Bissexto
Leia um ano e informe se ele é bissexto ou não.
*/
#include <sdtio.h>

int main(){

  int ano;

    printf("Digite o ano: ");
    scanf("%i", &ano);

    printf("Anos bissextos a partir de %i:\n", ano);


    for(int i = ano; i <= 2026; i += 4) {

        if(i % 4 == 0) {
            printf("%i - BISSEXT0\n", i);
        }
    }

    return 0;
}
