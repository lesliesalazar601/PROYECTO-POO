
#ifndef PRUEBA_DRAGON_H
#define PRUEBA_DRAGON_H

#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;
using namespace sf;
class Dragon {
    Sprite ImagenDragon;
    string nombre;
    int danio;
    int defensa;
    int agilidad;
    int vida=0;
    int numInversiones=0;
    CircleShape bala;
public:
    Dragon(string nombre, int danio, int defensa, int agilidad, int vida);
    void setPosicionImagen(float posX,float posY);
    void setImagen(Sprite& Imagen);
    void invertir();
    virtual Sprite& getImagen();
    virtual int& getVida();
    virtual int getDanio();
    virtual void Disparar(RenderWindow& ventana, int posicion, Dragon* &enemigo);
    virtual void Defenderse(string &accionE,Dragon* &enemigo);
    virtual void Recargar();
    virtual void BajarVida(int DanioRecibido);
    virtual void Accion(RenderWindow& ventana,int posicion,Dragon* &enemigo,string &accion,string &accionE);
};

#endif //PRUEBA_DRAGON_H
