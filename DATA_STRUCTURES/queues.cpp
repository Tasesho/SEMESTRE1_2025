#include <iostream>
#include <queue>
using namespace std;


int main(){

    //queue <int> queue1     -una queue es como una fila de supermercado, rigiendose FIFO (first in, first out)
    //la estructura de codigo es:       tipo de estructura <tipo de dato> nombre de la queue
    //queue1.push();              -este comando agrega un valor al final de la cola.
    //queue1.pop();               -este comando quita el primer numero.
    //queue1.empty();             -este comando verifica si la queue esta vacia
    //queue1.front();             -muestra el valor que va primero



    //ejercicio de ejemplo representando una fila de supermercado


    queue <string> filasuper;
    string nombre;
    
    while(true){
        cout<<"ingrese nombres de la fila , ingrese fin para finalizar queue"<<endl;
        cin>>nombre;

        if(nombre=="fin"){
            break;
        }
        filasuper.push(nombre);
    }
    
    
    while(!filasuper.empty()){
    cout<<"siguiente en la fila!\n"<<filasuper.front()<<endl;
    
    filasuper.pop();
    }
    
    return 0;
}