#include "Jugador.h"

void Jugador::agregarDragon(Dragon* &dragon){Dragones.push_back(dragon);}
vector<Dragon*>& Jugador::getDragones(){return Dragones;}
void Jugador::BorrarDragones(){
    for(auto &Dragon:Dragones){Dragon= nullptr;}
    Dragones={};
}
int Jugador::getPuntajeVida(){return puntos[0];}
int Jugador::getPuntajeDanio(){return puntos[1];}
int Jugador::getPartidasGan(){return puntos[2];}
void Jugador::setPuntaje(int pntVida,int pntDanio,int parGan){
    puntos[0] += pntVida;
    puntos[1] += pntDanio;
    puntos[2] += parGan;}
bool Jugador::OpcionEscogida(string &accion,int mando,string &info){
    if(mando==0){
        if(Keyboard::isKeyPressed(Keyboard::W)){accion="disparar";info="W";return true;}
        else if(Keyboard::isKeyPressed(Keyboard::D)){accion="defenderse";info="D";return true;}
        else if(Keyboard::isKeyPressed(Keyboard::A)){accion="especial";info="A";return true;}
        else{return false;}
    }
    if(mando==1){
        if(Keyboard::isKeyPressed(Keyboard::Up)){accion="disparar";info="U";return true;}
        else if(Keyboard::isKeyPressed(Keyboard::Right)){accion="defenderse";info="R";return true;}
        else if(Keyboard::isKeyPressed(Keyboard::Left)){accion="especial";info="L";return true;}
        else{return false;}
    }else{return false;}
}