package calculadora_heranca;

public class Multiplicacao extends Calculadora {

    public Multiplicacao(double valor1, double valor2) {
        super(valor1, valor2);
    }

    
    public void multiplicar() {
    	super.multiplicar();
        System.out.println("Resultado da Multiplicação: " + (valor1 * valor2));
    }
}