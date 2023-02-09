//Hecho por Guillermo Martinez de Hurtado Aricha

#include <iostream>
#include <memory>
#include <vector>

using namespace std;

vector <float> serie1(int const terms, int const num1, int const num2){
    vector<float> serie;
    if (terms==0){
        serie.clear();
    }
    else if(terms==1){
      serie.clear();
      serie.push_back(num1);
    }
    else if(terms==2){
        serie.clear();
        serie.push_back(num1);
        serie.push_back(num2);
    }else{
        serie.clear();
        serie.push_back(num1);
        serie.push_back(num2);

        for(int i=2; i<terms; i++){
            serie.push_back(serie.at(i-1)+serie.at(i-2));
        }
    }
    return serie;
}

vector <float> serie2(int const terms, int const num1, int const num2){
    vector <float> serie;
    if (terms==0){
        serie.clear();
    }
    else if(terms==1){
      serie.clear();
      serie.push_back(num1);
    }
    else if(terms==2){
        serie.clear();
        serie.push_back(num1);
        serie.push_back(num2);
    }else{
        serie.clear();
        serie.push_back(num1);
        serie.push_back(num2);

        for(int i=2; i<terms; i++){
            float aux =i*((serie.at(i-1)/2)+serie.at(i-2));
            serie.push_back(aux);
        }
    }
    return serie;
}

int main()
{
    int cont;
    do{
    int terms;
    int num1;
    int num2;
    cout << "\nIntroduzca el numero de terminos: ";
    cin>>terms;
    cout << "\nIntroduzca el primer numero de la serie: ";
    cin>>num1;
    cout << "\nIntroduzca el segundo numero de la serie: ";
    cin>>num2;
    //cout<<"\n"<<num1<<" "<<num2;
    vector <float> seriea = serie1(terms,num1,num2);
    cout<<"\nLos elementos de la primera serie:\n";
    for(auto elem: seriea){
        cout<<elem<<" ";
    }

    vector <float> serieb = serie2(terms,num1,num2);
    cout<<"\nLos elementos de la segunda serie:\n";
    for(auto elem: serieb){
        cout<<elem<<" ";
    }
    cout<<"\n";
    cout<<"\n\nDesea hacer otras series(0 es no/1 es si)?";
    cin>>cont;
    }while(cont!=0);
    return 0;
}
