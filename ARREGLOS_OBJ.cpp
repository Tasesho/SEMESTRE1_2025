#include <iostream>
using namespace std;

class alumnoUDP{
    private:
        string Nombre;
        string Carrera;

    public: (string nom, string carr) : Nombre(nom), Carrera(carr) {}

     void setNombre(string nombre){
        this->Nombre=nombre;
     }

     void setCarrera(string carrera){
        this->Carrera=carrera;
     }

     string getNombre(){
        return Nombre;
     }
     string getCarrera(){
        return Carrera;
     }

     void imprimir(){
        cout<< "el alumno es: "<<Nombre<<""
     }
};

class curso{
    private: 
        alumno *lista[10];

    public: 
        Curso(){
            for(int i=0; i<10; i++){
                lista=i[NULL];
            }
        }

};