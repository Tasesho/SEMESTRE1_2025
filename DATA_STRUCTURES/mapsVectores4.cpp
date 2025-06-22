/*Tienes un map<string, vector<float>> donde la clave es el nombre del
alumno y el valor es un vector con sus notas.
Agrega notas y luego calcula el promedio por alumno.*/

#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main(){
    map<string, vector<float>> PromNotas;

    PromNotas["Benjamin"].push_back(2.3);
    PromNotas["Benjamin"].push_back(5.3);
    PromNotas["Benjamin"].push_back(6.2);


    vector<float> Benjamin = PromNotas["Benjamin"];
    cout <<"Notas de Benjamin"<< endl;
    for(int i = 0; i < Benjamin.size(); i++){
        cout << Benjamin[i] << endl;
    }

    for (auto par : PromNotas){
        string nombre = par.first;
        vector <float> notas = par.second;

        cout<<"Notas de: "<< nombre << ":" <<endl;

        float suma= 0.0;

        for(float nota: notas){
            cout<<nota <<endl;
            suma += suma;
        }

    float promedio = suma / notas.size();
    cout<< "promedio de " <<nombre<< ": " <<promedio <<endl<<endl;
 }
    return 0;
}