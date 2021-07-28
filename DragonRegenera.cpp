#include "DragonRegenera.h"

DragonRegenera::DragonRegenera(string nombre,float danio,float defensa,float agilidad,float vida,float vRegen, Texture& textura):
                               Dragon(nombre, danio, defensa, agilidad, vida),velocidadRegeneracion(vRegen){
    if(nombre == "DRAGON TIERRA"){
        textura.loadFromFile("C:/Users/LESLIE/CLionProjects/ProyectoFinal/IMG/DragonTierra.png");
        imagen.setTexture(textura);
        Dragon::setImagen(imagen);
    }else if(nombre == "DRAGON JADE"){
        textura.loadFromFile("C:/Users/LESLIE/CLionProjects/ProyectoFinal/IMG/DragonJade.png");
        imagen.setTexture(textura);
        imagen.setScale(0.5,0.5);
        Dragon::setImagen(imagen);
    }
}
void DragonRegenera::Regenerarse() {

}
