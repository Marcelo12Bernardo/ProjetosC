#include <stdio.h>
#include <stdlib.h>


int main(){
	int n[6]={0},i=0,maior=0, menor=9999999999999;
	for(i=1;i<=5;i++)
	{
		printf("De o numero %i\n",i);
		scanf("%i", &n[i]);
		system("cls");
	}

	for(i=1;i<=5;i++)
	{
		if(n[i]>maior)
		{
		maior=n[i];
		}
		
		if(n[i]<menor)
		{
		menor=n[i];
		}
	}
	printf("Numeros:");
	for(i=1;i<=5;i++)
	{
		printf(" %i\t",n[i]);
		
	}
	printf("\nMaior numero: %i",maior);
	printf("\nMenor numero: %i",menor);
return 0;
}
