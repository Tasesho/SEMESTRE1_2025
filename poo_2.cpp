#include <iostream>

using namespace std;


class fraccion{
    private: 
        int numerador;
        int denominador;
    
    public: 
        fraccion(int numerador, int denominador){
    
    this -> numerador =numerador;              //se puede escribir de las 2 formas.  numerador= _numerador;
    this -> denominador=denominador;
    }
    
    void setNumerador(int numerador){
        this->numerador=numerador;
    }
    
    int getNumerador(){
    cout<<"el numerador es: "<<numerador<<endl;
    }
    
    void setDenominador(int denominador){
    this->denominador = denominador;
    }
    
    
    int getDenominador(){
        cout<<"el denominador es: "<<denominador<<endl;
    }
    
    
    void imprimir(){
        cout<<"la fraccion es: ("<<numerador<<"/"<<denominador<<")"<<endl;
        cout<<"el resultado es:" <<numerador/denominador<<endl;
    }

//codeamos la funcion Maximo Comun Divisor
    int MCD(int a, int b){
    
        if(b==0){
            return a;
        }
        else{
            return (b, a%b);
        }
        
        
    }
    
    //codeamos la funcion simplificar usando la funcion de arriba 
    void simplificar(int& numerador, int& denominador){
        int Valor_MCD = MCD(numerador, denominador);
        numerador/= Valor_MCD;
        denominador/=Valor_MCD;
    }
    
};


int main(){

fraccion *x = new fraccion(5,8);
    x->setNumerador(45);
    x->imprimir();

return 0;
}



// time spend in this code  1hr 50 min