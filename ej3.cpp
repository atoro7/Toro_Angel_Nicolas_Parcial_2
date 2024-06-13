#include <iostream>
#include <vector>
using namespace std;

string asientosDisponibles(vector<int> x, int y){

    vector<int> numeros;
    int asiento;
    bool bandera = false;
    string res;

    for(int i=0; i<numeros.size(); i++){

        if(numeros[i]=asiento){
            bandera=true;
        }
    }

    if(bandera==true){
        res = "Felicitaciones, el asiento número 28 está disponible";
    }
    else{
        res = "Lo sentimos, el asiento número 5 está ocupado, pero aún quedan 5 asientos disponibles: 15, 28, 44, 45, 70";
    }

    return res;
}

int main(){

    vector<int> numeros = {15,28,44,45,70};
    int asiento;

    cout<<"Ingresar numero de asiento: ";
    cin>>asiento;

    cout<<asientosDisponibles(asiento);

    return 0;
}
