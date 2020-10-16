#ifndef LABORATORIO_H
#define LABORATORIO_H

#include <iostream>
#include <string>
#include <fstream>
#include <fstream>
#include "computadora.h"

class Laboratorio{
    private:
        Computadora equipos[5];
        int cont;

    public:
        Laboratorio();
        void agregarFinal(const Computadora&);
        void mostrar();
        void respaldar_tabla();
        void respaldar();
        void recuperar();

        friend Laboratorio& operator << (Laboratorio&, const Computadora&);
};

#endif // LABORATORIO_H
