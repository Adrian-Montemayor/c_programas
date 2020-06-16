
/*Funcion que suma dos numeros enteros*/
float sumar(float a, float b)
{
	return a+b;
}

float restar(float a, float b)
{
	return a-b;
}

float multiplicar(float a, float b)
{
	return a*b;
}

float division(float a, float b)
{
	return a/b;
}

int obtener_maximo(int n)
{
	int i;
	int arreglo[n];
	int mayor=0;
	
	for(i=0;i<n;i++)
	{
		arreglo[i]= 1 + rand()% 10;
	}
	for(i=0;i<n;i++)
	{
		printf("[%d]",arreglo[i]);
	}
	for(i=0;i<n;i++)
	{
		if(mayor<arreglo[i])
		{
		   mayor=arreglo[i];
		}
	}
	return mayor;
}
