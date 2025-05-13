#include <iostream>
#include <stack>
using namespace std;


int main(){

    //stack <int> stack1;      -un stack es como una pila, rigiendose por su naturaleza LIFO (Last in, first out)
    // La estructura en el codigo es:    tipo de estructura de dato(en este caso stack) <tipo de dato (int, char, float)> Nombre stack                       
    //stack1.top();            -este comando muestra el tope de nnuestro stack
    //stack1.pop();            -elimina el ultimo dato del stack
    //stack1.empty();          -revisa si el stack esta vacio
    //stack1.push();           -ingresa un dato 
    

//ejercicio de ejemplo usando todos los comandos
    string palabra;
    stack <char> pila;              //se crea el stack

    cout<<"Ingrese datos"<<endl;
    cin>> palabra;

//en este for inserta cada caracter en el stack
    for(char c : palabra){                          //recorre la palabra caracter por caracter, y    
        pila.push(c);                               //ingresandolos en el stack creado previamente
    }

//sacar los caracteres del stack para invertir la palabra
cout<<"tu palabra invertida"<<endl;
while(!pila.empty()){     //revisa si el pila esta vacio pero tiene ! antes, lo cual significa que mientras la pila NO este vacia
    cout<<pila.top();            //muestra el dato char que esta en el tope del stack, luego                       
    pila.pop();   // elimina el ultimo dato que seria el que recien muestra
}
    return 0;
}