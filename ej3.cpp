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
        res = "Felicitaciones, el asiento n�mero 28 est� disponible";
    }
    else{
        res = "Lo sentimos, el asiento n�mero 5 est� ocupado, pero a�n quedan 5 asientos disponibles: 15, 28, 44, 45, 70";
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
