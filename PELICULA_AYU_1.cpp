#include <iostream>
using namespace std;

class Pelicula {
private: 
string Nombre; //nombre
int Duracion; //duracion
string Genero; //genero

public: Pelicula(string n, int d, string g) : Nombre(n), Duracion(d), Genero(g){}   //constructor inicializador en lista

string getNombre()const{                 //se establecen los setters y getters, ademas de la func del ejercicio.
return Nombre;
}

int getDuracion()const{
return Duracion;
}

string gerGenero(){
return Genero;
}

void setNombre(string Nombre){
this->Nombre=Nombre;
}

void setDuracion(int Duracion){
this->Duracion=Duracion;
}

void setGenero(string Genero){
this->Genero=Genero;
}


void imprimir(){         //metodo para imprimir
            cout<<"el nombre es "<<Nombre<<endl;
            cout<<"la duracion es "<<Duracion<<endl;
            cout<<"el genero es "<<Genero<<endl;
        
}


};    // cierre class


int comparador(int pelicula1, int pelicula2){   //esta func compara 2 objetos, y compara sus duraciones,                             //si pelicula1 dura mas, manda un print.

if(pelicula1>pelicula2){
cout<<"pelicula1 dura mas "<<endl; 
return pelicula1;
}
else{
cout<<"pelicula2 dura mas "<<endl;
return pelicula2;
}

}




int main(){
Pelicula P1("halloween", 310, "terror");
Pelicula P2("scary movie",200,"jajas");

//Pelicula(string n, int d, string g) : Nombre(n), Duracion(d), Genero(g){}

P1.imprimir();
P2.imprimir();


int Duracion1 =  P1.getDuracion();
int Duracion2 = P2.getDuracion(); 



comparador(Duracion1, Duracion2);




return 0;
}


//ejercicios ayudantia1 prog avanz