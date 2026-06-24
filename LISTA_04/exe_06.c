//6)Crie uma função que receba uma temperatura em Celsius e retorne o valor em Fahrenheit.
#include <stdio.h>

float celsius_para_fahrenheit(float celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}
int main() {
    float tempC;
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &tempC);

    float tempF = celsius_para_fahrenheit(tempC);
    printf("%.2f °C equivalem a %.2f °F\n", tempC, tempF);

    return 0;
}
