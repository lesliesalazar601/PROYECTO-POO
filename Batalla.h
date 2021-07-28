#ifndef PRUEBA_BATALLA_H
#define PRUEBA_BATALLA_H

#include <vector>
#include "Jugador.h"
#include "CuadroTexto.h"
using namespace std;
class Batalla {
    Dragon* DragonBatallaJ0=nullptr;
    Dragon* DragonBatallaJ1=nullptr;
    Sprite Fondo;
    vector<CuadroTexto*> Textos;
    string accionJ0="nada", accionJ1="nada",Info0,Info1;
    CuadroTexto info1,info0;
public:
    Batalla()=default;
    void BatallaNueva(Texture &texturaFondo, Font& fuente);
    void Ejecutar(RenderWindow &ventana, int &PalancaJ0, int &PalancaJ1,bool &ComenzarBatalla,int interruptor, vector<Jugador*> &Jugadores);
};

#endif //PRUEBA_BATALLA_H
