#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int opcion;
struct dos_numeros
{
	float a, b;
};

typedef struct dos_numeros Struct;

Struct pedir_dos_valores()
{
	Struct s1;
	printf("\nIngrese el primer numero: ");
	scanf("%f", &s1.a);
	printf("\nIngrese el segundo numero: ");
    scanf("%f", &s1.b);
	printf("\n");
	return s1;
}

int main()
{
	float resultado;
	float a,b;
	Struct valores;
	
	do{
		
		opcion = menu();
		switch(opcion)
		{
			case 1:
				printf("\n\tOperacion suma");
				valores = pedir_dos_valores();
				resultado = sumar(valores.a ,valores.b);
				printf("\nResultado de sumar %.2f + %.2f es: %2.f\n\n ", valores.a, valores.b, resultado);
				break;
				
			case 2:
				printf("\n\tOperacion resta");
				valores= pedir_dos_valores();
				resultado = restar(valores.a ,valores.b);
				printf("\nResultado de restar %2.f - %2.f es: %2.f\n\n ", valores.a, valores.b, resultado);
				break;
			
			case 3:
				printf("\n\tOperacion Multiplicacion");
				valores= pedir_dos_valores();
				if(valores.a>0 && valores.b>0)
				{
	                resultado = multiplicar(valores.a ,valores.b);
	                printf("\nEl resultado de multiplicar %2.f * %2.f es: %2.f\n\n", valores.a, valores.b, resultado);
            	}
	            else
	            {
		            printf("\nNO SE PUEDE HACER LA MULTIPLICACION\n");
		            break;
	            }
				break;
				
			case 4:
				printf("\n\tOperacion Division");
				valores= pedir_dos_valores();
				if(valores.b>0)
				{
					resultado = division(valores.a ,valores.b);
					printf("\nEl resultado de dividir %.2f / %.2f es: %.2f\n\n", valores.a, valores.b, resultado);
            	}
	            else
	            {
		            printf("\nNO SE PUEDE HACER LA DIVISION\n\n");
	            }
				break;
				
			case 5:
				srand(time(NULL));
				int n;
				printf("\n\tObtener valor maximo de un arreglo: ");
				printf("\nDigite el tamanio del arreglo: ");
			    scanf("%d",&n);
				printf("\nEl numero mayor es: %d\n",obtener_maximo(n));
				break;
					 
			case 6:
				//salir del programa
				printf("\nUsted ha salido del programa...\n");
				break;
			
			default:
				//cualquier otro numero
				printf("\nEscoja una accion valida\n");
				break;
		}
	}while(opcion != 6);
	return;
}

int menu()
{	
	printf("Escoja una opcion por su numero");
	printf("\n\t 1.- Sumar");
	printf("\n\t 2.- Restar");
	printf("\n\t 3.- Multiplicar");
	printf("\n\t 4.- Division");
	printf("\n\t 5.- obtener_maximo");
	printf("\n\t 6.- Salir");
	printf("\n>");
	scanf("%d", &opcion);
	printf(" ");
	return opcion;
}


