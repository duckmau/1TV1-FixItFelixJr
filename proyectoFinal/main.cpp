#include <iostream>
#include "miniwin.hpp"
#include "bibRFJ.hpp"

using namespace std;
using namespace miniwin;
using namespace voyADemolerlo;

int main(){

    #define JUMP -52
    #define escala 2

    Personaje felix;
    MiniWinImage felixjr("felixstand.bmp", "felixstandmask.bmp");
    MiniWinImage edificio("EdificioRalph.bmp");


    int t;
    bool on = false;
    bool i_presionada = false;
    bool d_presionada = false;
    bool ar_presionada = false;
    bool ab_presionada = false;
    bool repara = false;
    float x = 0, y = escala * (376);
    int aceleracion = 20;


    titulo("Reparalo Felix Jr.");
    // 52, 37
    ventana(escala * 739, escala * 376);
    color_fondo(Colores::NEGRO);

    felixjr.alto(felixjr.alto() * escala);
    felixjr.ancho(felixjr.ancho() * escala);

    edificio.alto(edificio.alto() * escala);
    edificio.ancho(edificio.ancho() * escala);
        

    t = tecla();
    while( t != Teclas::F4){
        borra();

        felixjr.posX(0);
        felixjr.posY(valto()+1);

        y = aceleracion;

        if (y + felixjr.alto() > valto())
            y = valto() - felixjr.alto();
        if (i_presionada)
            x -= 10;
        if (x < 0)
            x = 0;
        if (d_presionada)
            x += 10;
        if (x + felixjr.ancho() > vancho())
            x = vancho() - felixjr.ancho();

        borra();
        color(NEGRO);

        // rectangulo_lleno(x,y,x+50,y+50);

        felixjr.posX(x);
        felixjr.posY(y);

        // Imagen TEST
        muestraImagen(edificio);
        muestraImagen(felixjr);

        refresca();

        t = teclaDown();

        if(t == RETURN) {
            on = !on;
            fullscreen(on);
        }

        if (t == IZQUIERDA)
        {
            i_presionada = true;
        }
        if (t == DERECHA)
        {
            d_presionada = true;
        }
        if (t == ARRIBA)
        {
            ar_presionada = true;
        }
        if (t == ABAJO)
        {
            ab_presionada = true;
        }
        if (t == ESPACIO)
        {
            repara = true;
        }

        t = teclaUp();
        if (t == IZQUIERDA)
        {
            i_presionada = false;
        }
        if (t == DERECHA)
        {
            d_presionada = false;
        }

        refresca();
        espera(1);
    }
    
    cierra();

    return 0;
}
