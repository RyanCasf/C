#include <iostream>

int main() {
	// saída paadrão			break line
	std::cout << "Ola mundo!\n" << std::endl;
	return 0;
}

int variaveis() {
	bool logico = false; 	// 1 byte
	char simbolo = 'a';		// 1 byte
	int inteiro = 0;		// 4 byte
	double realG = 0.0;		// 8 byte
	float realP = 1.9;		// 4 byte
	
	std::cout << logico	 << std::endl;
	std::cout << simbolo << std::endl;
	std::cout << inteiro << std::endl;
	std::cout << realG	 << std::endl;
	std::cout << realP 	 << std::endl;
	
	return 0;
}
