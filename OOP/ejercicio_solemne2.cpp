#include <iostream>
using namespace std;

class Empleado{
    protected:
        string Nombre;
        float Salario;
    
    public: Empleado(string nom, float sal) : Nombre(nom), Salario(sal) {}

    void mostrarInfo(){
        cout<<"El Nombre es: "<<Nombre<<endl;
        cout<<"La paga es: "<<Salario<<endl;
    }
};

class Gerente : public Empleado{
private:
    string Area;

public: Gerente(string nom, float sal, string a) : Empleado(nom,sal), Area(a) {} 

void mostrarInfo(){
    Empleado::mostrarInfo();

    cout<<"EL Area de trabajo es: "<<Area<<endl;
}

};


int main(){
    
    Empleado e1("Pepe", 300.5);
    Gerente g1("alfredo", 400.2, "coding");

    e1.mostrarInfo();
    g1.mostrarInfo();

    return 0;
} 