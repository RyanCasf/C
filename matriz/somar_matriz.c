#include <stdio.h>

#define N 3
main()
{
	printf("Somar Matrizes\n\n");
	
	int matriz_A[N][N] = {{1,1,1},{1,1,1},{2,2,2}};
	int matriz_B[N][N] = {{1,1,1},{1,1,1},{1,1,1}};
	int matriz_resultante[N][N];
	
	somar_matriz(matriz_A, matriz_B, matriz_resultante);
	exibir_matriz(matriz_resultante);
}

void somar_matriz(int matriz_A[N][N], int matriz_B[N][N], int matriz_resultante[N][N])  
{
	int i, j;
	for (i=0; i<N; i++) {
		
		for (j=0; j<N; j++) {
			int soma = matriz_A[i][j] + matriz_B[i][j];
			matriz_resultante[i][j] = soma;
		}
	}
}

void exibir_matriz(int matriz_resultante[N][N])
{
	int i, j;
	for (i=0; i<N; i++) {
		
		for (j=0; j<N; j++) {
			printf(matriz_resultante[i][j]);
		}
		
		printf("\n");
	}
}
