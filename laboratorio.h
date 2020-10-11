#ifndef LABORATORIO_H
#define LABORATORIO_H

#include <iostream>
#include <string>
#include "computadora.h"

class Laboratorio{
    private:
        Computadora equipos[5];
        int cont;

    public:
        Laboratorio();
        void agregarFinal(const Computadora&);
        void mostrar();
};

#endif // LABORATORIO_H
