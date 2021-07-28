#ifndef PRUEBA_JUGADOR_H
#define PRUEBA_JUGADOR_H

#include "Dragon.h"

using namespace std;
class Jugador {
protected:
    vector<Dragon*> Dragones;
    vector<int> puntos={0,0,0};
public:
    Jugador()=default;
    virtual void agregarDragon(Dragon* &dragon);
    virtual vector<Dragon*>& getDragones();
    virtual void BorrarDragones();
    virtual int getPuntajeVida();
    virtual int getPuntajeDanio();
    virtual int getPartidasGan();
    virtual void setPuntaje(int pntVida,int pntDanio,int parGan);
    virtual bool OpcionEscogida(string &accion,int mando,string &info);
};


#endif //PRUEBA_JUGADOR_H
