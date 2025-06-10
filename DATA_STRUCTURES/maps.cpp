#include<iostream>
#include <map>
using namespace std;

int main(){

    //para crear un mapa se necesita una llave y un argumento de la siguiente forma

    map<int, string> map1;   //se crea el mapa de nombre "map1" 
    // donde su llave sera un valor entero y su argumento sera un string
    
    map1[1] = "lucas";    //se crea el valor "lucas" en la clave 1"
    map1[2] = "marta;"  ;    //se crea el valor "marta" en la clave 2"

    //las claves se pueden pensar como arreglos ya que se aplican de la misma forma empezando desde 0

    //por lo tanto

    cout<<"clave 1. Valor: "<<map1[1];
    cout<<"clave 2. Valor: "<<map1[2];

    return 0;
}