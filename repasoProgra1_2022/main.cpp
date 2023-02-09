#include <iostream>
#include <vector>

using namespace std;

int main()
{
    /*int cont =0;
    vector<int> myVec;
    while(myVec.size()<3){
        int num=0;
        cout<<"Introduce un numero impar.\n";
        cin>>num;
        myVec.push_back(num);
        for(int i=0;i<myVec.size()-1;i++){
            if(num==myVec.at(i)){
                myVec.pop_back();
            }
            if(num%2==0){
                myVec.pop_back();
            }
        }
        //cout <<"Prueba otra vez.\n";
    }
     for(int i=0;i<myVec.size();i++){
         cout<<myVec.at(i);
     }*/

    /*int num = 0;
    cin>>num;
    cout << "El sumador es 1 + 3 + " << num - 4 << " = " << num <<"\n";*/

    string in1 = "un perro come";
    string in2 = "una puerta";
    vector<char> out;

    for(int i = 0; i< in1.size();i++){
        for(int j = 0; j < in2.size(); j++){
            if(in1.at(i)==in2.at(j)){
                out.push_back(in1.at(i));
            }
        }
    }

    for(char elem : out){
        cout << elem<< " ";
    }
    return 0;
}
