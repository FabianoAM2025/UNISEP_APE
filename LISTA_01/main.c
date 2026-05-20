1)Leia dois números e verifique se o primeiro é múltiplo do segundo.
#include <stdio.h>

int main(){


  int num1, num2;

    printf("Digite o primeiro valor: ");
    scanf("%i", &num1);

    printf("Digite o segundo valor: ");
    scanf("%i", &num2);

	resultado = num1 % num2;

    if (resultado == 0) {
        printf("Erro: Divisao por zero nao permitida.\n");
    } else if (%(num1, num2) == 0.0i) {
        printf("%.2i e multiplo de %.2i.\n", num1, num2);
    } else {
        printf("%.2i nao e multiplo de %.2i.\n", num1, num2);
    }

    return 0;
}

-----------------------------------------------
2)Cálculo de Salário com Bônus Leia o salário:
Se maior que 3000 → bônus de 5%
Caso contrário → bônus de 10%
Exiba o salário final.
-----------------------------------------------
#include <stdio.h>

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
-------------------------------------------------
3) Operação Matemática
Leia dois números e uma operação (+, -, *, /).
Realize a operação e exiba o resultado.
-------------------------------------------------
#include <stdio.h>

int mai()}

	float num1,num2;

	char op;


	printf("Digite o primeiro valor:");
	scanf("%f", &num1);

	printf("Digite o segundo valor:");
	scanf("%f", &num2);


	printf("Digite um operador matematico (-,+,*,/:");
	scanf("%s", &op);

	switch(op){

	case'+':
		printf("%.2f + %.2f = %.2f",num1,num2, num1 + num2);

	break;

	case'-':
		printf("%.2f - %.2f = %.2f",num1,num2, num1 - num2);

	break;

	case'*':
		printf("%.2f * %.2f = %.2f",num1,num2, num1 * num2);

	break;

	case'/':
		printf("%.2f / %.2f = %.2f",num1,num2, num1 / num2);

	break;


	default:
		printf("Opcao invalida");

	}

   }
