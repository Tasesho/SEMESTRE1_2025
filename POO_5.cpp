#include <iostream>
using namespace std;

class animal {

    protected:       //en una primera instancia es un private, luego cambia a protected cuando usamos herencia
                    //se le dan los atributos a la class
        string Color;
        string Name;

    public: animal(string color, string name) : Color(color),Name(name){}  //inicializamos el constructor

        string getColor()const{
            return Color; 
            }

        string getName()const{
            return Name;
            }

        void setColor(string Color){
            this->Color=Color;
            }


        void setName(string Name){
            this->Name=Name;
            }

        void imprimir(){         //metodo para imprimir
            cout<<"El nombre del animal es: "<<Name<<endl;
            cout<<"El color del animal es: "<<Color<<endl;
        }
        string Concatenar(){
            string frase = Color +" "+ Name;
            return frase;

    }
};

class dog: public animal{
//se crea una nueva class llamada dog que heredara los atributos y methods de la class animal
    private:
        string Raza;   //atributos de la clase perro
        int CantidadOjos;  //atributo de cantidad de ojos, es solo a modo de ejemplo !!

    public:
        dog(string raza, int CantO, string Color, string Name) : animal(Color,Name) ,Raza(raza), CantidadOjos(CantO){}

        string getRaza()const{
            return Raza;
        }
        int getCantidadOjos(){
            return CantidadOjos;
        }
        void setRaza(string Raza){
            this->Raza=Raza;
        }
        void setCantidadOjos(int CantidadOjos){
            this->CantidadOjos=CantidadOjos;
        }
        string Concatenar(){
            string frase = Color + " " + Raza + " " + Name;
            return frase;
        }
//se hacen los methods de la subclass dog  
};
int main(){

animal *animal1 = new animal("rojo","andy");
dog *perro1 = new dog("chiwawa", 4, "azul", "antonio");
//se crean punteros para usar la funcion concatenar y usar polimorfismo
animal *individuos[] = {animal1,perro1};

for(int i=0; i<2;i++){
    cout<<individuos[i]->Concatenar()<<endl;
}
return 0;
}