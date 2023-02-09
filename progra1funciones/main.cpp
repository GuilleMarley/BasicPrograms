#include <iostream>
#include <string>
#include <array>

using namespace std;

int edad(int num){
    cout << "Introduce edad: " ;
    cin>>num;
    return num;
}

int altura(int num){
    cout<<"Introduce altura: ";
    cin>>num;
    cout<<"Tu altura: "<<num<<"\n";
    return num;
}

int peso(int num){
    cout<<"Introduce peso: ";
    cin>>num;
    cout<<"Tu peso: "<<num<<"\n";
    return num;
}

int multiplicador(int edad){
    cout<<"Tu edad por 2 es: ";
    return 2 * edad;
}

void nombre(){
    char nombre[20];
    cout<<"Introduce nombre : ";
    cin>>nombre;
    cout<<"Buen nombre crack "<<nombre<<"\n";
}

struct Datos{
    int edad;
    int multiplicador;
    int altura;
    int peso;
    string nombre;
};

void saludoTodo(Datos datos){
    cout<<datos.edad<<"\n"<<datos.multiplicador<<"\n"<<datos.altura<<"\n"<<datos.peso<<"\n"<<datos.nombre<<"\n";
}

int main()
{
    Datos datos;
    int num = 1;
    datos.altura=altura(num);
    datos.peso=peso(num);
    datos.edad=edad(num);
    //datos.multiplicador=multiplicador(edad(num));
    datos.nombre = "Juan";
    saludoTodo(datos);
    nombre();

    return 0;
}
