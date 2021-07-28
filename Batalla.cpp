#include "Batalla.h"

void Batalla::BatallaNueva(Texture &texturaFondo, Font& fuente){
    texturaFondo.loadFromFile("C:/Users/LESLIE/CLionProjects/ProyectoFinal/IMG/UTEC2.jpg");
    for(auto &Texto:Textos){Texto= nullptr;}
    Textos={};
    Fondo.setTexture(texturaFondo);
    auto GameOver=new CuadroTexto(50,100,"GAME OVER",200,"rojo",fuente);
    auto vidaJ0=new CuadroTexto(50,200,"",40,"verde",fuente);
    auto vidaJ1=new CuadroTexto(1100,200,"",40,"azul",fuente);
    Textos.push_back(GameOver); Textos.push_back(vidaJ0); Textos.push_back(vidaJ1);
    info0.setDatos(100,100,"",40,"verde",fuente);
    info1.setDatos(1100,100,"",40,"azul",fuente);
}
void Batalla::Ejecutar(RenderWindow &ventana,int &PalancaJ0,int &PalancaJ1,bool &ComenzarBatalla,int interruptor, vector<Jugador*> &Jugadores){
    ventana.clear();
    ventana.draw(Fondo);
    DragonBatallaJ0 = Jugadores[0]->getDragones()[0];
    DragonBatallaJ1 = Jugadores[interruptor]->getDragones()[0];
    if(DragonBatallaJ0->getVida()<=0){DragonBatallaJ0 = Jugadores[0]->getDragones()[1];}
    if(DragonBatallaJ1->getVida()<=0){DragonBatallaJ1 = Jugadores[interruptor]->getDragones()[1];}
    DragonBatallaJ0->setPosicionImagen(0,400);
    DragonBatallaJ1->setPosicionImagen(1300,400);
    DragonBatallaJ1->invertir();
    if(Jugadores[0]->OpcionEscogida(accionJ0,0,Info0)){PalancaJ0=1;}
    if(Jugadores[interruptor]->OpcionEscogida(accionJ1,1,Info1)){PalancaJ1=1;}
    info0.setTexto(Info0);
    info1.setTexto(Info1);
    string vida0, vida1;
    vida0 = "VIDA " + to_string(DragonBatallaJ0->getVida());
    vida1 = to_string(DragonBatallaJ1->getVida()) + " VIDA";
    Textos[1]->setTexto(vida0);
    Textos[2]->setTexto(vida1);
    ventana.draw(info0.getCuadroTexto());
    ventana.draw(info1.getCuadroTexto());
    ventana.draw(Textos[1]->getCuadroTexto());
    ventana.draw(Textos[2]->getCuadroTexto());
    ventana.draw(DragonBatallaJ0->getImagen());
    ventana.draw(DragonBatallaJ1->getImagen());
    if(PalancaJ1==1 && PalancaJ0==1){
        DragonBatallaJ0->Accion(ventana,0,DragonBatallaJ1,accionJ0,accionJ1);
        DragonBatallaJ1->Accion(ventana,1,DragonBatallaJ0,accionJ1,accionJ0);

        PalancaJ0=0;
        PalancaJ1=0;
    }
    if(Jugadores[0]->getDragones()[1]->getVida()<=0){
        ventana.draw(Textos[0]->getCuadroTexto());
        Jugadores[1]->setPuntaje(DragonBatallaJ1->getVida(),0,1);
        ComenzarBatalla = false;
    }else if(Jugadores[interruptor]->getDragones()[1]->getVida()<=0){
        ventana.draw(Textos[0]->getCuadroTexto());
        Jugadores[0]->setPuntaje(DragonBatallaJ0->getVida(),0,1);
        ComenzarBatalla = false;
    }else{ComenzarBatalla = true;}
}