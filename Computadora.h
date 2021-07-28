#ifndef PRUEBA_COMPUTADORA_H
#define PRUEBA_COMPUTADORA_H

#include <iostream>
#include <ctime>
#include "Jugador.h"
using namespace std;

class Computadora:public Jugador{
public:
    Computadora()=default;
    bool OpcionEscogida(string &accion,int mando,string &info) override;
};


#endif //PRUEBA_COMPUTADORA_H
