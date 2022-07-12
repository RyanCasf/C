#include <iostream>
#include <math.h>

using namespace std;

float inputNumber() {
	int numero;
	cout << "Digite um numero: ";
	cin >> numero;
	
	return numero;
}

#define pi = 3.14;
float numero01 = inputNumber();
float numero02 = inputNumber();

// &numero01 muda o paramatro e o argumento
void escrever(string titulo, string simbolo, float total) {
	cout << titulo << numero01 << simbolo << numero02 << " = " << total;
}

int main() {
	escrever("\n\nSoma.: ", " + ", (numero01 + numero02));
	escrever("\nSubtracao.: ", " - ", (numero01 - numero02));
	escrever("\nDivisao.: ", " / ", (numero01 / numero02)); // /0, breaks
	escrever("\nMultiplicacao.: ", " * ", (numero01 * numero02));
	escrever("\nPotencia.: ", " ^ ", pow(numero01, numero02));
	
	return 0;
}
