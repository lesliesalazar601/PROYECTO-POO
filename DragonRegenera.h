
#ifndef PRUEBA_DRAGONREGENERA_H
#define PRUEBA_DRAGONREGENERA_H

#include "Dragon.h"
class DragonRegenera:public Dragon{
    float velocidadRegeneracion;
    Sprite imagen;
public:
    DragonRegenera(string nombre, float danio, float defensa, float agilidad, float vida, float vRegen, Texture& textura);
    void Regenerarse();
};


#endif //PRUEBA_DRAGONREGENERA_H
