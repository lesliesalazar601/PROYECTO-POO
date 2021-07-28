#ifndef PRUEBA_CUADROTEXTO_H
#define PRUEBA_CUADROTEXTO_H

#include <SFML/Graphics.hpp>
using namespace sf;
using namespace std;
class CuadroTexto:/*sfml*/public Text{
    Text CuadroDeTexto;
    bool disponible= true;
public:
    CuadroTexto()=default;
    CuadroTexto(float X, float Y, string texto, int tamanio, string color, Font& fuente);
    void setDatos(float X, float Y, string texto, int tamanio, string color, Font& fuente);
    bool PresionaTexto(RenderWindow& window);
    void setDisponibilidad(bool disp, int turno);
    bool getDisponibilidad() const;
    void setTexto(string &texto);
    Text & getCuadroTexto();
};
#endif //PRUEBA_CUADROTEXTO_H
