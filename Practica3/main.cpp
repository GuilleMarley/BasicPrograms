//Practica 3 hecha por Guillermo Martinez de Hurtado Aricha grupo 5 (solo)
#include <iostream>

using namespace std;

struct intervalo{
    int max;
    int min;
    int usuarioNum=1;
    int contIn=0;
    int contOut=0;
};

void contarValoresIntervalo(){
    intervalo interval;
    do{
        cout<<"Introduce el valor minimo del intervalo:\n";
        cin>>interval.min;
        if(interval.min<1){
            cout<<"Introduce un numero valido.\n";
        }

    }while(interval.min<1);

    do{
        cout<<"Introduce el valor maximo del intervalo:\n";
        cin>>interval.max;
        if(interval.max<interval.min){
            cout<<"Introduce un numero valido.\n";
        }

    }while(interval.max<interval.min);

    while(interval.usuarioNum>0){
        cout<<"Introduce tu numero.\n";
        cin>>interval.usuarioNum;

        if(interval.usuarioNum>=interval.min && interval.usuarioNum<=interval.max){
            interval.contIn++;
        }
        else{interval.contOut++;}
    }
    interval.contOut--;

    cout<<"Numeros dentro del intervalo "<< interval.contIn<<".\nNumeros fuera del intervalo: "
       <<interval.contOut<<"\n\n";
}

struct cifras{
    int usuarioNum;
    int numCifras=0;
    int sumaCifras=0;

};

void calcularCifras(){
    cifras opt2;
    int aux;
    cout<<"Introduce un numero: \n";
    cin>>opt2.usuarioNum;

    if(opt2.usuarioNum<100){
        cout<<"Introduce un numero mayor o igual que 100:\n";
        cin>>opt2.usuarioNum;
    }

    int aux2=opt2.usuarioNum;

    while(opt2.usuarioNum>0){

        aux = opt2.usuarioNum % 10;
        opt2.sumaCifras = opt2.sumaCifras + aux;
        opt2.numCifras++;
        opt2.usuarioNum = opt2.usuarioNum / 10;
    }

    opt2.usuarioNum=aux2;

    cout<<"El numero "<<opt2.usuarioNum<<" tiene "<<opt2.numCifras<<" cifras y su suma es "<<
          opt2.sumaCifras<<"\n";
}
void dibujarTriangulo(){
    int num;
    cout<<"Introduce un numero: \n";
    cin>>num;

    for(int i=0;i<num+1;i++){
        for(int j=i;j<num+1;j++){

            cout<<j<<" ";

        }
        cout<<"\n";
    }
    cout<<"\n";
}


int main()
{
    int opt;
    do{
        cout<<"*******ELIGE UNA OPCION*******\n\n";
        cout<<"1.Contar numeros dentro y fuera de un intervalo.\n"
              "2.Sumar cifras de un numero.\n"
              "3.Dibujar triangulo.\n"
              "4.Salir programa.\n";

        cin>>opt;

        switch (opt) {

        case 1:
                contarValoresIntervalo();
            break;

        case 2:
                calcularCifras();
            break;

        case 3:
                dibujarTriangulo();
            break;

        case 4:
            cout<<"Gracias y hasta pronto.\n";
            break;

        default:
                cout<<"Numero no valido, introduce otro numero.\n";
            break;
        }

    }while(opt!=4);
    return 0;
}
