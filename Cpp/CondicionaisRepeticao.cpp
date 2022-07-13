#include <iostream>

using namespace std;

int main() {
	cout << "Situacao do aluno\n\n* Notas de 0 a 10\n";
	float nota01, nota02, frequencia;
	
	for (int i=0; i<1; i++) {
		do {
			cout << "\n\nDigite a nota 01.: ";
			cin >> nota01;
		} while (nota01 < 0 || nota01 > 10);
		
		do {
			cout << "Digite a nota 02.: ";
			cin >> nota02;
		} while (nota02 < 0 || nota02 > 10);
	
		do {
			cout << "Qual a frequencia do aluno.: ";
			cin >> frequencia;
		} while (frequencia < 0 || frequencia > 100);
		 	
		float media = (nota01 + nota02) / 2;
		cout << "Media.: " << media;
		
		if (media >= 6 && frequencia >= 75) {
			cout << "\tAPROVADO!";
		}
		else {
			cout << "\tREPROVADO!\nby.: " << ((media < 6) ? " Nota " : "") << ((frequencia < 75) ? " Falta " : "");
		}
	}
	
	return 0;
}
