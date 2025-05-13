#include <iostream>
using namespace std;

class PC{
    private:
        string NombreCliente;
        int ram;
        int vram;
    
    public:
        PC(string NC, int r, int vr) : NombreCliente(NC),ram(r),vram(vr) {}  //constructor
        
        string getnombrecliente() const {      //consultar nombre cliente
            return NombreCliente;
        }

        int getRam(){         //consultar ram del equipo
            return ram;
        }

        int getVram(){               //consultar vram del equipo
            return vram;
        }

        void setnombrecliente(string NombreCliente){     //establecer nombre cliente
            this->NombreCliente=NombreCliente;
        }

        void setRam(int ram){            //establecer ram del equipo
            this->ram=ram;
        }

        void setvram(int vram){               //establecer vram del equipo
            this->vram=vram;  
        }

        void imprimir(){         //metodo para imprimir
            cout<<"El nombre del cliente es: "<<NombreCliente<<endl;
            cout<<"La Ram del equipo es: "<<ram<<"gb"<<endl;
            cout<<"La Vram del equipo es: "<<vram<<"gb"<<endl;
        }
};

class TarjetaVideo: public PC {
//se crea una nueva clase llamada tarjetade video heredando las caracteristicas de la clase PC
    private:
        string TarjVideo;   //atributos de la clase nueva

    public:
        TarjetaVideo(string TV, string NC, int r, int vr) : PC(NC,r,vr), TarjVideo(TV) {}   //constructor 
            
        string getTarjetavideo(){        //consultar nombre tarjeta video 
            return TarjVideo;
        }

        void setTarjetavideo(string TarjVideo){   //establecer nombre tarjeta de video
            this->TarjVideo=TarjVideo;
        }
};


int main(){
//Crear objetos

PC  computador1("pepito", 16,8);
TarjetaVideo computador2("NVIDIAGEFORCE", "juanito(uso del objeto heredado)",32,16);


//usar objetos

computador1.imprimir();
cout<<endl;


computador2.imprimir();
cout<< "la tarjeta de video es: "<<computador2.getTarjetavideo()<<endl;
cout<<endl;

//modificar atributos

computador1.setRam(32);
computador2.setTarjetavideo ("AMDRadeon (aca se modifican los atributos");


//impimir informacion actualizada

computador1.imprimir();
cout<<endl;


computador2.imprimir();
cout<<"la tarjeta de video es: "<<computador2.getTarjetavideo()<<endl;


return 0;
}