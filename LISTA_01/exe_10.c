/*
10) Cálculo de IMC
Leia peso e altura e calcule o IMC.
Classifique:

Abaixo do peso (< 18.5)

Normal (18.5–24.9)

Sobrepeso (25–29.9)

Obesidade (≥ 30)
*/
#include <sdtio.h>

int main(){

  float peso = 0;
    float altura = 0;
    float resultado = 0;

    printf("Digite seu peso: ");
    scanf("%f", &peso);
    printf("Digite sua altura: ");
    scanf("%f", &altura);

    resultado = peso / (altura * altura);  // Fórmula correta do IMC

    printf("Seu IMC é: %.2f\n", resultado);

    if (resultado < 18.5) {
        printf("Abaixo do peso\n");
    } else if (resultado >= 18.5 && resultado <= 24.9) {
        printf("Normal\n");
    } else if (resultado >= 25 && resultado <= 29.9) {
        printf("Sobrepeso\n");
    } else {
        printf("Obesidade\n");
    }

    return 0;
}
