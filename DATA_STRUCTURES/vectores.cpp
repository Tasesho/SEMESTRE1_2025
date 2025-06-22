#include <iostream>
#include <vector>

using namespace std;

int main(){
    //un vector es un arreglo dinamico, osea se ajusta automaticamente al tamaño necesario
    //la estructura es: tipo de estructura <tipo de dato> nombre vector


    vector <int> vector1 = {1,2,3};    //se crea un vector con tipos de dato int de 3 espacios
    vector1.push_back(4);            //añade un digito '4' al final del vector
    int x=vector1[2];                 // accede al vector en la posicion 2




//para recorrer un vector
     vector<int> numeros = {10, 20, 30, 40, 50};

    for (int i = 0; i < numeros.size(); i++) {
        cout << "Elemento en posición " << i << ": " << numeros[i] << endl;
    }

    return 0;
}