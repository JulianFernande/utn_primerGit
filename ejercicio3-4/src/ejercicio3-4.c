/*
 ============================================================================
 Name        : ejercicio3-4.c
 Author      : Julian E Fernandez
 Ejercicio 3-4:
Especializar la función anterior para que permita validar el
 entero ingresado en un rango determinado.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int enteros(int numero);
int main(void) {
	setbuf(stdout, NULL);

	int numero;
	int validacion;
	printf("Ingrese un numero entero del 1 al 10\n");
	scanf("%d", &numero);

	validacion=enteros(numero);
	if(validacion ==1){
		printf("El numero es %d y es valido\n", numero);
	}else{
		printf("El numero es %d y NO es valido\n", numero);
	}

	return 0;
}

int enteros(int numero){
	int retorno;
	if(numero<0 || numero<11){
		retorno=1;
	}else{
		retorno=0;
	}
	return retorno;
}
