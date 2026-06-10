#include <stdio.h>

int main(){

	float notas[3];
	float media=0;

	printf("Digite a primeira nota:");
	scanf("%f",&notas[0]);


	printf("Digite a segunda nota:");
	scanf("%f",&notas[1]);


	printf("Digite a terceira nota:");
	scanf("%f",&notas[2]);

	media = (notas[0]+notas[1]+notas[2])/3;

	printf("A sua media e:%2.2f\n,",media);



}
