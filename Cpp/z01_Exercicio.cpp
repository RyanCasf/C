#include <iostream>
#include <math.h>

using namespace std;

void funcaoSegundoGrau() {
	float a,b,c;
	
	do {
		cout << "Digite o valor de A (a>0).: ";
		cin >> a;
	} while (a == 0);
	
	cout << "Digite o valor de B.: ";
	cin >> b;
	
	cout << "Digite o valor de C.: ";
	cin >> c;
	
	double delta = ((b*b) - 4 * a * c);
	double x1 = (-b + sqrt(delta)) / (2*a);
	double x2 = (-b - sqrt(delta)) / (2*a);
	
	cout << "Delta.: " << delta << "\nX'.: " << x1 << "\nX''.: " << x2;
}

void fatorialControle() {
	int numero;
	cout << "Digite o numero do fatorial.: ";
	cin >> numero;
	
	long total = 1;
	for (int i=1; i<=numero; i++) {
		total *= i;
	}
	
	cout << "Fatorial.: " << total;
}

int main() {
	int opcao = 0;
	do {
		cout << "\n\nSelecione uma das opcoes!\n\n0. Sair\n1. Funcao Quadrada\n2. Fatorial\nOpcao.:";
		cin >> opcao;
		
		switch(opcao) {
			case 0:
				cout << "Saindo...";
				break;
				
			case 1:
				funcaoSegundoGrau();
				break;
				
			case 2:
				fatorialControle();
				break;
				
			default:
				cout << "Opcao invalida!";
		}
	} while (opcao != 0);
	
	return 0;
}
