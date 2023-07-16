#include <stdio.h>

main()
{
	printf("INVERTER LISTA\n\n");
	
	int quantidade_lista = 11;
	int lista[] = {0,1,2,3,4,5,6,7,8,9,10};
	
	imprimir_lista(lista, quantidade_lista);
	printf("\n");
	
	interter_lista(lista, quantidade_lista);
	imprimir_lista(lista, quantidade_lista);
}

void interter_lista(int lista[], int quantidade_lista) 
{
	int i = 0;
	int j = quantidade_lista - 1;
	
	while (i<quantidade_lista/2) {
		int elemento_inicio_temp = lista[i];
		int elemento_fim_temp = lista[j];
		
		lista[i] = elemento_fim_temp;
		lista[j] = elemento_inicio_temp;
		
		i++;
		j--;
	}
}

void imprimir_lista(int lista[], int quantidade_lista)
{
	printf("%d", lista[0]);
	
	if (quantidade_lista == 1)
		return;
	
	int i=1;
	while (i<quantidade_lista) {
		printf(", %d", lista[i]);
		i++;
	}
}
