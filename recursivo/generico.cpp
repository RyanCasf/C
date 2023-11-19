#include <stdio.h>

template<typename Generico>
Generico menor(Generico valorA, Generico valorB) {
	if (valorA < valorB) {
		return valorA;
	}
	
	return valorB;
}

main() {
	int valorInteiroA = 4;
	int valorInteiroB = 6;
	int menorInteiro = menor<int>(valorInteiroA,valorInteiroB);
	printf("(INTEIRO) Valor menor entre %d e %d: %d \n", valorInteiroA, valorInteiroB, menorInteiro);
	
	double valorFlutuanteA = 0.10;
	double valorFlutuanteB = 1.01;
	double menorFlutuante = menor<double>(valorFlutuanteA, valorFlutuanteB);
	printf("(FLUTUANTE) Valor menor entre %f e %f: %f \n", valorFlutuanteA, valorFlutuanteB, menorFlutuante);
	
	char valorCaractereA = 'A';
	char valorCaractereB = 'B';
	char menorCaractere = menor<char>(valorCaractereA, valorCaractereB);
	printf("(CARACTERE) Valor menor entre %c e %c: %c \n", valorCaractereA, valorCaractereB, menorCaractere);
	
	return 0;
}
