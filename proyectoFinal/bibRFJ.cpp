#include<iostream>
#include "miniwin.hpp"
#include"bibRFJ.hpp"

using namespace std;
using namespace voyADemolerlo;

    // Setters
    void Personaje::setFoto(Foto &direccion){ this->foto = &direccion; }
    void Personaje::setX1(int x1){ this->x1 = x1; }
    void Personaje::setX2(int x2){ this->x2 = x2; }
    void Personaje::setY1(int y1){ this->y1 = y1; }
    void Personaje::setY2(int y2){ this->y2 = y2; }

    // Getters
    Foto *Personaje::getFoto(){ return this->foto; }
    int Personaje::getX1(){ return this->x1; }
    int Personaje::getX2(){ return this->x2; }
    int Personaje::getY1(){ return this->y1; }
    int Personaje::getY2(){ return this->y2; }

    // ------------------------------------------

    // Setters
    void Ajuste::setVolMusica(int vol){ this->volumenMusica = vol; }
    void Ajuste::setVolEfectos(int vol){ this->volumenEfectos = vol; }

    // Getters
    int Ajuste::getVolMusica(){ return this->volumenMusica; }
    int Ajuste::getVolEfectos(){ return this->volumenEfectos; }