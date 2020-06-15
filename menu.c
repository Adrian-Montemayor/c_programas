#include <stdio.h>
#include "funciones.h"
int opcion;

int main(){
	
	int resultado;

	do{
		opcion = menu();
		switch(opcion){
			case 1:
				//titulo 
				printf("\n\t Operacion suma");
				//variables
				int a,b;
				printf("\nIngrese el primer numero: ");
				scanf("%d", &a);
				printf("Ingrese el segundo numero: ");
				scanf("%d", &b);
				//mandar llamar funcion suma
				resultado = sumar(a,b);
				//imprimir resultado
				printf("\nResultado de sumar %d + %d es: %d\n\n", a, b, resultado);
				break;
			case 2:
				//salir del programa
				printf("\nUsted ha salido del programa...\n");
				break;
				
			default:
				//cualquier otro numero
				printf("\nEscoja una accion valida\n");
				break;
		}
	}while(opcion != 2);		
	
	return;
}


int menu(){	
	printf("Escoja una opcion por su numero");
	printf("\n\t 1.- Sumar");
	printf("\n\t 2.- Salir");
	printf("\n>");
	scanf("%d", &opcion);
	printf(" ");
	return opcion;
}
