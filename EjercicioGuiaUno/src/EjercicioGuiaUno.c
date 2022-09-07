/*
 ============================================================================
 Name        : EjercicioGuiaUno.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main()
{
	setbuf(stdout, NULL);

    int ingresarNumero;
    int ingresarNumeroDos;
    int resultado;

    printf("Ingrese primer numero");
    scanf("%d", &ingresarNumero);


    printf("Ingrese segundo numero");
    fflush(stdin);
    scanf("%d", &ingresarNumeroDos);

    resultado=ingresarNumero + ingresarNumeroDos;

    printf("El resultado es %d", resultado);

    return 0;
}
