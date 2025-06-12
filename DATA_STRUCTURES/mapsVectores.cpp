#include <map>
#include <vector>
#include <iostream>
using namespace std;

int main(){
    // Se crea un map donde la clave es de tipo int y el valor es un vector de strings.
    map<int, vector<string>> grupos;

    // Se añade el string "sol" al vector asociado a la clave 3.
    grupos[3].push_back("sol");

    // Se añade el string "ana" al mismo vector asociado a la clave 3.
    grupos[3].push_back("ana");

    // Se añade el string "rana" al vector asociado a la clave 4.
    grupos[4].push_back("rana");

    /*
    Explicación:
    Al utilizar un map con vectores como valores, podemos aprovechar las funciones de los vectores.
    En este caso, el método push_back permite agregar elementos al vector que está asociado a una clave específica.
    Por ejemplo, en la clave 3 se están insertando dos elementos: "sol" y "ana", y en la clave 4 se inserta "rana".
    
    Es importante destacar que, en un map, cada clave es única. Lo que estamos haciendo es que para cada clave,
    el "valor" es un vector que puede contener múltiples strings. 
    Por lo tanto, al hacer push_back, no estamos sobrescribiendo la clave, solo estamos añadiendo más elementos al 
    vector que ya está vinculado a esa clave.
    
    Nota: la estructura de datos que estamos creando se parece a tener 'grupos' de palabras donde cada grupo está
     identificado por un número.
    */

    // Se crea un vector llamado palabrasde3 que almacena una copia del vector asociado a la clave 3 del map.
    vector<string> palabrasde3 = grupos[3];
    /*
    Aquí, el vector palabrasde3 es una copia de los elementos que están en la clave 3 del map.
    Esto significa que cualquier cambio que hagamos en palabrasde3 no afectará al vector original dentro del map.
    Si quisiéramos modificar directamente el vector dentro del map, tendríamos que trabajar con una referencia.
    */

    // Se recorre el vector palabrasde3 y se imprimen sus elementos.
    for(int i = 0; i < palabrasde3.size(); i++){
        cout << palabrasde3[i] << endl;
    }
    /*
    Este for muestra uno por uno los elementos del vector palabrasde3.
    En este caso, debería imprimir:
    sol
    ana
    */

    return 0;
}