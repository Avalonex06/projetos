#include<stdio.h>

int main ()
{ int  num1, num2,opcao;
float resultado;
printf("=============== MENU ===============\n");
printf("digite um valor\n");
printf("1 .voce quer somar\n");
printf("2.voce quer subtrair\n");
printf("3.voce quer multiplicar\n");
printf("4.voce quer dividir\n");
 printf("------------------------------------\n");
printf("digite uma opcao:");
scanf("%d",&opcao);
printf("digite o valor 1:\n");
scanf("%d",&num1);
printf("digite o valor 2:\n");
scanf("%d",&num2);

switch (opcao)
{
case 1 :
resultado= num1 +num2;
    printf("A soma e de %d e %d e %.2f\n",num1,num2,resultado);
    break;
 case 2: 
 resultado= num1 - num2;
    printf(" A subtaçao e de %d e %d e %.2f\n",num1,num2,resultado);
    break;
case 3:
resultado= num1 * num2;
   printf("A multiplicacao e %d e %d e %.2f\n",num1,num2,resultado);
   break;
case 4:
if (num2 == 0)
{
    printf("Erro :  divisao por zera ao e permitido.\n");
}else
{
 resultado = (float)num1 / num2;
 printf("A divisao de %d por e %d e %.2f\n",num1,num2,resultado);
}


 printf("voce escolheu dividir");
 break;
default:
 printf("Opçao invalida, digite um valor valida");
}
    return 0;
}