#include <stdio.h>

int main(int argc, char *argv[]){

	float saldo = 3000.0;
	int opcion;
	
	do {
		printf( " Bienvenido \n");
		printf("1. Retirar dinero\n");
		printf("2. Abonar dinero\n");
		printf("3. Salir\n");
		printf("Seleccione una opción: ");
		scanf("%d", &opcion);
		
	
		switch(opcion) {
		case 1:
		{
			float cantidad_retirar;
			printf("Ingrese la cantidad a retirar: ");
			scanf("%f", &cantidad_retirar);
			if (cantidad_retirar > saldo) {
				printf("No tienes suficiente saldo para realizar esta operación.\n");
			} else {
				saldo -= cantidad_retirar;
				printf("Se han retirado $%.2f. Saldo restante: $%.2f\n", cantidad_retirar, saldo);
			}
		}
		break;
		case 2:
		{
			float cantidad_abonar;
			printf("Ingrese la cantidad a abonar: ");
			scanf("%f", &cantidad_abonar);
			saldo += cantidad_abonar;
			printf("Se han abonado $%.2f. Saldo actual: $%.2f\n", cantidad_abonar, saldo);
		}
		break;
		case 3:
			printf("Gracias por utilizar el cajero automático. Su saldo final es: $%.2f\n", saldo);
			break;
		default:
			printf("Opción no válida. Por favor, seleccione una opción válida.\n");
		}
	} while(opcion != 3);
	
	return 0;
}
