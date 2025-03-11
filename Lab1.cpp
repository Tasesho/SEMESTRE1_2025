#include <iostream>
using namespace std;

int main(){   //se establecen variables
    char opcion;
    int radio;
    float pi=3.14;
    float base;
    float altura;
    float AreaCiruclo;
    int AreaTriangulo;
    int AreaRectangulo;

    cout<<"elija una opcion\n(1)Circulo\n(2)Triangulo\n(3)Rectangulo"<<endl;
    cin>>opcion;

    if(opcion=='1'){            //condicional para circulo
        cout<<"ingrese Radio(numero entero)"<<endl;
        cin>>radio;
        AreaCiruclo= pi*(radio*radio);
        cout<<"El AREA del circulo es: "<< AreaCiruclo<<endl;
        return 0;
    }
    else if (opcion=='2')     //condicional para triangulo
    {
        cout<<"ingrese Base"<<endl;
        cin>>base;
        cout<<"ingrese Altura"<<endl;
        cin>>altura;
        AreaTriangulo= (altura*base)/2;
        cout<<"El AREA del Triangulo es: "<< AreaTriangulo<<endl;
        return 0;
    }
    else if(opcion=='3'){          //condicional para Rectangulo
        cout<<"ingrese Base"<<endl;
        cin>>base;
        cout<<"ingrese Altura"<<endl;
        cin>>altura;
        AreaRectangulo= (altura*base);
        cout<<"El AREA del Rectangulo es: "<< AreaRectangulo<<endl;
        return 0;
    }
}