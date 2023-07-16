#include <stdio.h>

main() 
{
	printf("HANOI\n\n");
	hanoi(2, 'A', 'B', 'C');
}

void hanoi(int numero_discos, char torre_a, char torre_b, char torre_c) 
{
	if (numero_discos <= 0)
		return;
		
	hanoi(numero_discos - 1, torre_a, torre_c, torre_b);
	printf("Mover: %c -> %c\n", torre_a, torre_b);
	hanoi(numero_discos - 1, torre_c, torre_b, torre_a);
}
