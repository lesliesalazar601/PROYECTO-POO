#include "Computadora.h"
bool Computadora::OpcionEscogida(string &accion,int mando,string &info){
    srand(time(NULL));
    int opcion = rand()%4;
    if(opcion==0){accion="disparar";info="W";return true;}
    else if(opcion==1){accion="defenderse";info="D";return true;}
    else if(opcion==2){accion="especial";info="A";return true;}
    else{return false;}
}