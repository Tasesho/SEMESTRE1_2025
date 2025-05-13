#include 
#include <iostream>
using namespace std;
using namespace sf;

int main{
   //Pregunta al User
    int Respuesta;
    cout<<"Eres un DAYUUM?"
    
    //config de la ventana
    RenderWindow window(VideoMode(800, 600), "DAYUM detecter");
    Texture texture;
    Sprite sprite;

    //carga la imagen segun la respuesta
    if(Respuesta == 1){
        //open text box with image;
        if(!texture.loadFromFile("venomvoid.jpg")){
            cout<<"Error al cargar imagen 'venomvoid.jpg'"<<endl;
            return -1;  //codigo de error -1 termina el prog
        }  
    }
    else{
        //open text box with alt image;
        if(!texture.loadFromFile("images.jpg")) {
            cout<<"Error al cargar imagen 'images.jpg'" <<endl;
            return -1;
        }
    }

    sprite.setTexture(texture);

    //bucle de la ventana

    while(window.isOpen()){
        Event event;
        while(window.pollEvent(event)) {
            if(event.type == Event::Closed)
            window.close();
        }
    }


    window.clear();
    window.draw(sprite); // aparece imagen
    window.display();


    return 0;
}