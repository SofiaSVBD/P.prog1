#include <stdio.h>

int main() {
	int matriz1[3][3], matriz2[3][3], resultado[3][3];
	
	// Ingresar la primera matriz
	printf("Ingresa los elementos de la primera matriz (3x3):\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("Elemento [%d][%d]: ", i, j);
			scanf("%d", &matriz1[i][j]);
		}
	}
	
	// Ingresar la segunda matriz
	printf("Ingresa los elementos de la segunda matriz (3x3):\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("Elemento [%d][%d]: ", i, j);
			scanf("%d", &matriz2[i][j]);
		}
	}
	
	// Multiplicar las matrices
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			resultado[i][j] = 0;
			for (int k = 0; k < 3; k++) {
				resultado[i][j] += matriz1[i][k] * matriz2[k][j];
			}
		}
	}
	
	// Mostrar la matriz resultante de forma gráfica
	printf("\nMatriz resultante:\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%4d ", resultado[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
