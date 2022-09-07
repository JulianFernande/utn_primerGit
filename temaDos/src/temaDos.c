/*
 ============================================================================
 Name        : temaDos.c
 Author      : Julian E Fernandez
 Ejercicio 2-1: Ingresar 5 números enteros calcular y mostrar el promedio de
 los números.
 Probar la aplicación con distintos valores.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int numeroIngresado;
	int acumulador=0;
	float promedio;

	for(int i=0; i<5; i++){
		printf("Ingrese un numero");
		scanf("%d", &numeroIngresado);
		acumulador= acumulador+numeroIngresado;
	};
	promedio=acumulador/5;

	printf("El promedio de los numeros ingresados es %f", promedio);
	return 0;
}
