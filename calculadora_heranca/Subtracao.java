package calculadora_heranca;

public class Subtracao extends Calculadora {

	public Subtracao(double valor1, double valor2) {
		super(valor1, valor2);
	}

	public void subtrair() {
		super.subtrair();
		System.out.println("Resultado da Subtração: " + (valor1 - valor2));
		
	}

}
