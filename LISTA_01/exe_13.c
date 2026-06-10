/* 13) Operação Matemática
Leia dois números e uma operação (+, -, *, /).
Realize a operação e exiba o resultado.
*/
#include <sdtio.h>

int main(){

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
