/*
 ============================================================================
 Name        : temaTres3-2.c
 Author      : Julian E Fernandez
 Ejercicio 3-2:
Crear una función que permita determinar si un número es par o no.
 La función retorna 1 en caso afirmativo y 0 en caso contrario. Probar en el main.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int parOimpar(int numUno);
int main(void) {
	setbuf(stdout, NULL);
	int numeroIngresado;
	int retornoMain;

	printf("Ingrese un numero\n");
	scanf("%d", &numeroIngresado);

	retornoMain=parOimpar(numeroIngresado);

	if(retornoMain== 1){
		printf("El numero es par\n");
	}else{
		printf("El numero es impar\n");
	};
	return 0;
}

int parOimpar(int numUno){
	int retorno;
	if(numUno%2 == 0){

		retorno=1;
	}else{
		retorno=0;
	}
	return retorno;
}
