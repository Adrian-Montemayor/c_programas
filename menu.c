#include <stdio.h>
#include "funciones.h"

int opcion;
struct dos_numeros{
	float a, b;
};

typedef struct dos_numeros Struct;

Struct pedir_dos_valores(){
	
	Struct s1;
	printf("\nIngrese el primer numero: ");
	scanf("%f", &s1.a);
	
	printf("\nIngrese el segundo numero: ");
    scanf("%f", &s1.b);
    
	printf("\n");
	
	return s1;
}

int main(){
	
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
				if(a>0 && b>0)
            	{
	                resultado = multiplicar(valores.a ,valores.b);
            	}
	            else
	            {
		            printf("\nNO SE PUEDE HACER LA MULTIPLICACION\n");
	            }
	            break;
				printf("\nEl resultado de multiplicar %2.f * %2.f es: %2.f\n\n", valores.a, valores.b, resultado);
				break;
				
			case 4:
				printf("\n\tOperacion Division");
				valores= pedir_dos_valores();
				if(b>0)
            	{
	                resultado = division(valores.a ,valores.b);
            	}
	            else
	            {
		            printf("\nNO SE PUEDE HACER LA DIVISION\n\n");
	            }
	            break;	
				printf("\nEl resultado de dividir %.2f / %.2f es: %.2f\n\n", valores.a, valores.b, resultado);
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


