#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//att 2.24

int main(){
	setlocale(LC_ALL,"portuguese");
	int n;
	

		printf("Informe um numero inteiro: ");
		scanf("%i", &n);
		if((n%2)==0)
		{
			printf("\n%i é um numero PAR",n);
		}else  printf("\n%i é um numero IMPAR",n);

return 0;
}
