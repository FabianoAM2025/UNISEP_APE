//2) Cálculo de Salário com Bônus
//Leia o salário:
//Se maior que 3000 → bônus de 5%
//Caso contrário → bônus de 10%
//Exiba o salário final.

#include <sdtio.h>

int main(){

  float salario = 0;
    float salario_final;

    printf("Digite o valor do seu salario: ");
    scanf("%f", &salario);

    if (salario < 3000) {
        salario_final = salario * 0.05f;
        printf("salario a pagar: R$ %.2f + %.2f (5%% de bonus)\n",salario, salario_final);
    } else {
        salario_final = salario * 0.10f;
        printf("salario a pagar: R$ %.2f + %.2f (10%% de bonus)\n",salario, salario_final);
    }

    return 0;

	}

