#include <stdio.h>

float promedio(int a, int b) {
	return (float)(a + b) / 2;
}
int main() {
	int num1, num2;
	char nombre[50];
	
	printf("Ingrese su primer nombre: ");
	scanf("%s", nombre);
	
	printf("Ingrese el primer número entero: ");
	scanf("%d", &num1);
	printf("Ingrese el segundo número entero: ");
	scanf("%d", &num2);

	float prom = promedio(num1, num2);

	printf(nombre);
	printf("\n");
	printf("Los números que ingresaste son: %d y %d\n", num1, num2);
	printf("El promedio de los números es: %.2f\n", prom);
	
	return 0;
}

