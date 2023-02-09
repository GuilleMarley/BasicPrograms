//Hecho por Guillermo Martinez de Hurtado Aricha

#include <iostream>
#include <string>

using namespace std;

bool contiene(string frase, string palabra){
    for(int i = 0; i< frase.length(); i++){
        if(frase[i]==palabra[0]){
            bool encontrado=true;
            for(int j = 0; j< palabra.length(); j++){
                if(frase[i+j] != palabra[j]){
                    encontrado=false;
                    break;
                }
            }
            if(encontrado){
                cout<<"En la posicion "<<i+1<<" de la cadena, ";
                return true;
            }
        }
    }
    return false;
}

int main()
{
    string frase;
    string palabra;

    cout<<"Introduce la primera cadena: \n";
    getline(cin,frase);
    cout<<"Introduce la segunda cadena: \n";
    cin>>palabra;

    if(contiene(frase, palabra)){
        cout<<"la palabra "<<palabra<<" esta contenida en "<<frase<<"\n";
    }else{
        cout<<"la palabra "<<palabra<<" no esta contenida en "<<frase<<"\n";
    }

    return 0;
}
