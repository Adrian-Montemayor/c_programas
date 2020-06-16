#include<stdio.h>
#include<conio.h>

int main()
{
	int i,n;
	int contador=2;
	int variable=1;

	
	printf("\nCuantos numeros quiere: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("[%d]",contador);
		contador=contador+2;
	}
	printf("\n\n");
	
	for(i=0;i<n;i++)
	{
		if(i%2==0)
		{
			variable=variable+2;
		}
		else
		{
			variable=variable-1;
		}
		if(i==0)
		{
			printf("[1]");
		}
		printf("[%d]",variable);
	}
	
	
	return 0;
	getch();
}
