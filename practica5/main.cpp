//Practica hecha por Guillermo Martinez de Hurtado Aricha grupo 5
#include <iostream>
#include <vector>

using namespace std;

struct maximo{
    int valor;
    int posX ;
    int posY ;
};

struct minimo{
    int valor;
    int posX ;
    int posY ;
};

struct total{
    minimo min;
    maximo max;
};

int solicitarDimension();
vector<vector<int>> solicitarMatriz();
void mostrarMatriz(vector<vector<int>>);
total obtenerMax_Min(vector<vector<int>>);

int main()
{
    int opt;
    vector<vector<int>> miVec;
    total total;
    do{
        cout<<"*******ELIGE UNA OPCION*******\n\n";
        cout<<"1.Elementos maximo y minimo de una matriz.\n"
              "2.Operar con una matriz.\n"
              "3.Trabajar con una serie.\n"
              "4.Salir programa.\n";

        cin>>opt;

        switch (opt) {

        case 1:
            miVec = solicitarMatriz();
            total = obtenerMax_Min(miVec);
            cout<<"El valor maximo es "<<total.max.valor<<" y ocupa la posicion ["<<total.max.posX<<" , "<<total.max.posY<<"]\n";
            cout<<"El valor minimo es "<<total.min.valor<<" y ocupa la posicion ["<<total.min.posX<<" , "<<total.min.posY<<"]\n";
            break;

        case 2:

            break;

        case 3:

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

int solicitarDimension(){
    int dim=0;
    cout<<"Introduce la dimension de tu matriz(entre 2 y 100):\n";
    do{
        cin>>dim;
        if(dim < 2 || dim > 100){
            cout<<"Valor incorrecto introduce uno nuevo entre 2 y 100.\n";
        }
    }while(dim < 2 || dim > 100);

    return dim;

}

vector <vector<int>> solicitarMatriz(){
    vector <vector<int>> matrix;
    vector<int> aux;
    int valor;
    int dim = solicitarDimension();

    for(int i = 1;i <= dim; i++){
        aux.clear();
        for(int j = 1; j <= dim; j++){
            cout << "Introduce el elemento ["<<i<<","<<j<<"]\n";
            cin >> valor;
            aux.push_back(valor);
        }
        matrix.push_back(aux);
    }
    cout<<"\n";
    mostrarMatriz(matrix);

    return matrix;
}

void mostrarMatriz(vector<vector<int>> matrix){

    for(int i= 0;i < matrix.size(); i++){
        cout<<"| ";
        for(int j=0; j < matrix.size();j++){
            cout << matrix.at(i).at(j)<<" ";
        }
        cout<<"|\n";
    }
    cout<<"\n\n";
}

total obtenerMax_Min(vector<vector<int>> matrix){
    total total;
    total.max.valor = matrix.at(1).at(1);
    total.min.valor = matrix.at(1).at(1);

    for(int i= 0;i < matrix.size(); i++){
        for(int j=0; j < matrix.size();j++){
            if(total.max.valor<matrix.at(i).at(j)){
                total.max.valor=matrix.at(i).at(j);
                total.max.posX=i+1;
                total.max.posY=j+1;
            }
            else if(total.min.valor>matrix.at(i).at(j)){
                total.min.valor=matrix.at(i).at(j);
                total.min.posX=i+1;
                total.min.posY=j+1;
            }
        }
    }

    return total;
}

