#include <iostream>
#include <array>
#include <string>

using namespace std;

void sumaParesImpares();
void divisionEntera();
void dibujarTriangulo();


int main()
{
    int opt=0;

    cout<<"Que opcion desea?\n"
          "1. Determinar la suma de numeros pares e impares.\n"
          "2. Realizar la division entera de dos numeros.\n"
          "3. Dibujar triangulo.\n"
          "4. Salir programa.\n";
    cin>>opt;

    if(opt<0 || opt>4){
        cout<<"La opcion no es valida. Por favor, vuelva a seleccionar otra opcion.\n";
    }

    while(opt!=4){
        if(opt==1){
            sumaParesImpares();

        }
        else if(opt==2){
            divisionEntera();

        }
        else if(opt==3){
            dibujarTriangulo();

        }
        else if(opt==4){
            break;

        }
        else{
            cout<<"La opcion no es valida. Por favor, vuelva a seleccionar otra opcion.\n";

        }
        cout<<"Que opcion desea?\n"
              "1. Determinar la suma de numeros pares e impares.\n"
              "2. Realizar la division entera de dos numeros.\n"
              "3. Dibujar triangulo.\n"
              "4. Salir programa.\n";
        cin>>opt;
    }
    cout<<"Gracias y hasta pronto.\n";
    return 0;
}


void sumaParesImpares(){
    int auxNum = 0;
    int SumaP = 0;
    int SumaI = 0;

    cout<<"Introduce numeros enteros y acaba con un negativo: \n";
    cin>>auxNum;

    while(auxNum>=0){
        if(auxNum % 2 == 0){
            SumaP += auxNum;
        }
        else{
            SumaI += auxNum;
        }
        cout<<"Introduce numeros enteros y acaba con un negativo: \n";
        cin>>auxNum;
    }
    cout<<"La suma de los números pares es "<< SumaP <<
          " y la suma de los números impares es "<< SumaI <<".\n";
}

void divisionEntera(){
    int num1,num2,numX,numY;
    cout<<"Introduce dos numeros enteros para dividirlos y monstrar su cociente y su resto: \n";
    cout<<"Introduce el primer numero:\n";
    cin>>num1;
    cout<<"Introduce el segundo numero:\n";
    cin>>num2;

    if(num1<num2){
        numX=num2;
        numY=num1;
        num1=0;
        num2=0;
    }
    else if(num1>num2){
        numX=num1;
        numY=num2;
        num1=0;
        num2=0;
    }
    else{
        numX=num1;
        numY=num1;
        num1=0;
        num2=0;
    }
    num1=numX/numY;
    num2=numX%numY;
    cout<<"El cociente de dividir "<<numX<<" entre "<< numY << " es "
         << num1 << " y su resto es "<<  num2 <<"\n";
}

void dibujarTriangulo(){

}
