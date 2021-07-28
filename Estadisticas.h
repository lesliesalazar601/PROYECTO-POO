#ifndef PRUEBA_ESTADISTICAS_H
#define PRUEBA_ESTADISTICAS_H

#include <SFML/Graphics.hpp>
#include "Jugador.h"
#include "CuadroTexto.h"
#include <vector>
using namespace sf;
class Estadisticas {
    Sprite fondo;
    Sprite maderas;
    string linea1,linea2,linea3;
    vector<CuadroTexto*> Textos;
public:
    Estadisticas(vector<Texture> &Texturas,Font &fuente);
    void Ejecutar(RenderWindow &ventana,vector<Jugador*> &Jugadores);
};


#endif //PRUEBA_ESTADISTICAS_H
