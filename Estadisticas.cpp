#include "Estadisticas.h"
Estadisticas::Estadisticas(vector<Texture> &Texturas,Font& fuente) {
    Texturas[7].loadFromFile("C:/Users/LESLIE/CLionProjects/ProyectoFinal/IMG/tablones.png");
    fondo.setTexture(Texturas[6]);
    fondo.setScale(1.05,1.1);
    maderas.setTexture(Texturas[7]);
    maderas.setPosition(50,100);
    maderas.setScale(1.5,1);
    auto Jugador1=new CuadroTexto(300,150,"JUGADOR 1",30,"negro",fuente);
    auto Jugador2=new CuadroTexto(500,150,"JUGADOR 2",30,"negro",fuente);
    auto Computadora=new CuadroTexto(700,150,"COMPUTADORA",30,"negro",fuente);
    auto PuntosVida=new CuadroTexto(100,270,"VIDA",30,"negro",fuente);
    auto Danio=new CuadroTexto(100,380,"DANIO",30,"negro",fuente);
    auto PartidasGanadas=new CuadroTexto(100,500,"GANADOS",30,"negro",fuente);
    auto Linea1=new CuadroTexto(400,270,"",30,"negro",fuente);
    auto Linea2=new CuadroTexto(400,380,"",30,"negro",fuente);
    auto Linea3=new CuadroTexto(400,500,"",30,"negro",fuente);
    Textos.push_back(Jugador1); Textos.push_back(Jugador2); Textos.push_back(Computadora);
    Textos.push_back(PuntosVida); Textos.push_back(Danio); Textos.push_back(PartidasGanadas);
    Textos.push_back(Linea1);Textos.push_back(Linea2);Textos.push_back(Linea3);
}
void Estadisticas::Ejecutar(RenderWindow &ventana,vector<Jugador*> &Jugadores){
    ventana.clear();
    ventana.draw(fondo);
    ventana.draw(maderas);
    string espacio="                       ";
    linea1 = to_string(Jugadores[0]->getPuntajeVida())+espacio+
             to_string(Jugadores[1]->getPuntajeVida())+espacio+
             to_string(Jugadores[2]->getPuntajeVida());
    linea2 = to_string(Jugadores[0]->getPuntajeDanio())+espacio+
             to_string(Jugadores[1]->getPuntajeDanio())+espacio+
             to_string(Jugadores[2]->getPuntajeDanio());
    linea3 = to_string(Jugadores[0]->getPartidasGan())+espacio+
             to_string(Jugadores[1]->getPartidasGan())+espacio+
             to_string(Jugadores[2]->getPartidasGan());
    Textos[6]->setTexto(linea1);
    Textos[7]->setTexto(linea2);
    Textos[8]->setTexto(linea3);
    for(auto& Texto:Textos){ventana.draw(Texto->getCuadroTexto());}
}