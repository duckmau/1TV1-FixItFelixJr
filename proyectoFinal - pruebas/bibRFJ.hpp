#ifndef _BIBRFJ_HPP_
#define _BIBRFJ_HPP_

#include<iostream>
#include "miniwin.hpp"

using namespace std;
using namespace miniwin;

namespace voyADemolerlo{
    class Foto{

    };
    class Personaje{
        private:
            int x1, x2, y1, y2;
            Foto *foto;
            bool izq = false;
            bool fr = true, fl = false; 
        
        public:
            // Setters
            void setFoto(Foto &direccion);
            void setX1(int x1);
            void setX2(int x2);
            void setY1(int y1);
            void setY2(int y2);

            // Getters
            Foto *getFoto();
            int getX1();
            int getX2();
            int getY1();
            int getY2();

            // Otros metodos
    };

    class Ajuste{
        private:
            int volumenMusica;
            int volumenEfectos;

        public:
            // Setters
            void setVolMusica(int vol);
            void setVolEfectos(int vol);

            // Getters
            int getVolMusica();
            int getVolEfectos();
    };

}

#endif