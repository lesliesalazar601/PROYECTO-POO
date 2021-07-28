#include "Dragon.h"
Dragon::Dragon(string nombre, int danio, int defensa, int agilidad, int vida):
        nombre(nombre), danio(danio), defensa(defensa), agilidad(agilidad), vida(vida){
    bala.setRadius(20);
    bala.setFillColor(Color::Yellow);
}
void Dragon::setPosicionImagen(float posX,float posY){ImagenDragon.setPosition(posX,posY);}
void Dragon::setImagen(Sprite &Imagen){ImagenDragon = Imagen;}
void Dragon::invertir(){
    float EscalaX= ImagenDragon.getScale().x;
    float EscalaY= ImagenDragon.getScale().y;
    numInversiones++;
    if(numInversiones<2)
        ImagenDragon.setScale(-1 * EscalaX, EscalaY);}
void Dragon::Disparar(RenderWindow &ventana, int posicion, Dragon* &enemigo){
    if(posicion==1){
        bala.setPosition(50,500);
        bala.move(0.5,0);
        ventana.draw(bala);
    }else{
        bala.setPosition(1100,500);
        bala.move(-0.5,0);
        ventana.draw(bala);
    }
    enemigo->BajarVida(danio);
}
void Dragon::Defenderse(string &accionE,Dragon* &enemigo){
    if(accionE=="disparar" && enemigo->getDanio()>defensa){vida += defensa;}
    if(accionE=="disparar" && enemigo->getDanio()<=defensa){vida += enemigo->getDanio();}
}
void Dragon::Recargar(){
}
void Dragon::BajarVida(int DanioRecibido){
    if(vida-DanioRecibido<=0){vida=0;}
    else{vida -= DanioRecibido;}
}
Sprite& Dragon::getImagen(){return ImagenDragon;}
int& Dragon::getVida(){return vida;}
int Dragon::getDanio(){return danio;}
void Dragon::Accion(RenderWindow& ventana,int posicion,Dragon* &enemigo,string &accionN,string &accionE){
    if(accionN=="disparar"){Dragon::Disparar(ventana,posicion,enemigo);}
    if(accionN=="defenderse"){Dragon::Defenderse(accionE,enemigo);}
}