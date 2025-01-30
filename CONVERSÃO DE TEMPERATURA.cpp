#include <iostream>
using namespace std;
int main()
{

    int opcao;
    float temperatura, resultado;
    do
    {
        cout<<"======menu======\n";
        cout << "escolha uma opcao\n";
        cout << "1.celcius para  Fahrenheit\n";
        cout << "2.Celsius para Kelvin\n";
        cout << "3.Fahrenheit para Celsius\n";
        cout << "4.Kelvin para Celsius\n";
        cout << "5 .encerra o codigo\n";
        cout<<"==============";
        cin >> opcao;
        switch (opcao)
        {
        case 1:
            cout << "digite o valor em celcius\n";
            cin >> temperatura;
            resultado = (temperatura * 9 / 5) + 32;
            cout << "A temperatura em Fahrenheit e\n" << resultado;   
            break;
        case 2:
            cout << "digite o valor em celcius\n";
            cin >> temperatura;
            resultado = temperatura + 273.15;
            cout << "A temperatura em kelvin e :\n"<<resultado;
            break;
        case 3:
            cout << "digite o valor\n";
            cin >> temperatura;
            resultado = (temperatura - 32) * 5 / 9;
            cout << "A tempreatura em Celsius e \n"<<resultado;
            break;
        case 4:
            cout << "digite o valor\n";
            cin >> temperatura;
            resultado = temperatura - 273.15;
            cout << " A temperatura em Celsius para celcius e\n"<<resultado;
            break;
        case 5:
            cout << "Encerra o codigo\n";
            break;
        default:
            cout << "opcao invalida";
            break;
        }
    } while (opcao != 5);
}