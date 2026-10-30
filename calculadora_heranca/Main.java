package calculadora_heranca;

public class Main {

    public static void main(String[] args) {

        Soma somar = new Soma(10, 20);
        somar.somar();

        Multiplicacao multiplicar = new Multiplicacao(10, 20);
        multiplicar.multiplicar();

        Subtracao subtrair = new Subtracao(100, 20);
        subtrair.subtrair();

        Divisao dividir = new Divisao(100, 20);
        dividir.dividir();
    }
}
