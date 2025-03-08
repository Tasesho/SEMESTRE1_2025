#include <iostream>
using namespace std;

class persona {
    private:string nombre; 
        int edad; 
            int rut;
   
    public:
        persona(string n , int e , int r){
           
           nombre=n;
           edad=e;
           rut=r;
           
            /*nombre =nombre_;
            edad =edad_;
            rut =rut_;*/
        }
            string getNombre(){
                return nombre;
        }     
            int getEdad(){
                return edad;
        }
            int getRut(){
                return rut;
        }
            void setNombre(string nombre_){
                nombre= nombre_;
            }
            void setEdad(int edad_){
                edad=edad_;
            }
            void setRut(int rut_){
                rut = rut_;
            }
            
            //metodos extra

            void presentarse(){
        cout<<"\nMinombre es: "<<nombre<<" y tengo "<<edad<<" y mi rut es: "<<rut<<endl;
    }

};

int main (){

persona p1("juanito", 25, 21999999);
persona p2("valentinahoyosucio", 99, 1333339);

persona personas[]= {p1,p2};

for(int i=0; i<2; i++){

    personas[i].presentarse();
}



  return 0;
}
