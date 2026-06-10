/*
 7) Verificação de Triângulo
Leia três valores e verifique se podem formar um triângulo.
Caso formem, classifique como:
Equilátero
Isósceles
Escaleno
*/
#include <sdtio.h>

int main(){

  float num1, num2, num3, resultado;

    printf("Digite um valor: ");
    scanf("%f", &num1);
    printf("Digite um segundo valor: ");
    scanf("%f", &num2);
    printf("Digite um terceiro valor: ");
    scanf("%f", &num3);

    resultado = num1 + num2 + num3;


    if (num1 + num2 <= num3 || num2 + num3 <= num1 || num1 + num3 <= num2) {
        printf("Nao formam um triangulo\n");
    } else if (num1 == num2 && num2 == num3) {
        printf("O triangulo e Equilatero\n");
    } else if (num1 == num2 || num2 == num3 || num1 == num3) {
        printf("O triangulo e Isosceles\n");
    } else {
        printf("O triangulo e Escaleno\n");
    }
    printf("Soma: %.2f\n", resultado);

    return 0;
}
