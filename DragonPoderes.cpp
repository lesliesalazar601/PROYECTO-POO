#include "DragonPoderes.h"

DragonPoderes::DragonPoderes(string nombre, float danio, float defensa, float agilidad, float vida,
                             float DanioPoder, Texture& textura):
        Dragon(nombre, danio, defensa, agilidad, vida), DanioPoder(DanioPoder){
    if(nombre == "DRAGON ORO"){
        textura.loadFromFile("C:/Users/LESLIE/CLionProjects/ProyectoFinal/IMG/DragonOro.png");
        imagen.setTexture(textura);
        imagen.setScale(0.5,0.5);
        Dragon::setImagen(imagen);
    }else if(nombre == "DRAGON FUEGO"){
        textura.loadFromFile("C:/Users/LESLIE/CLionProjects/ProyectoFinal/IMG/DragonFuego.png");
        imagen.setTexture(textura);
        imagen.setScale(0.7,0.7);
        Dragon::setImagen(imagen);
    }
}
void DragonPoderes::LanzarPoder(){

}