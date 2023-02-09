/*#include <iostream>

using namespace std;

void linea_estrellas(){
    cout<<"**********\n";
}
void linea_cruces(){
    cout<<"++++++++++\n";
}

int main()
{
    int cant1=0;
    int cant2=0;
    int may;
    int men;
    int difer;

    cout<<"Introduce el numero de filas de estrellas que quieres:\n";
    cin>>cant1;
    cout<<"Introduce el numero de filas de cruces que quieres:\n";
    cin>>cant2;

    if(cant1>cant2){
        may=cant1;
        men=cant2;
        difer=may-men;
        for(int i=0;i<men*2;i++){
            if(i%2==0){
                linea_estrellas();
            }
            else linea_cruces();
        }
        for(int j=0;j<=difer;j++){
            linea_estrellas();
        }
    }
    else if(cant2>cant1){
        may=cant2;
        men=cant1;
        difer=may-men;
        for(int i=0;i<men*2;i++){
            if(i%2==0){
                linea_estrellas();
            }
            else linea_cruces();
        }
        for(int j=0;j<difer;j++){
            linea_cruces();
        }
    }
    else{
        may=cant1;
        men=cant2;
        for(int i=0;i<men*2;i++){
            if(i%2==0){
                linea_estrellas();
            }
            else linea_cruces();
        }
    }


    return 0;
}*/

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
