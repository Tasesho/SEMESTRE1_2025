#include <iostream>
using namespace std;

class Persona{
    private: 
        string Nombre;
        int Edad;
    
    public: Persona(string nom, int e) : Nombre(nom), Edad(e) {}

    void imprimir(){
        cout<<"El nombre es: " <<Nombre<<endl;
        cout<<"La edad es: "<<Edad<<endl;
    }
};

int main(){
    Persona persona1("Juan", 23);

    persona1.imprimir();
return 0;
}