//Practica hecha por Guillermo Martinez de Hurtado Aricha grupo 5
#include <iostream>

using namespace std;

struct Palabra{
    string word;
    int contVocals = 0;
    int contCons = 0;
};

bool contVocal(char word){
        if( word == 'a' || word == 'e' || word == 'i' ||
            word == 'o' || word == 'u' || word == 'A' ||
            word == 'E' || word == 'I' || word == 'O' ||
            word == 'U'){
        return true;
        }
    return false;
}

void datosPalabras(){
    Palabra palabras[10];

    cout<<"Introduce tus 10 palabras:\n";

    for(int i=0;i<10;i++){
        cin>>palabras[i].word;
    }

    for(int i=0;i<10;i++){
        for(long long j=0;j<10;j++){
            if(contVocal(palabras[i].word[j])==true){
                palabras[i].contVocals++;
            }
        }
        palabras[i].contCons = palabras[i].word.length() - palabras[i].contVocals;
        cout << "La palabra "<<palabras[i].word<<" tiene vocales = "<<palabras[i].contVocals<<
                " y consonantes = "<<palabras[i].contCons<<"\n\n";

    }
}



int main()
{
    int opt;
    do{
        cout<<"*******ELIGE UNA OPCION*******\n\n";
        cout<<"1.Datos de palabras.\n"
              "2.Pasar una cadena de cifras a numero entero.\n"
              "3.Determinar si la palabra/frase es palíndroma.\n"
              "4.Salir programa.\n";

        cin>>opt;

        switch (opt) {

        case 1:
            datosPalabras();
            break;

        case 2:
            cout<<"No creada.\n";
            break;

        case 3:
            cout<<"No creada.\n";
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
