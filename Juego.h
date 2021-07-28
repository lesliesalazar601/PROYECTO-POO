
#ifndef PRUEBA_JUEGO_H
#define PRUEBA_JUEGO_H

#include "MenuDragones.h"
#include "MenuPrincipal.h"
#include "Batalla.h"
#include "Estadisticas.h"
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace std;
using namespace sf;

class Juego {
    vector<Jugador*> Jugadores;
public:
    Juego();
    void CorrerJuego();
};


#endif //PRUEBA_JUEGO_H
