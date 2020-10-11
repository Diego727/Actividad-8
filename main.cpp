#include <iostream>
#include <string>
#include "computadora.h"
#include "laboratorio.h"

using namespace std;

int main()
{
    Computadora c1("Windows 98","Ryzen 3950x", "128 Gb","RTX 2080");
    Computadora c2;
    c2.setOs("Windows 10");
    c2.setCpu("Intel i7 6700");
    c2.setRam("16 Gb");
    c2.setGpu("GTX 1080");

    Laboratorio l1;
    l1.agregarFinal(c1);
    l1.agregarFinal(c2);

    l1.mostrar();

}
