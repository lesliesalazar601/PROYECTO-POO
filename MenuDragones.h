#ifndef PRUEBA_MENUDRAGONES_H
#define PRUEBA_MENUDRAGONES_H

#include "Dragon.h"
#include "DragonRegenera.h"
#include "DragonDesaparece.h"
#include "DragonPoderes.h"
#include "CuadroTexto.h"
#include "Jugador.h"
#include "Computadora.h"
#include <vector>
class MenuDragones {
    vector<Dragon*> ListaDragones;
    vector<CuadroTexto*> Textos;
    Sprite Fondo;
    int turno=0;
public:
    MenuDragones()=default;
    void MenuNuevo(vector<Texture>& ListaTexturas,Font& Fuente);
    void Ejecutar(RenderWindow &ventana, bool &comenzarBatalla, int interruptor,vector<Jugador*> &Jugadores);
};


#endif //PRUEBA_MENUDRAGONES_H
