#include <iostream>
using namespace std;

int main(){

    int fila1, fila2, columna1, columna2;

    do{
    cout<<"Ingresar fila 1: ";cin>>fila1;
    cout<<"Ingresar fila 2: ";cin>>fila2;
    cout<<"Ingresar columna 1: ";cin>>columna1;
    cout<<"Ingresar columna 2: ";cin>>columna2;
    }while(fila1!=fila2 || columna1!=columna2);

    int matrizA [fila1][columna1];
    int matrizB [fila1][columna1];
    int suma [fila1][columna1];

    cout<<"\nMatriz A:"<<endl;
    for(int i=0; i<fila1; i++){
        for(int j=0; j<columna1; j++){

            cout<<"Pocision "<<i<<" "<<j<<" :";
            cin>>matrizA[i][j];
        }
    }
    cout<<"\nMatriz B:"<<endl;
    for(int i=0; i<fila1; i++){
        for(int j=0; j<columna1; j++){

            cout<<"Pocision "<<i<<" "<<j<<" :";
            cin>>matrizB[i][j];
        }
    }
    for(int i=0; i<fila1; i++){
        for(int j=0; j<columna1; j++){

            suma[i][j] = matrizA[i][j] + matrizB[i][j];

        }
    }

    cout<<endl;
    cout<<"La suma de las matrices es: "<<endl;
    for(int i=0; i<fila1; i++){
        for(int j=0; j<columna1; j++){

            cout<<suma[i][j]<<" ";
            }
        cout<<endl;
    }


    return 0;
}
