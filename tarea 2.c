#include <stdio.h>

int main(int argc, char *argv[]) {
	int num = 1;
	int sum = 0;
	printf("Secuencia y suma de números pares\n");
	while (num <= 5) {
		printf("%d\n", num);
		if (num % 2 == 0) {
			sum += num;
		}
		num++;
	}
	printf(" suma numeros pares: %d\n", sum);
	return 0;
}
