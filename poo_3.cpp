#include <iostream>

using namespace std;

class persona{
    private: string nombre;
    int edad;

    public:
    persona(string n, int e){
        nombre =n;
        edad=e;
    }


    string getNombre(){
        return nombre;
    }

    int getEdad(){
        return edad;
    }

    void setNombre (string _nombre){
        nombre= _nombre;
    }

    void setEdad(int _edad){
        edad=_edad;
    }
        //metodos extra

    void presentarse(){
        cout<<"\nMinombre es: "<<nombre<<" y tengo "<<edad<<endl;
    }
};

class profesor: public persona{
    private: 
    int clases;
    string materia;
    public:
    profesor(string nn, int ee, string materia, int clases)   :  persona(nn,ee){

    this ->materia= materia;
    this ->clases = clases;

    }

    int getclases(){
    return clases;
    }

    string getmateria(){
        return materia;
    }


    };

int main(){
    //crear objetos

    persona p1("pablo", 25);
    persona p2 = persona ("juan", 30);
    
    

    persona personas[]= {p1,p2};

    for(int i=0; i<3;i++){

        personas[i].presentarse();


    }


    return 0;


}