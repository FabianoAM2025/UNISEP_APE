//1) Verificação de Múltiplos
Leia dois números e verifique se o primeiro é múltiplo do segundo.

#include <sdtio.h>

int main(){

  float num1, num2;

    printf("Digite o primeiro valor: ");
    scanf("%f", &num1);

    printf("Digite o segundo valor: ");
    scanf("%f", &num2);

    if (num2 == 0) {
        printf("Erro: Divisao por zero nao permitida.\n");
    } else if (%(num1, num2) == 0.0f) {
        printf("%.2f e multiplo de %.2f.\n", num1, num2);
    } else {
        printf("%.2f nao e multiplo de %.2f.\n", num1, num2);
    }

    return 0;
}





}
