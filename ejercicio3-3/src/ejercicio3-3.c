/*
 ============================================================================
 Name        : ejercicio3-3.c
 Author      : Julian E Fernandez
Ejercicio 3-3:
Crear una función que pida el ingreso de un entero y lo retorne.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int numero;
	printf("Ingrese un numero entero\n");
	scanf("%d", &numero);

	printf("%d", numero);
	return 0;
}

