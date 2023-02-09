#include <iostream>
#include <vector>
#include <fstream>
#include <time.h>

// JORGE BEJARANO
// GUILLERMO MARTINEZ

using namespace std;

int extraer_carta(vector<int> & baraja){

    int pos = rand()%baraja.size();

    int carta_escogida = baraja[pos];

    baraja.erase(baraja.begin()+pos);

    return carta_escogida;
}
string carta2str(int naipe){

    string resultado;

    switch (naipe%10) {
        case 0: resultado="Uno";
            break;
        case 1: resultado="Dos";
            break;
        case 2: resultado="Tres";
            break;
        case 3: resultado="Cuatro";
            break;
        case 4: resultado="Cinco";
            break;
        case 5: resultado="Seis";
            break;
        case 6: resultado="Siete";
            break;
        case 7: resultado="Sota";
            break;
        case 8: resultado="Caballo";
            break;
        case 9: resultado="Rey";
            break;
    }

    int palo = naipe/10;

    if(palo==0){
        resultado = resultado + " de Copas ";
    }
    else if(palo==1){
        resultado = resultado + " de Bastos ";
    }
    else if(palo==2){
        resultado = resultado + " de Oros ";
    }
    else if(palo ==3){
        resultado = resultado + " de Espadas ";
    }
    return resultado;
}

string num2str(int naipe){

    string resul;

    switch (naipe%10) {
        case 0: resul="Uno";
            break;
        case 1: resul="Dos";
            break;
        case 2: resul="Tres";
            break;
        case 3: resul="Cuatro";
            break;
        case 4: resul="Cinco";
            break;
        case 5: resul="Seis";
            break;
        case 6: resul="Siete";
            break;
        case 7: resul="Sota";
            break;
        case 8: resul="Caballo";
            break;
        case 9: resul="Rey";
            break;
    }
    return resul;
}
void pasarcartas(vector<int> &origen,vector<int> &destino){

    while(origen.size()>0){

     int x = extraer_carta(origen);

     destino.push_back(x);
  }
}

void imprimircartas(vector<int> const &baraja){

    vector<string> resultado;

    for(auto elem: baraja){

        cout<<carta2str(elem)<<", ";
    }

    cout<<endl;

    for(auto elem: baraja){

        cout<<carta2str(elem)<<", ";
    }
}

int main()
{
    srand(time(NULL));

    vector<int> baraja;

    vector<int> j1,j2,mesa;

    int cont=0;

    int cartas=0;

    int puntuacion1=0;

    int puntuacion2=0;

    int seguir_jugando=0;

    cout << endl;
    cout << "Creadores Jorge Bejarano y Guillermo Martinez" << endl << endl;
    cout << "------------------------- JUEGO 1,2,3 -------------------------" << endl;
    cout << endl;
    cout << "Selecciona una tecla: " << endl;


    cout << "1 - Ver las cartas" << endl;
    cout << "Otra tecla, para no ver las cartas" << endl;

    cin>>cartas;

        do{
             mesa.clear();

             for(int i=0;i<40;i++){

                 baraja.push_back(i);
             }

             cout<<endl;

             for(int i=0;i<40;i++){

                 int carta_escogida = extraer_carta(baraja);

                 if(i%2==0){

                    j1.push_back(carta_escogida);

                 }
                 else

                    j2.push_back(carta_escogida);
             }

             while(j1.size()>0 && j2.size()>0){

                 if(cartas==1){

                     cout << "Las cartas del jugador 1 son: ";

                     imprimircartas(j1);

                     cout << endl << endl;

                     cout<<"Las cartas del jugador 2 son: ";

                     imprimircartas(j2);

                     cout << endl << endl;
                 }

                int extraidaj1 = extraer_carta(j1);

                mesa.push_back(extraidaj1);

                cout<<"Jugador 1 dice: "<<num2str(cont)<<" y saca: "<<carta2str(extraidaj1);

                if(cont%10 == extraidaj1%10){
                    cout<<endl;

                    pasarcartas(mesa,j1);

                    cout<<"Las cartas se las lleva el jugador 1";
                }
                cont++;

                cout<<endl;

                int extraidaj2= extraer_carta(j2);

                mesa.push_back(extraidaj2);

                cout<<"Jugador 2 dice: "<<num2str(cont)<<" y saca: "<<carta2str(extraidaj2);

                if(cont%10 == extraidaj2%10){
                    cout<<endl;

                    pasarcartas(mesa,j2);

                    cout<<"Las cartas se las lleva el jugador 2";
                }
                cont++;

                cout<<endl;

                cout<<"Cartas de la mesa: ";

                for(auto cartas_mesa: mesa){

                    cout<<carta2str(cartas_mesa)<<",";
                }
                  cout<<endl<<endl<<endl;

                  if(j1.size()==0){

                      cout<<"Ha ganado el jugador 1 porque se ha quedado sin cartas";

                      puntuacion1++;
                  }
                  if(j2.size()==0){

                      cout<<"Ha ganado el jugador 2 porque se ha quedado sin cartas";

                      puntuacion2++;
             }

             cout<<endl;
             cout<<endl;

         }
             cout << "Pulse 1 para seguir jugando" <<endl;
             cout << "Pulse 2 para dejar de jugar " <<endl;

             cin>>seguir_jugando;

             if(seguir_jugando==1){

                 cout<<endl<<endl<<"---------------------------------------------"<<endl<<endl;

                 cout<<"Nueva partida"<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
             }
             if(seguir_jugando==2){

                 cout<<"Se acabo el juego";

                 cout<<endl<<endl<<endl;
             }

         }while(seguir_jugando==1);

        ofstream fich("puntuacion2.txt");

        if (!fich)
        {
          cout << "Error al abrir ejemplo.dat\n";

          exit(EXIT_FAILURE);
        }
      fich << "Puntuacion" << endl;
      fich << "Jugador 1: " << puntuacion1 << " victorias" << endl;
      fich << "Jugador 2: " <<puntuacion2 << " victorias" << endl;

    }
