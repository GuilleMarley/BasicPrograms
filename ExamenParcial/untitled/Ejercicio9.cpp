//Ejercicio 9 por Guillermo Martinez de Hurtado Aricha

#include <iostream>

using namespace std;

int main(){

    int An;int N=0;
    int A0=2;int A1=4;
    int aux;int contp;int contn;
    int contPAux=2;int contNAux=0;
    cout<<"Intrroduce cuantos terminos quieres calcular:\n";
    cin>>N;

    for(int i=0;i<N;i++){

        An=A0-(A1*2);
        A0=A1;
        aux=A0;
        A1=An;
        if(An<0){
            contNAux=contNAux+1;
            contn=contNAux;
        }
        else{
            contPAux=contPAux+1;
            contp=contPAux;
        }
    }
    cout<<"An= "<<An<<"\n";

    if(An>0){
        cout<<"El valor maximo es"<<An<<" y el valor minimo es "<<aux<<"\n";
    }
    else if(An<0){
        cout<<"El valor maximo es "<<aux<<" y el valor minimo es "<<An<<"\n";
    }
    else{ cout<<"El valor maximo es "<<An<<" y el valor minimo es "<<aux<<"\n";}

    cout<<"El numero de valores positivos calculados son: "<<contp<<"\n";
    cout<<"El numero de valores negativos calculados son: "<<contn<<"\n";

    return 0;
}
