#include <stdio.h>

int main(int argc, char *argv[]) {
		int num, i, suma_impares = 0;
		
		printf("Por favor, ingrese un n�mero: ");
		scanf("%d", &num);
		
		for (i = 1; i <= num; i++) {
			printf("%d ", i);
			if (i % 2 != 0) {
				suma_impares += i;
			}
		}
		
		printf("\nLa suma de los n�meros impares es: %d\n", suma_impares);
		
		return 0;
	}


