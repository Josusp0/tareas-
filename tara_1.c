#include <stdio.h>

int main(int argc, char *argv[]) {
	int num1,num2,num3;
	
	printf ("Ingresa un numero entero \n");
	scanf ("%d", &num1);
	printf ("Ingresa un numero entero \n");
	scanf ("%d", &num2);
	printf ("Ingresa un numero entero \n");
	scanf ("%d", &num3);
	
	if (num1>num2 && num1>num3 ){
		printf("El numero mayor es:%d",num1);
		
	}
	else if (num2>num1 && num2>num3 ){
		printf("El numero mayor es: %d",num2);
		
	}
	else if (num3>num1 && num3>num2 ){
		printf("El numero mayor es:%d",num3);
			}
	else if (num1==0 && num2==0 && num3==0 ){
		printf("Los 3 numeros son iguales y nulos  \n");
	}
	else if (num1==num2 && num2==num3 ){
		printf("Los 3 numeros son iguales \n");
	}
	
	return 0;
}

	
