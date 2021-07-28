#include "MenuPrincipal.h"

using namespace sf;
MenuPrincipal::MenuPrincipal(Texture& fondo, Font& fuente){
    fondo.loadFromFile("C:/Users/LESLIE/CLionProjects/ProyectoFinal/IMG/FondoJF.jpg");
    Fondo.setTexture(fondo);
    Fondo.setScale(1.05,1.1);
    auto* t1=new CuadroTexto(350,100,"PROTEGE TUS DRAGONES", 60, "amarillo", fuente);
    auto* t2=new CuadroTexto(500,250,"MODO UNO VS UNO", 40, "amarillo", fuente);
    auto* t3=new CuadroTexto(500,350,"MODO UNO VS PC",40,"amarillo", fuente);
    auto* t4=new CuadroTexto(500,450,"ESTADISTICAS",40,"amarillo", fuente);
    Textos.emplace_back(t1);
    Textos.emplace_back(t2);
    Textos.emplace_back(t3);
    Textos.emplace_back(t4);
}
int MenuPrincipal::OpcionEscogida(RenderWindow& window){
    if(Textos[1]->PresionaTexto(window)){return 1;}
    if(Textos[2]->PresionaTexto(window)){return 2;}
    if(Textos[3]->PresionaTexto(window)){return 3;}
    else{return 0;}
}
void MenuPrincipal::Ejecutar(RenderWindow &ventana, int &interruptor){
    if(!MenuPrincipal::OpcionEscogida(ventana) && interruptor==0){
        ventana.clear();
        ventana.draw(Fondo);//aqui
        for(auto &texto:Textos){
            ventana.draw(texto->getCuadroTexto());/*aqui*/}
    }
    if(MenuPrincipal::OpcionEscogida(ventana)==1){interruptor=1;}
    if(MenuPrincipal::OpcionEscogida(ventana)==2){interruptor=2;}
    if(MenuPrincipal::OpcionEscogida(ventana)==3){interruptor=3;}
}
