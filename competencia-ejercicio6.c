#include <stdio.h>
#include <string.h>

#define MAX 200

void analizarOracion(char oracion[], int resultados[]);

int main() {
	char oracion[MAX];
	int resultados[3];
	
	printf("Ingrese una oracion: ");
	fgets(oracion, sizeof(oracion), stdin);
	oracion[strcspn(oracion, "\n")] = '\0'; 
	
	analizarOracion(oracion, resultados);
	
	printf("\nResultados:\n");
	printf("Total de palabras: %d\n", resultados[0]);
	printf("Palabras que terminan en vocal: %d\n", resultados[1]);
	printf("Palabras con más de 5 letras: %d\n", resultados[2]);
	
	return 0;
}

void analizarOracion(char oracion[], int resultados[]) {
	char palabra[50];
	int i = 0, j = 0;
	int totalPalabras = 0;
	int terminanEnVocal = 0;
	int mayoresA5 = 0;
	
	while (1) {
		char c = oracion[i];
		
		if (c != ' ' && c != '\0') {
			palabra[j++] = c;
		} else if (j > 0) {
			palabra[j] = '\0';
			
			totalPalabras++;
			
			char ultima = palabra[j - 1];
			
			if (ultima == 'a' || ultima == 'e' || ultima == 'i' || ultima == 'o' || ultima == 'u' ||
				ultima == 'A' || ultima == 'E' || ultima == 'I' || ultima == 'O' || ultima == 'U') {
				terminanEnVocal++;
			}
			
			if (j > 5) {
				mayoresA5++;
			}
			
			j = 0; 
		}
		
		if (c == '\0')
			break;
		
		i++;
	}
	
	resultados[0] = totalPalabras;
	resultados[1] = terminanEnVocal;
	resultados[2] = mayoresA5;
}

