#include <stdio.h>
int main()
{
    int opcao;
    float temperatura,resultado;
    do
    {

        printf("escolha uma opcao\n ");
        printf("1.celcius para  Fahrenheit\n");
        printf("2.Celsius para Kelvin\n");
        printf("3.Fahrenheit para Celsiu\n");
        printf("4.Kelvin para Celsius\n");
        printf("5 .encerra o codigo\n");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            printf("digite o valor em celcius\n");
            scanf("%f",&temperatura);
            resultado = (temperatura*9/5)+32;
            printf("A temperatura em Fahrenheit e %f",resultado);
            break;
        case 2:
            printf("digite o valor em celcius\n"); 
            scanf("%f",&temperatura);
            resultado= temperatura+273.15;
            printf("A temperatura em kelvin e %f\n",resultado);
            break;
        case 3:
            printf("digite o valor\n");
            scanf("%f",&temperatura);
            resultado= (temperatura-32)*5/9;
            printf("A tempreatura em Fahrenheit e %f ",resultado);
            break;
        case 4:
           printf("digite o valor\n");
            scanf("%f",&temperatura);
            resultado= temperatura -273.15;
            printf(" A temperatura de kelvin para celcius e%f",resultado);
            break;
        case 5:
            printf("codigo encerrado");
            break;
        default:
            printf("opçao invalida");
            break;
        }
    } while (opcao != 5);

    return 0;
}