#include <stdio.h>

int main() {
	int numero = 1;
	int suma_pares = 0;
	int cantidad_pares = 0;
	printf("Números del 1 al 10:\n");
	do {
		printf("%d ", numero);
		if (numero % 2 == 0) {
			suma_pares += numero;
			cantidad_pares++; 
		}
		
		numero++;
	} while(numero <= 10);
	
	float promedio_pares = (float)suma_pares / cantidad_pares;
	printf("\n\nPromedio de los números pares: %.2f\n", promedio_pares);
	printf("Números pares: ");
	for (int i = 2; i <= 10; i += 2) {
		printf("%d ", i);
	}
	printf("\n");
	
	return 0;
}
