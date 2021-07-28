#include "Juego.h"
Juego::Juego(){
    auto *jug1 = new Jugador;
    Jugadores.push_back(jug1);
    auto *jug2 = new Jugador;
    Jugadores.push_back(jug2);
    auto *jug3 = new Computadora;
    Jugadores.push_back(jug3);
}
void Juego::CorrerJuego() {
    RenderWindow window(VideoMode(1300, 700, 32), "Juego batalla");
    Font fuente;//Una sola fuente para todos los textos del juego
    Texture t1,t2,t3,t4,t5,t6,tfondoPrincipal,tfondoUtec,tTablas;
    tfondoPrincipal.loadFromFile("C:/Users/LESLIE/CLionProjects/ProyectoFinal/IMG/FondoJF.jpg");
    vector<Texture> ListaTexturas{t1,t2,t3,t4,t5,t6,tfondoPrincipal,tTablas};
    CuadroTexto MenuP(1100,10,"MENU PRINCIPAL",20,"rojo",fuente);
    MenuPrincipal menu(tfondoPrincipal, fuente);//1 textura
    auto menuDragones=new MenuDragones;
    menuDragones->MenuNuevo(ListaTexturas, fuente);
    Estadisticas estadisticas(ListaTexturas, fuente);
    auto batalla=new Batalla;
    batalla->BatallaNueva(tfondoUtec, fuente);
    int interruptor = 0;
    bool comenzarBatalla = false;
    int PalancaJ0=0, PalancaJ1=0;
    while(window.isOpen()){
        Event event{};
        while (window.pollEvent(event))
        {   if (event.type == Event::Closed)
                window.close();
        }

        if(interruptor == 0){menu.Ejecutar(window,interruptor);}
        if(interruptor == 1){
            menuDragones->Ejecutar(window,comenzarBatalla, 1,Jugadores);//Da dragones a los jugadores
        }
        if(interruptor == 2){
            menuDragones->Ejecutar(window,comenzarBatalla, 2, Jugadores);//Da dragones a los jugadores
        }
        if(interruptor == 3){estadisticas.Ejecutar(window,Jugadores);}
        if(comenzarBatalla){
            batalla->Ejecutar(window, PalancaJ0, PalancaJ1, comenzarBatalla, interruptor,Jugadores);}
        if(MenuP.PresionaTexto(window)){
            interruptor=0;
            comenzarBatalla= false;
            menuDragones->MenuNuevo(ListaTexturas, fuente);
            batalla->BatallaNueva(tfondoUtec, fuente);
            for(auto &Jugador:Jugadores){Jugador->BorrarDragones();}
        }
        window.draw(MenuP.getCuadroTexto());
        window.display();
    }
}