package calculadora_heranca;

public class Divisao extends Calculadora{

	public Divisao(double valor1, double valor2) {
		super(valor1, valor2);
	}

	public void dividir() {
		super.dividir();
		System.out.println("Resultado da Divisão: " + (valor1 / valor2));
		
	}

}
