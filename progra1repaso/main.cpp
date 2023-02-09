#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main()
{
    /*int arr[20];
    int num=0;
    for(int i=0;i<20;i++){
        arr[i]=0;
    }

    while(num>=0 && num<21){
        cout<<"Introduce un numero(Acaba con un numero mayor que 20  o menor que 0): \n";
        cin>>num;
        for(int i=0;i<20;i++){
            arr[num-1]=arr[num-1]+1;
            i=21;
        }
    }
    for(int i=0;i<20;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";*/

        //--------------VECTORES----------------
    /*vector<char> arrc;
    //int max;
    char carac='a';
    for(int i=0;i<26;i++){
        arrc[i]=0;
    }
    while(carac>='a' && carac<='z'){
        cout<<"Introduce un caracter: \n";
        cin>>carac;
        for(int i=0;i<arrc.size();i++){
            arrc[carac-'a']=arrc[carac-'a']+1;
            i=27;
        }
        arrc.push_back(carac);
    }
    for(int i=0;i<arrc.size();i++){
        int aux = arrc.at(i);
        if(aux>max){
            max=arrc[i];
        }
        cout<<arrc.at(i)<<" ";
    }
    //cout<<"\nEl mayor es "<<max<<"\n";
    cout<<"\n";*/

    /*char arrp[30];
    char letra='a';
    for(int i=0;i<30;i++){
        arrp[i]=' ';
    }
    for(int i=0;i<30;i++){
        cout<<"Introduce un caracter: \n";
        cin>>letra;
        if(letra>='a' && letra <='z'){
            arrp[i]=letra;
        }
        else break;
    }
    for(int i=0;i<30;i++){
        cout<<arrp[i]<<" ";
    }*/

    vector <string> palabras;
    set <string> words;
    string palabra;
    string prueba;
    while(palabra != "salir"){
        cout<<"Introduce una palabra si desea dejar de introducir palabras "
              "teclee salir:\n";
        cin>>palabra;
        if(palabra != "salir"){
        palabras.push_back(palabra);
        words.insert(palabra);
        }
    }
    cout<<"Tus palabras orden inverso: \n";
    for(auto elem: words){
        cout<<elem<<"\n";
    }
    cout<<"**************************************\n"
          "Has introducido "<<words.size()<<" palabras.\n"
          "**************************************\n";
    cout<<"Introduce una palabra para comprobar si esta, si no quiere "
          "comprobar mas teclee salir: \n";
    cin>>prueba;
    if(words.find(prueba)!=words.end()){
        cout<<"La palabra "<<prueba<<" existe en el vector\n";
    }
    else cout<<"No esta la palabra.\n";
    /*for(string elem:palabras){
        if(elem==prueba){
           cout<<"La palabra "<<prueba<<" existe en el vector\n";
        }
    }*/
    return 0;
}
