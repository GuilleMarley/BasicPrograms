#include <iostream>
#include <array>

using namespace std;

void print_welcome(){
    cout<<"**********Bienvenido**********"<<"\n\n";
}

int ask_room_number(){
    int num = 0;
    cout<<"+Introduce un numero de habitacion: \n-";
    cin>>num;
    while(num < 0 || num > 10){
        cout<<"!!!!!!!!!!!!!!!!ERROR!!!!!!!!!!!!!!!!\n\n";
        cout<<"+Introduce un numero de habitacion: \n-";
        cin>>num;

    }
    return num;
}

int freeRooms(int room, int opt){
    array<int,10> rooms={0,1,0,1,0,1,0,0,0,0};
    if(opt == 1){
        if(rooms[room]==0){
            rooms[room]=1;
            return 1;
        }
        else return 0;
    }
    else{
        int freeRooms=0;
        for(int i=room; i<rooms.size(); i++){
            if (rooms[i]==0){
                freeRooms = freeRooms+1;
            }
        }
        return freeRooms;
    }
}

int pedirLlave(){
    int key;
    cout<<" Que llave deseas? \n";
    cin>>key;
    return key;
}


int reservarHab(){
    int hab;
    cout<<" Que habitacion quieres reservar? \n";
    cin>>hab;

    if(freeRooms(hab,1)==1){
        cout<<" Reserva realizada con exito.\n";
    }
    else cout<<" No se pudo realizar la rserva.\n";

    return hab;
}


int devolvLlave(){
    int key;
    cout<<" Que llave tenias? \n";
    cin>>key;
    return key;
}


int roomStatus(){
    return freeRooms(0,2);
}

int menu(){
    int num;
    cout << " Introduce un numero segun que desea hacer:"
            " \n 1.Pedir llave \n 2.Reservar habitacion \n 3. Devolver llave \n"
            " 0. SALIR \n (Cualquier otra opcion no es valida)\n ";
    cin >> num;

    while(num < 0 || num > 4){
    cout <<" ++++++Numero no valido.++++++\n";
    cout << " Introduce un numero segun que desea hacer:"
            " \n 1.Pedir llave \n 2.Reservar habitacion \n 3. Devolver llave \n"
            " 0. SALIR \n (Cualquier otra opcion no es valida)\n ";
    cin >> num;
    }

    if(num>=0 && num<=4){
        if (num == 1){
            int aux = pedirLlave();
            cout<< " +La llave pedida es: "<<aux<<"\n";
            return 0;
        }
        else if(num==2){
            int aux = reservarHab();
            cout<< " +La habiatacion reservada es la "<<aux<<"\n";
            return 0;
        }
        else if(num==3){
            int aux = devolvLlave();
            cout<< " +La llave devuelta es: "<<aux<<"\n";
            return 0;
        }
        else if(num==4){
            int aux = roomStatus();
            cout<< " +El numero de habitaciones libres son: "<<aux<<"\n";
            return 0;
        }
        else{cout<<" **************SALIENDO*************\n";return 0;}
    }
}


int main()
{
    print_welcome();
    menu();

    return 0;
}
