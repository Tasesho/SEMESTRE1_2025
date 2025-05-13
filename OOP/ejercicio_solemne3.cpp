#include <iostream>
using namespace std;

class Empleado{
    protected:
        string Nombre;
        int Salario;
    
    public: Empleado(string nom=0, int sal=0){

    }

    //getters

    string getNombre(){
        return Nombre;
    }

    int getSalario(){
        return Salario;
    }

    //setters

    void setNombre(string Nombre){
        this->Nombre=Nombre;
    }

    void setSalario(int Salario){
        this->Salario=Salario;
    }

    void mostrarInfo(){
        cout<<"El nombre es: "<< Nombre<<"\n El salario es: "<<Salario<<endl;
    }
};

class Gerente : public Empleado{
    private: string departamiento;

    public:  Gerente(string nom, int sal, string dep) : Empleado(nom,sal), departamiento(dep) {}

    void mostrarInfo(){
        Empleado::mostrarInfo();
        cout<<"El area de trabajo es: "<<departamiento<<endl;
    }

};

int main(){
    const int N= 3;
    
    Empleado set[N];
   
    for(int i=0; i<N;i++)
    {
        
    }

    return 0;
}