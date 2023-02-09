#include <iostream>
#include <math.h>

using namespace std;

int main()
{
/*

EJERCICIO 1
int num1=0, num2=0, num3=0, num4=0;
int res=0;

cout<<"Introduce el primer numero: \n";
cin>>num1;
cout<<"Introduce el segundo numero: \n";
cin>>num2;
cout<<"Introduce el tercer numero: \n";
cin>>num3;
cout<<"Introduce el cuarto numero: \n";
cin>>num4;

res = ((num1 * num2) / (num3 + num4));
res = res * res;

cout<<"Tu numero resultado es: \n"<<res<<"\n";*/

//EJERCICIO 2

/*int num1=0, num2=0;
int coci=0, resto=0;

cout<<"Introduce el primer numero: \n";
cin>>num1;
cout<<"Introduce el segundo numero: \n";
cin>>num2;

coci=num1/num2;
resto=num1%num2;

cout<<"\nEl cociente de tus numeros es:\n"<<coci<<"\nEl resto de tu division es:\n"<<resto<<"\n";
*/
/*float radio=0, longitud=0, area=0, pi=3.14;

cout<<"Introduce el radio numero: \n";
cin>>radio;

longitud = 2 * pi * radio;
area = pi * (radio * radio);

cout<<"La circunferencia de radio "<<radio<<" tiene una longitud de "<<longitud<<" y un area de "<<area<<"\n";
*/
float peso=0, altura=0, IMC=0;

cout<<"Introduce tu peso: ";
cin>>peso;
cout<<"Introduce tu altura: ";
cin>>altura;

IMC = peso / (altura * altura);

cout<<"Tu índice de masa corporal es "<<IMC;

return 0;
}
