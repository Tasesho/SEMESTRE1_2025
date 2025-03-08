#include <iostream>
using namespace std;

class Reloj {
private:
int Hora;
int Minuto;
int Segundo;

public: Reloj(int h, int m, int s) : Hora(h), Minuto(m), Segundo(s){}        //constructor en lista 

//getters
int getHora(){
return Hora;
}

int getMinuto(){
return Minuto;
}
int getSegundo(){
return Segundo;
}

//setters

void setHora(int Hora){
    if(h>=0 and h<=24){
        this->Hora=Hora;
    }

}
void setMinuto(int Minuto){
    if(h>=0 and h<=60){
        this->Minuto=Minuto;
    }
}
void setSegundo(int Segundo){
    if(h>=0 and h<=60){
        this->Segundo=Segundo;
    }
}

void imprimir(){         //metodo para imprimir
            cout<<"La hora es: "<<Hora<<endl;
            cout<<"Los minutos son:  "<<Minuto<<endl;
            cout<<"Los segundos son:  "<<Segundo<<endl;
        
}


int comparador(int Reloj1, int Reloj2){   //esta func compara 2 objetos, y decide si estan adelantados, atrasado o igual

    if(Reloj1>Reloj2){
    cout<<"el reloj1 esta adelantado"<<endl; 
    return Reloj1;
    }
        else if(Reloj1<Reloj2){
        cout<<"el reloj2 esta atrasado"<<endl;
        return Reloj2;
        }
            else if(Reloj1==Reloj2){
                cout<<"los relojes estan a la par"<<endl;
            }


}

/*To Do:

comparar(Reloj R), compara la hora con otro reloj e imprime un mensaje si el reloj esta adelantado, atrasado o igual comparado a R


Sincronizar(Reloj R), se sincroniza el reloj con respecto a R , se puede igualar usando getters
*/

};


int main(){
Reloj R1(4,52,23);
Reloj R2(2,34,11);

// hago estas lineas de abajo para obtener las horas minutos y segundos de los relojes, 
// y luego sumo sus datos y obtengo un resultado para usar la func comparador

int Hora= R1.getHora();
int Min= R1.getMinuto.();
int seg=R1.getSegundo();

int Reloj1= Hora + Min + seg;

int Hora= R2.getHora();
int Min= R2.getMinuto.();
int seg=R2.getSegundo();

int Reloj2= Hora + Min + seg;

R1.comparador(Reloj1,Reloj2);


return 0;
}