//14) Classificação de Nota com Conceito
/*
 Leia uma nota de 0 a 10 e classifique:
•
A (>= 9)
•
B (7 – 8.9)
•
C (5 – 6.9)
•
D (< 5)
*/
#include <sdtio.h>

int main(){

  float nota = 0;

	printf("Digite sua nota!\n");
	scanf("%f",&nota);

	if (nota >= 9){
        printf("A\n");
    }else if (nota >= 5 && nota <= 6.9){
        printf("B\n");
    }else if (nota >=7 && nota <= 8.9){
        printf("C\n");
    }else {
        printf("D\n");
    }

	  return 0;
}
