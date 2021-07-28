
#ifndef PRUEBA_DRAGONPODERES_H
#define PRUEBA_DRAGONPODERES_H

#include "Dragon.h"

class DragonPoderes:public Dragon{
    float DanioPoder;
    Sprite imagen;
public:
    DragonPoderes(string nombre, float danio, float defensa, float agilidad, float vida, float DanioPoder, Texture& textura);
    void LanzarPoder();
};


#endif //PRUEBA_DRAGONPODERES_H
