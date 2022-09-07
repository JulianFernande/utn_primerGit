/*
 ============================================================================
 Name        : segundoEjercicio.c
 Author      : Julian E Fernandez
Ejercicio 1-2: ingresar 3 números y mostrar cuál de los tres es el mayor.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int numeroIngresado;

	int numeroMayor;
	int flag=0;

	for(int i=0; i<3; i++){
		printf("Ingrese un numero");
		scanf("%d", &numeroIngresado);

		if(flag==0 || numeroIngresado> numeroMayor){
			numeroMayor=numeroIngresado;
			flag=1;
		};
	};

	printf("El mayor numero ingresado es %d", numeroMayor);
	return EXIT_SUCCESS;
}
