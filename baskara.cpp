#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
int a,b,c; // variaveis
double x1,x2 ,delta;
cout<<"digite o valor de a:"<<endl;
cout<<"digite o valor de b:"<<endl;
cout<<"digite o valor de c:"<<endl;
cin>>a>>b>>c;
delta =b*b-4*a*c;

  if (delta >0)
  {
    cout<<"a equação tem duas raízes reais e distintas."<<endl;
    x1= (-b-sqrt(delta ))/(2.0*a);
    cout<<"O valor de x1 e"<<x1<<endl;
    x2=(-b+sqrt(delta ))/(2.0*a);
    cout <<"O valor de x2 e"<<x2<<endl;

  }
  else if (delta==0)
  {
    cout <<"A equação tem uma única raiz real (ou raízes iguais)."<<endl;
    x1 = -b / (2.0 * a);  
    cout << "O valor de x1 é: " << x1 << endl;
}
  else if (delta <0)
  {
    cout <<"A equação nao tem raiz real por que o delta e negativo "<<endl;
  }
 



}