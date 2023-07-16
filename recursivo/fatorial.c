#include <stdio.h>

main() 
{
	int entrada_numero = 4;
	
	printf("Fatorial em loop de %d!: %d", entrada_numero, fatorial_loop(entrada_numero));
	printf("\nFatorial recursivo de %d!: %d", entrada_numero, fatorial_recursivo(entrada_numero));	
}

int fatorial_recursivo(int numero) 
{
	if (numero <= 1) 
		return 1;
	
	return numero * fatorial_recursivo(numero - 1);
}

int fatorial_loop(int numero) 
{
	if (numero <= 1)
		return 1;
	
	int total = 1;
	
	while (numero > 1) {
		numero--;
		total = total + (total * numero);
	}
	
	return total;
}
