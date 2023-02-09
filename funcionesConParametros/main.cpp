#include <iostream>
#include <string>
#include <vector>

using namespace std;

void contarLetras(string frase){
    int letras=0;
    for(auto elem: frase){
        if(elem!=' ') letras++;
    }

    std::cout << "Hay " << letras << " letras en la frase\n";
}

void contarPalabras(string frase){
    vector<string> palabras;
    string palabra_aux{""};
    for(char elem: frase){
        if(elem != ' ') palabra_aux+= elem;
        else{
            if(palabra_aux.size()>0) palabras.push_back(palabra_aux);
            palabra_aux.clear();
        }
    }

    if(palabra_aux.size()>0) palabras.push_back(palabra_aux);

    cout << "Hay " << palabras.size() << " palabras.\n";
    palabraMax(palabra_aux);
}

void palabraMax(string palabras){
    int max = palabras.at(0).size();
    string palabra_max = palabras.at(0);
    int min = palabras.at(0).size();
    string palabra_min = palabras.at(0);

    for(auto p: palabras){
        if(p.size() > max){
            max=p.size();
            palabra_max = p;
        }

        if(p.size() < min){
            min=p.size();
            palabra_min = p;
        }
    }

    cout << "La palabra más larga es " << palabra_max << " y tiene " << palabra_max.size() << " letras\n";
    cout << "La palabra más corta es " << palabra_min << " y tiene " << palabra_min.size() << " letras\n";
}



int main()
{
    cout << "Introduce una frase: \n";
    string frase;
    getline(cin, frase);
    vector<string> palabras;

    contarLetras(frase);
    contarPalabras(frase);

    string palabra_aux{""};
    for(char elem: frase){
        if(elem != ' ') palabra_aux+= elem;
        else{
            if(palabra_aux.size()>0) palabras.push_back(palabra_aux);
            palabra_aux.clear();
        }
    }

    if(palabra_aux.size()>0) palabras.push_back(palabra_aux);

    return 0;
}
