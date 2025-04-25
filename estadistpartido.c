
#include <stdio.h>
	
	int main() {
	int local, visitante, victorias_visitante = 0, total_partidos = 0;
	char continuar;
	
	printf("¿Desea ingresar un resultado? (s/n): ");
	scanf(" %c", &continuar);

	while (continuar == 's' || continuar == 'S') {
		
	
		printf("Ingrese el resultado del equipo local: ");
		scanf("%d", &local);
		printf("Ingrese el resultado del equipo visitante: ");
		scanf("%d", &visitante);
		
		if (local < 0 || visitante < 0) {
			printf("Error: Los resultados no pueden ser negativos.\n");
			continue; 
		}
		
		total_partidos++;
		if (visitante > local) {
			victorias_visitante++;
		}
		
		printf("¿Desea ingresar otro resultado? (s/n): ");
		scanf(" %c", &continuar); 
		
	}
	
	if (total_partidos > 0) {
		float probabilidad = (float)victorias_visitante / total_partidos;
		printf("\nProbabilidad de que gane el visitante: %.2f\n", probabilidad);
	} else {
		printf("\nNo se ingresaron resultados de partidos.\n");
	}
	
	return 0;
}
