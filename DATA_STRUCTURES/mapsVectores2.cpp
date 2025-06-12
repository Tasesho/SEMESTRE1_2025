#include <map>
#include <vector>
#include <iostream>
using namespace std;

#include <map>
#include <vector>
#include <iostream>
using namespace std;

int main(){
    // Se crea un map llamado map1 donde:
    // La clave es de tipo int (en este caso, será la longitud de la palabra).
    // El valor asociado es un vector de strings (las palabras que tengan esa longitud).
    map<int,vector<string>> map1;

    // Se crea un vector de strings con varias palabras.
    vector <string> palabras = {"sol", "Luna", "mar", "cielo", "dias"};

    // Se recorre el vector palabras.
    for(int i = 0; i < palabras.size(); i++){
        // Se inserta la palabra en el map utilizando como clave la longitud de la palabra.
        // Ejemplo: "sol" tiene 3 letras -> map1[3].push_back("sol");
        map1[palabras[i].size()].push_back(palabras[i]);

        /*
        Aquí, lo que se está haciendo es agrupar las palabras por la cantidad de letras que tienen.
        Cada vez que se agrega una palabra, se inserta en el vector correspondiente a su longitud dentro del map.
        Por ejemplo:
            - Las palabras de 3 letras estarán agrupadas bajo la clave 3.
            - Las palabras de 4 letras estarán agrupadas bajo la clave 4.
            - Las palabras de 5 letras estarán agrupadas bajo la clave 5.
        */

        // Este ciclo muestra el contenido completo del map en cada iteración.
        // Se utiliza un for-each con auto para recorrer cada par clave-valor del map.
        for(auto par : map1){
            // Se imprime la clave (longitud de las palabras).
            cout << par.first << ": ";
            // Se recorre el vector de palabras que tienen esa longitud.
            for(int i = 0; i < par.second.size(); i++){
                // Se imprimen las palabras separadas por " - ".
                cout << par.second[i] << " - ";
            }
            cout << endl;
        }
        /*
        Nota importante:
        Este segundo for está dentro del primer for, por lo que **se imprimirá el estado completo del map en cada paso**.
        Esto significa que el map se mostrará cada vez que se agregue una nueva palabra, mostrando cómo se va construyendo paso a paso.
        
        Si quisieras que se muestre solo una vez al final, deberías mover este for fuera del primer ciclo.
        */
    }

    return 0;
}