#include <stdio.h>
#include <stdlib.h>

int main()
{
 
float sBruto=0, sFamilia=0, inss=0, irpf=0, vHoras=0,abono=0, sLiquido=0;
int filhos=0,salarios=0, qHoras=0;
char nome[20];

printf("Qual o nome do Funcionario : ");
scanf("%s", nome);

printf("\nQuantidade de filhos: ");
scanf("%i", &filhos);

printf("\nQuantidade de Salarios minimos: ");
scanf("%i", &salarios);

printf("\nQuantidade de horas extras: ");
scanf("%i", &qHoras);

sBruto=(salarios*200);
sFamilia=(filhos*23.45);
abono=sBruto*0.12;
if(sBruto>=360)
    {
        inss=(sBruto*0.0782);

}else if(sBruto<360)
    {
        inss=(sBruto*0.0662);
    }

if(sBruto>280)
    {
        irpf=(sBruto*0.09);

}else if(sBruto<=360)
    {
        irpf=(sBruto*0.07);
    }

if(sBruto>=750)
    {
        vHoras=(qHoras*10);

}else if(sBruto<750)
    {
         vHoras=(qHoras*7);
    }
sLiquido=(sBruto+sFamilia+abono+vHoras-inss-irpf);


printf("\nNome do Funcionario: %s",nome);
printf("\nSalario Bruto: %.2f",sBruto);
printf("\nSalario Familia: %.2f",sFamilia);
printf("\nInss: %.2f",inss);
printf("\nIrpf: %.2f",irpf);
printf("\nValor das Horas extras: %.2f",vHoras);
printf("\nAbono: %.2f",abono);
printf("\nSalario Liquido: %.2f",sLiquido);


    return 0;
}