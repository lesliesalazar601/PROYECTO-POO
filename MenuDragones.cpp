#include "MenuDragones.h"

void MenuDragones::MenuNuevo(vector<Texture>& ListaTexturas,Font& Fuente){
    for(auto &Dragon:ListaDragones){Dragon=nullptr;}
    for(auto &Texto:Textos){Texto= nullptr;}
    ListaDragones={};
    Textos={};
    Fondo.setTexture(ListaTexturas[6]);
    auto *DTierra=new DragonRegenera("DRAGON TIERRA", 5, 7, 2, 30, 2,ListaTexturas[0]);
    DTierra->setPosicionImagen(100,100);
    ListaDragones.push_back(DTierra);
    auto *DFuego=new DragonPoderes("DRAGON FUEGO",5,7,3,27,9,ListaTexturas[1]);
    DFuego->setPosicionImagen(500,100);
    ListaDragones.push_back(DFuego);
    auto *DAgua=new DragonDesaparece("DRAGON AGUA",7,4,8,24, ListaTexturas[2]);
    DAgua->setPosicionImagen(900,80);
    ListaDragones.push_back(DAgua);
    auto *DOro=new DragonPoderes("DRAGON ORO", 4,6,6,30,10,ListaTexturas[3]);
    DOro->setPosicionImagen(100,400);
    ListaDragones.push_back(DOro);
    auto *DJade=new DragonRegenera("DRAGON JADE", 6, 6, 3, 25, 3, ListaTexturas[4]);
    DJade->setPosicionImagen(500,400);
    ListaDragones.push_back(DJade);
    auto *DViento=new DragonDesaparece("DRAGON VIENTO",7,5,7,26,ListaTexturas[5]);
    DViento->setPosicionImagen(900,400);
    ListaDragones.push_back(DViento);
    auto TextRegenera=new CuadroTexto(100,40,"REGENERAN",40,"amarillo",Fuente);
    Textos.push_back(TextRegenera);
    auto TextPoderes=new CuadroTexto(500,40,"PODERES",40,"amarillo",Fuente);
    Textos.push_back(TextPoderes);
    auto TextDesaparecen=new CuadroTexto(900,40,"DESAPARECEN",40,"amarillo",Fuente);
    Textos.push_back(TextDesaparecen);
    auto TextDraTierra=new CuadroTexto(100,350,"DRAGON TIERRA",30,"blanco",Fuente);
    Textos.push_back(TextDraTierra);
    auto TextDraFuego=new CuadroTexto(500,350,"DRAGON FUEGO",30,"blanco",Fuente);
    Textos.push_back(TextDraFuego);
    auto TextDraAgua=new CuadroTexto(900,350,"DRAGON AGUA",30,"blanco",Fuente);
    Textos.push_back(TextDraAgua);
    auto TextDraOro=new CuadroTexto(100,650,"DRAGON ORO",30,"blanco",Fuente);
    Textos.push_back(TextDraOro);
    auto TextDraJade=new CuadroTexto(500,650,"DRAGON JADE",30,"blanco",Fuente);
    Textos.push_back(TextDraJade);
    auto TextDraViento=new CuadroTexto(900,650,"DRAGON VIENTO",30,"blanco",Fuente);
    Textos.push_back(TextDraViento);
    turno=0;
}
void MenuDragones::Ejecutar(RenderWindow &ventana, bool &comenzarBatalla,int interruptor,vector<Jugador*> &Jugadores){
    ventana.clear();
    ventana.draw(Fondo);
    for(auto &Dragon:ListaDragones){ventana.draw(Dragon->getImagen());}//dibuja los dragones
    for(int i=0; i<Textos.size(); i++){
        ventana.draw(Textos[i]->getCuadroTexto());
        if(i>2 && Textos[i]->PresionaTexto(ventana) && turno<2 && Textos[i]->getDisponibilidad()){
            Jugadores[0]->agregarDragon(ListaDragones[i-3]);
            turno++;
            Textos[i]->setDisponibilidad(false, turno);}
        if(i>2 && Textos[i]->PresionaTexto(ventana) && turno>1 && turno<4 && Textos[i]->getDisponibilidad()){
            Jugadores[interruptor]->agregarDragon(ListaDragones[i-3]);
            turno++;
            Textos[i]->setDisponibilidad(false, turno);}
    }
    if(turno==4){comenzarBatalla=true;}
}
