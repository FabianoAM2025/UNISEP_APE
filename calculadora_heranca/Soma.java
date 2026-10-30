package calculadora_heranca;

public class Soma extends Calculadora {

    public Soma(double valor1, double valor2) {
        super(valor1, valor2);
    }

   
    public void somar() {
    	super.somar();
        System.out.println("Resultado da Soma:" + (valor1 + valor2));
    }
}
