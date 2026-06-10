/*
15) Verificação de Maioridade para Votação
Leia a idade e informe:
•
Não pode votar (< 16)
•
Voto opcional (16–17 ou > 70)
•
Voto obrigatório (18–70)
*/
#include <sdtio.h>

int main(){

  float idade = 0;

	printf("Digite sua idade!\n");
	scanf("%f",&idade);

	if (idade >=18 && idade <= 70){
	   printf("Voto obrigatorio\n");
    }else if (idade >=16 && idade <=17 || idade >= 71){
       printf("Voto opcional\n");
    }else{
       printf("Nao pode votar ainda\n");
    }
	 	  return 0;
}
