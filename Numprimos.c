#include <stdio.h>

int main() {
	int limite, i, j, primo;
	
	printf("Ingrese el numero limite de busqueda: \n");
	scanf("%d", &limite);
	
	printf("Numeros primos desde 1 a %d: \n",limite);
	
	for (i = 1; i <= limite; i++) {
		if (i < 2);
		
		primo=1;
		
		for(j =2; j*j<=i; j++){
			if(i%j ==0) {
				primo=0;
				break;
			}
		}
		if(primo) {
			printf("%d ", i);
		}
	}
	
	printf("\n");
	return 0;
}
