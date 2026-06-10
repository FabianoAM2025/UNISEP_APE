/* 5) Cálculo de Desconto
	Leia o valor de uma compra:
	•
	Se for maior que R$100 → desconto de 10%
	•
	Caso contrário → desconto de 5%
	Exiba o valor final.

*/
#include <sdtio.h>

int main(){

  float valor = 0;
    float valor_final;

    printf("Digite o valor da sua compra: ");
    scanf("%f", &valor);

    if (valor < 100) {
        valor_final = valor * 0.95;  // 5% de desconto
        printf("Valor a pagar: R$ %.2f (5%% de desconto)\n", valor_final);
    } else {
        valor_final = valor * 0.90;  // 10% de desconto
        printf("Valor a pagar: R$ %.2f (10%% de desconto)\n", valor_final);
    }

    return 0;
}
