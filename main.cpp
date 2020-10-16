#include <iostream>
#include <string>
#include "computadora.h"
#include "laboratorio.h"

using namespace std;

int main()
{   
    Laboratorio l1;
    l1.recuperar();
    l1.mostrar();
    
    /*Computadora c1("Windows 98","Ryzen 3950x", "128 Gb","RTX 2080");
    Computadora c2;
    c2.setOs("Windows 10");
    c2.setCpu("Intel i7 6700");
    c2.setRam("16 Gb");
    c2.setGpu("GTX 1080");

    l1 << c1 << c2;

    Computadora c3,c4;
    cin >> c3;
    cin >> c4;
    l1<< c3 << c4;
    
    l1.mostrar();
    l1.respaldar_tabla();
    l1.respaldar();*/
}
