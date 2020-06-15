#include <stdio.h>
#include "funciones.h"
int opcion;

int main(){
	
	int resultado;

	do{
		opcion = menu();
		switch(opcion)
		{
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
				printf("\n\t Operacion resta");
				
				int c,d;
				
				printf("\nIngrese el primer numero: ");
				scanf("%d", &c);
				printf("Ingrese el segundo numero: ");
				scanf("%d", &d);
				
				resultado = restar(c,d);
				//imprimir resultado
				printf("\nResultado de restar %d - %d es: %d\n\n",c,d, resultado);
				break;
			case 3:
				printf("\n\t Operacion Multiplicacion");
				
				int e,f;
				
				printf("\nIngrese el primer numero: ");
				scanf("%d",&e);
				
				printf("\nIngrese el segundo numero: ");
				scanf("%d",&f);
				
				if(e>0 && f>0)
            	{
	                resultado= multiplicar(e,f);
            	}
	            else
	            {
		            printf("\nNO SE PUEDE HACER LA MULTIPLICACION\n");
	            }
	            break;
	            
				printf("\nEl resultado de multiplicar %d * %d es: %d\n\n",e,f,resultado);
				break;
				
			case 4:
				printf("\n\t Operacion Division");
				
				float g,h;
				float resultado=0.0;
				
				printf("\nIngrese el primer numero: ");
				scanf("%f",&g);
				
				printf("\nIngrese el segundo numero: ");
				scanf("%f",&h);
					
				resultado= division(g,h);
				
				printf("\nEl resultado de dividir %.2f / %.2f es: %.2f\n\n",g,h,resultado);
				break;		
					
			case 5:
				//salir del programa
				printf("\nUsted ha salido del programa...\n");
				break;
				
			default:
				//cualquier otro numero
				printf("\nEscoja una accion valida\n");
				break;
		}
	}while(opcion != 5);		
	
	return;
}


int menu()
{	
	printf("Escoja una opcion por su numero");
	printf("\n\t 1.- Sumar");
	printf("\n\t 2.- Restar");
	printf("\n\t 3.- Multiplicar");
	printf("\n\t 4.- Division");
	printf("\n\t 5.- Salir");
	printf("\n>");
	scanf("%d", &opcion);
	printf(" ");
	return opcion;
}
