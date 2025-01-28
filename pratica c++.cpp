#include<iostream>>
using namespace std;
int main () 
{
 int idade; 
 cout <<"informe a idade"<<"\n";
 cin>>idade;
 if (idade<=5)
 {
    cout<<"bebe"<<"\n";
 }
 else  if (idade >5 && idade <=10)
 {
  cout<< "criança"<<"\n";
 }
 else if (idade>10 && idade <=18)
 {
    cout<<"Jovem"<<"\n";

 }
else if (idade >18&& idade<= 30 )
{
    cout<<"adulto"<<"\n";
}
 else if (idade >30 && idade <=65 )
 {
    cout<< "Idoso"<<"\n";
 }
 
 
 
}