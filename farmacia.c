#include <stdio.h>

int main() {
	char nombreArticulo[50];
	float precioLista, subtotal, totalConDescuento, descuentoAplicado;
	int cantidad;
	float descuento = 0.15; // 15% de descuento
	
	// Ingreso de datos
	printf("Ingrese el nombre del art�culo: ");
	getchar(); // Limpia el buffer antes de gets
	fgets(nombreArticulo, sizeof(nombreArticulo), stdin);
	
	printf("Ingrese el precio de lista del art�culo: ");
	scanf("%f", &precioLista);
	
	printf("Ingrese la cantidad de unidades compradas: ");
	scanf("%d", &cantidad);
	
	// C�lculos
	subtotal = precioLista * cantidad;
	descuentoAplicado = subtotal * descuento;
	totalConDescuento = subtotal - descuentoAplicado;
	
	// Salida
	printf("\n===== TICKET DE COMPRA =====\n");
	printf("Art�culo: %s\n", nombreArticulo);
	printf("Precio unitario: $%.2f\n", precioLista);
	printf("Cantidad comprada: %d\n", cantidad);
	printf("Subtotal: $%.2f\n", subtotal);
	printf("Descuento (15%%): -$%.2f\n", descuentoAplicado);
	printf("TOTAL A PAGAR: $%.2f\n", totalConDescuento);
	printf("=============================\n");
	
	return 0;
}
