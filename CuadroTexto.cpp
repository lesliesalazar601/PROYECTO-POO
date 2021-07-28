#include "CuadroTexto.h"
CuadroTexto::CuadroTexto(float X, float Y, string texto, int tamanio, string color, Font& fuente){
    fuente.loadFromFile("C:/Users/LESLIE/CLionProjects/ProyectoFinal/FUENTES/Maquina1.otf");
    CuadroDeTexto.setFont(fuente);
    CuadroDeTexto.setString(texto);
    CuadroDeTexto.setCharacterSize(tamanio);
    if(color=="blanco"){CuadroDeTexto.setFillColor(Color::White);}
    if(color=="negro"){CuadroDeTexto.setFillColor(Color::Black);}
    if(color=="amarillo"){CuadroDeTexto.setFillColor(Color::Yellow);}
    if(color=="rojo"){CuadroDeTexto.setFillColor(Color::Red);}
    if(color=="azul"){CuadroDeTexto.setFillColor(Color::Blue);}
    if(color=="verde"){CuadroDeTexto.setFillColor(Color::Green);}
    CuadroDeTexto.setPosition(X,Y);
}
void CuadroTexto::setDatos(float X, float Y, string texto, int tamanio, string color, Font& fuente){
    fuente.loadFromFile("C:/Users/LESLIE/CLionProjects/ProyectoFinal/FUENTES/Maquina1.otf");
    CuadroDeTexto.setFont(fuente);
    CuadroDeTexto.setString(texto);
    CuadroDeTexto.setCharacterSize(tamanio);
    if(color=="blanco"){CuadroDeTexto.setFillColor(Color::White);}
    if(color=="negro"){CuadroDeTexto.setFillColor(Color::Black);}
    if(color=="amarillo"){CuadroDeTexto.setFillColor(Color::Yellow);}
    if(color=="rojo"){CuadroDeTexto.setFillColor(Color::Red);}
    if(color=="azul"){CuadroDeTexto.setFillColor(Color::Blue);}
    if(color=="verde"){CuadroDeTexto.setFillColor(Color::Green);}
    CuadroDeTexto.setPosition(X,Y);
}
bool CuadroTexto::PresionaTexto(RenderWindow& window) {
    int mouse_x, mouse_y;
    mouse_x = Mouse::getPosition(window).x;//funcion sfml - pide posicion x del mouse
    mouse_y = Mouse::getPosition(window).y;//funcion sfml - pide posicion y del mouse
    float posXinicia=CuadroDeTexto.getGlobalBounds().left;              //obtiene la posicion izquierda(x) del texto
    float posXfin   =posXinicia + CuadroDeTexto.getGlobalBounds().width;//obtiene la posicion derecha(x) del texto
    float posYinicia=CuadroDeTexto.getGlobalBounds().top;               //obtiene la posicion de arriba(y) del texto
    float posYfin= posYinicia+ CuadroDeTexto.getGlobalBounds().height;  //obtiene la posicion baja(y) del texto
    if(Mouse::isButtonPressed(Mouse::Left) &&                     //si el mouse fue presionado
       posXinicia <= (float)mouse_x && posXfin >= (float)mouse_x &&     //y si su posicion en x en ese instante esta
                                                                        //entre <izquierda y derecha> del texto
       posYinicia <= (float)mouse_y && posYfin >= (float)mouse_y){      //y si su posicion en y esta entre
                                                                        //<arriba y abajo> del texto
        return true;
    }else{ return false;}
}
Text& CuadroTexto::getCuadroTexto(){
    return CuadroDeTexto;
}
bool CuadroTexto::getDisponibilidad() const{return disponible;}
void CuadroTexto::setDisponibilidad(bool disp, int turno){
    disponible = disp;
    if(!disp && 0<turno && turno<3){
        CuadroDeTexto.setFillColor(Color::Green);
    }else if(!disp && 2<turno){
        CuadroDeTexto.setFillColor(Color::Blue);
    }}
void CuadroTexto::setTexto(string &texto){
    CuadroDeTexto.setString(texto);
}
