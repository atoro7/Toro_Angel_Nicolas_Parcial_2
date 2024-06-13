#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> numeros = {1,2,3,4,5};

    for(int i=0; i<numeros.size(); i++){

        cout<<numeros[i]<<" ";
    }
    cout<<endl;

    numeros.push_back(6);
    numeros.push_back(7);

    for(int i=0; i<numeros.size(); i++){

        cout<<numeros[i]<<" ";
    }

    numeros[2] = NULL;

    cout<<endl;
    for(int i=0; i<numeros.size(); i++){

        cout<<numeros[i]<<" ";
    }

    return 0;
}
