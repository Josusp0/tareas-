#include <stdio.h>

int main(int argc, char *argv[]) {
	int num;
	printf("Introduce un número para la tabla de multiplicar.: ");
	scanf("%d", &num);
	printf("tabla de multiplicar de %d:\n", num);
	for (int i = 1; i <= 10; i++) {
		printf("%d x %d = %d\n", num, i, num * i);
	}
	return 0;
}
