/*
 ============================================================================
 Name        : ejercicio2-2.c
 Author      : Julian E Fernandez
 Ejercicio 2-2:
Ingresar 10 números enteros, distintos de cero. Mostrar:
Cantidad de pares e impapres-------------
El menor número ingresado.
De los pares el mayor número ingresado.--------------
Suma de los positivos.
Producto de los negativos

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);
	int numerosIngresados;
	int cantidadPares=0;
	int cantidadImpares=0;
	int menorNumero;
	int mayorNumeroPar;
	int sumaPositivos=0;
	int productoNegativos;

	int flagMayorPar=1;
	int flagMenos=1;
	int flagProductoNegativos=1;

	for(int i=0; i<3; i++){
		printf("Ingrese un numero");
		scanf("%d", &numerosIngresados);

		if(numerosIngresados%2==0){
			cantidadPares++;
			if(numerosIngresados>mayorNumeroPar || flagMayorPar==1){
				mayorNumeroPar=numerosIngresados;
				flagMayorPar=0;
			}
		}else{
			cantidadImpares++;
		};
		if(numerosIngresados<menorNumero || flagMenos==1){
			menorNumero=numerosIngresados;
			flagMenos=0;
		}

		if(numerosIngresados>0){
			sumaPositivos=sumaPositivos+numerosIngresados;
		}else{
			if(flagProductoNegativos==1){
				productoNegativos=numerosIngresados;
				flagProductoNegativos=0;
			}else{
				productoNegativos=productoNegativos*numerosIngresados;
			}
		};

	}

	printf("Cantidad de pares es %d", cantidadPares);
	printf("\nCantidad de impares es %d", cantidadImpares);
	printf("\nEl menor numero ingresado es %d", menorNumero);
	printf("\nDe los pares el mayor número ingresado %d", mayorNumeroPar);
	printf("\nSuma de los positivos %d", sumaPositivos);
	printf("\nProducto de los negativos %d", productoNegativos);

	return 0;
}
