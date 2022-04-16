#include <stdio.h>
int main() {
	int fatorial(int valor);
	printf("Fatorial!");
	
	int numero;
	printf("\nDigite um numero: ");
	scanf("%i", &numero);
	
	int resultado;
	resultado = fatorial(numero);
	
	printf("Resultado.: %i", resultado);
	return 0;
}

int fatorial(int valor) {
	return valor < 0 ? valor : valor == 0 ? 1 : valor * fatorial(valor-1);
}
