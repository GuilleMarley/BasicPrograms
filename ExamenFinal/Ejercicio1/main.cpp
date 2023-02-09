//Hecho por Guillermo Martinez de Hurtado Aricha

#include <iostream>
#include <vector>

using namespace std;

vector<int> divisores(int num){
    vector<int> div;
    for(int i = 1;i<=num;i++){
        if(num%i==0 && i !=num){
            div.push_back(i);
        }
    }
    return div;
}

int suma1(const vector<int> num){
    int suma = 0;
    for(auto elem: num){
        suma = suma + elem;
    }
    return suma;
}

int suma2(const vector<int> num){
    int suma = 0;
    for(auto elem: num){
        suma = suma + elem;
    }
    return suma;
}

bool amigos(int var1,int var2,const vector<int> num1,const vector<int> num2){

    if(suma1(num1) == var2 && suma2(num2) == var1){
        return true;
    }else{
        return false;
    }
}

int main()
{
    int cont;
    do{

        int var1=0,var2=0;
        vector <int> var1a;
        vector <int> var2a;

        var1a.clear();
        var2a.clear();

        while(var1 <= 0){
            cout << "\nIntroduzca un numero positivo y mayor que 0: ";
            cin>>var1;
            if(var1<=0){
            cout << "\nEl valor del numero no es valido. Vuelva a intentarlo.\n";
            }
        }
        while(var2 <= var1 || var2 <= 0){
            cout << "\nIntroduzca un numero positivo y mayor que 0: ";
            cin>>var2;
            if(var2==var1){
                cout<<"El numero "<< var2 <<" debe ser distinto al primero\n"<<
                      "\nPor favor, introduzca el segundo numero de nuevo.\n\n";
            }
            if(var2 < var1){
                cout<<"El numero "<< var2 <<" debe ser mayor que el numero "<< var1 <<
                      "\nPor favor, introduzca el segundo numero de nuevo.\n\n";
            }
        }

        var2a=divisores(var2);
        var1a=divisores(var1);

        if(amigos(var1, var2, var1a, var2a)){
            cout<<"\nLos numeros "<< var1<<" y "<< var2<<" son AMIGOS.";
        }else{
            cout<<"\nLos numeros "<< var1<<" y "<< var2<<" NO son AMIGOS.";
        }
        cout<<"\nLos divisores del numero "<<var2<<" son: ";
        for(auto elem:var2a){
            cout<<elem<<" ";
        }
        cout<<"\nLos divisores del numero "<<var1<<" son: ";
        for(auto elem:var1a){
            cout<<elem<<" ";
        }
        cout<<"\n\nDesea repetir el proceso con otros datos(0 es no/1 es si)?";
        cin>>cont;
        }while(cont!=0);

    return 0;
}
