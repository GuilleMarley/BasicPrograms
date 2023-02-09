//Ejercicio 8 por Guillermo Martinez de Hurtado Aricha
#include <iostream>

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
}
