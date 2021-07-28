
#include "DragonDesaparece.h"
DragonDesaparece::DragonDesaparece(string nombre,float danio,float defensa,float agilidad,float vida,Texture& textura):
                  Dragon(nombre, danio,defensa,agilidad,vida){
    if(nombre == "DRAGON AGUA"){
        textura.loadFromFile("C:/Users/LESLIE/CLionProjects/ProyectoFinal/IMG/DragonAgua.png");
        imagen.setTexture(textura);
        imagen.setScale(0.6,0.6);
        Dragon::setImagen(imagen);
    }else if(nombre == "DRAGON VIENTO"){
        textura.loadFromFile("C:/Users/LESLIE/CLionProjects/ProyectoFinal/IMG/DragonViento.png");
        imagen.setTexture(textura);
        imagen.setScale(1.5,1.5);
        Dragon::setImagen(imagen);
    }
}
void DragonDesaparece::Desaparecer() {
    
}