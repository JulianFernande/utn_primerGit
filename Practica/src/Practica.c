/*
 ============================================================================
 Name        : Practica.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int main(void) {

	int numero;

	printf('Introduzca un numero: %d', numero);
	scanf("%d", &numero);
	fflush(stdin);

	printf('El numero es %d ', numero);

	return 0;
}
