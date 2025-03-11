#include <iostream>
using namespace std;

class Vehiculo{
    private:        //se establecen atributos
    string Marca;
    string Modelo;
    int YearFabric;
    int Kilometraje;
    string Patente;
    string Color;
    int Precio;


//se establece el constructor en listo
        
        public: Vehiculo(string marca, string model, string color,string patente, int yfabric, int precio,int kilometros)
             : Marca(marca), Modelo(model), Color(color), Patente(patente), YearFabric(yfabric), Kilometraje(kilometros), Precio(precio) {}

        //getters

    string getMarca(){
        return Marca;
    }

    string getModelo(){
        return Modelo;
    }
    string getColor(){
        return Color;
    }
    string getPatente(){
        return Patente;
    }
    int getKilometraje(){
        return Kilometraje;
    }
    int getPrecio(){
        return Precio;
    }
    int getYearFabric(){
        return YearFabric;
    }
        //Setters

    void setMarca(string Marca){
        this->Marca=Marca;
    }

    void setModelo(string Modelo){ // setters
                this->Modelo=Modelo;
            }
    void setColor(string Color){ // setters
                this->Color=Color;
            }
    void setPatente(string Patente){ // setters
                this->Patente=Patente;
            }
    void setYearFabric(int YearFabric){ // setters
                this->YearFabric=YearFabric;
            }
    void setPrecio(int Precio){
        this->Precio=Precio;
    }
    void setKilometraje(int Kilometraje){
        this->Kilometraje=Kilometraje;
    }


//nuevos methods;

void cambioColor(string c){
    setColor(c);
    cout<<"el nuevo color es"<<c<<endl;
}

void reajustePrecio(int x){
    setPrecio(Precio+(Precio*x/100));
    cout<<"el nuevo precio es: "<<Precio<<endl;
    
}

void rejuvenece(int x){
    setYearFabric(YearFabric+ x);
    int KMnew=Kilometraje -(Kilometraje*12/100);
    setKilometraje(KMnew);
    cout<<"el nuevo año de fabricacion es: "<<YearFabric<<endl;
    cout<<"el nuevo kilometraje es: "<<Kilometraje<<endl;

}


char digitoRestriccion(){
    return Patente.back();
}

void imprimir(){         //metodo para imprimir
            cout<<"La marca es: "<<Marca<<endl;
            cout<<"El modelo es: "<<Modelo<<endl;
            cout<<"El año de fabric es: "<<YearFabric<<endl;
            cout<<"El kmtraje es: "<<Kilometraje<<endl;
            cout<<"La Patente es: "<<Patente<<endl;
            cout<<"El color es: "<<Color<<endl;
            cout<<"El precio es: "<<Precio<<endl;
        
        }
};





int main(){
//crear objetos

Vehiculo* Vehiculo1 = new Vehiculo("toyota", "a415", "azul", "AABB37", 1999, 300, 1000);



//usamos los methods;


Vehiculo1->imprimir();
Vehiculo1->cambioColor(" rojo");
Vehiculo1->reajustePrecio(9);
Vehiculo1->rejuvenece(20);
cout<<"el ultimo numero de la patente es: "<<Vehiculo1->digitoRestriccion()<<endl;


delete Vehiculo1;  //libera de la memoria el objeto;

    return 0;
}