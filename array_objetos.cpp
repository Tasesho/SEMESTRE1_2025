#include <iostream>
using namespace std;

class Computador{
    private:
    string Marca;
    int Tamaño;
    int Pantalla;
   
    public:
        Computador(string m= "", int t=0, int p=0) : Marca(m), Tamaño(t), Pantalla(p) {}

    void mostrarComp(){
        cout<<"Marca: "<<Marca<<"\nAlmacenamiento: "<<Tamaño<<"\nPantalla: "<<Pantalla<<endl;
    }
    void ingresarDatos(){
        cout<<"ingrese Marca"<<endl;
        cin>>Marca;
        cout<<"ingrese Almacenamiento"<<endl;
        cin>>Tamaño;
        cout<<"ingrese Pantalla"<<endl;
        cin>>Pantalla;
    }
};


int main(){
    const int N= 3;
    Computador set[N];
   
    for(int i=0; i<N;i++)
    {
        cout<<"datos del Pc"<<i+1<<endl;
        set[i].ingresarDatos();
    }
   
    cout<<"El set es de: "<<endl;
    for(int i=0; i<N;i++){
    set[i].mostrarComp();
    }
    return 0;
}