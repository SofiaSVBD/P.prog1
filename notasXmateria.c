#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	int legajo;
	char apellido[30];
	char nombre[30];
	int nota;
} Alumno;

int main() {
	const char* materias[] = {
		"Matematica",
			"Programacion",
			"Arquitectura",
			"Organizacion Empresarial",
			"Ingles"
	};
	
	int opcion;
	
	do {
		// Menú de materias
		printf("MENU DE MATERIAS\n");
		printf("1. Matematica\n");
		printf("2. Programacion\n");
		printf("3. Arquitectura\n");
		printf("4. Organizacion Empresarial\n");
		printf("5. Ingles\n");
		printf("0. Salir\n\n");
		
		printf("Seleccione una materia (1-5) o 0 para salir: ");
		scanf("%d", &opcion);
		getchar(); // Limpiar buffer
		
		if (opcion >= 1 && opcion <= 5) {
			const char* materia = materias[opcion - 1];
			int cantidad;
			int aprobados = 0, desaprobados = 0, regulares = 0, promocionados = 0;
			
			printf("Ingrese la cantidad de alumnos para %s: ", materia);
			scanf("%d", &cantidad);
			getchar();
			
			printf("\n====== LISTADO DE NOTAS - %s ======\n", materia);
			printf("%-10s %-15s %-15s %-5s\n", "Legajo", "Apellido", "Nombre", "Nota");
			
			for (int i = 0; i < cantidad; i++) {
				Alumno a;
				printf("\nAlumno %d:\n", i + 1);
				printf("N° de legajo: ");
				scanf("%d", &a.legajo);
				getchar();
				
				printf("Apellido: ");
				fgets(a.apellido, sizeof(a.apellido), stdin);
				strtok(a.apellido, "\n");
				
				printf("Nombre: ");
				fgets(a.nombre, sizeof(a.nombre), stdin);
				strtok(a.nombre, "\n");
				
				printf("Nota: ");
				scanf("%d", &a.nota);
				
				printf("%-10d %-15s %-15s %-5d\n", a.legajo, a.apellido, a.nombre, a.nota);
				
				if (a.nota >= 8) {
					promocionados++;
					aprobados++;
				} else if (a.nota >= 6) {
					regulares++;
					aprobados++;
				} else {
					desaprobados++;
				}
			}
			
			printf("\nResumen:\n");
			printf("Aprobados: %d\n", aprobados);
			printf("Desaprobados: %d\n", desaprobados);
			printf("Regulares: %d\n", regulares);
			printf("Promocionales: %d\n", promocionados);
		} else if (opcion == 0) {
			printf("Saliendo del programa...\n");
		} else {
			printf("Opción no válida. Intente de nuevo.\n");
		}
		
		printf("\n");
		
	} while (opcion != 0);
	
	return 0;
}

