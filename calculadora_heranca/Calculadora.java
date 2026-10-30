package calculadora_heranca;

public class Calculadora {

    protected double valor1 = 0;
    protected double valor2 = 0;

    public Calculadora(double valor1, double valor2) {
        this.valor1 = valor1;
        this.valor2 = valor2;
    }

    public void somar() {
        System.out.println("Executar operação somar!");
    }

    public void multiplicar() {
        System.out.println("Executar operação multiplicar!");
    }

    public void subtrair() {
        System.out.println("Executar operação subtrair!");
    }

    public void dividir() {
        System.out.println("Executar operação dividir!");
    }
}

