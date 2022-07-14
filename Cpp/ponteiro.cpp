#include <iostream>

using namespace std;

// endereço por outra variável
int main() {
	int variavel01 = 5;
	int* ponteiro01;
	 
	cout << variavel01 << " | " << ponteiro01 << endl;
	
	ponteiro01 = &variavel01;
	cout << "Endereco armazenado.: " << ponteiro01 << "\nValor do ponteiro.: " << *ponteiro01 << endl;
	
	int variavel02 = *ponteiro01;
	cout << "Valor da Segunda variavel.: " << variavel02 << endl;
	
	*ponteiro01 = 30;
	cout << variavel01 << " | " << variavel02 << "|" << *ponteiro01 << endl;

	return 0;
}
