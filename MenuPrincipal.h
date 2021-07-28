#ifndef PRUEBA_MENUPRINCIPAL_H
#define PRUEBA_MENUPRINCIPAL_H

#include <iostream>
#include <SFML/Graphics.hpp>
#include "CuadroTexto.h"
#include "MenuDragones.h"
using namespace sf;
using namespace std;

class MenuPrincipal {
    Sprite Fondo; //clase de SFML
    vector<CuadroTexto*> Textos;
public:
    explicit MenuPrincipal(Texture& fondo, Font& fuente);
    int OpcionEscogida(RenderWindow &window);
    void Ejecutar(RenderWindow& ventana, int &interruptor);//implementacion
};


#endif //PRUEBA_MENUPRINCIPAL_H
