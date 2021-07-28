#ifndef PRUEBA_DRAGONDESAPARECE_H
#define PRUEBA_DRAGONDESAPARECE_H

#include "Dragon.h"

class DragonDesaparece: public Dragon{
    Sprite imagen;
public:
    DragonDesaparece(string nombre, float danio, float defensa, float agilidad, float vida, Texture& textura);
    void Desaparecer();
};


#endif //PRUEBA_DRAGONDESAPARECE_H
