#include "laboratorio.h"

using namespace  std;

Laboratorio::Laboratorio(){
    cont = 0;
}

void Laboratorio::agregarFinal(const Computadora &c){
    if(cont < 5){
        equipos[cont] = c;
        cont++;
    }

    else
        cout<<"El arreglo esta lleno :("<<endl;

}

void Laboratorio::mostrar(){
    cout<< left;
    cout<<setw(15)<<"OS";
    cout<<setw(15)<<"CPU";
    cout<<setw(10)<<"RAM";
    cout<<setw(10)<<"GPU";
    cout<<endl;
    
    for(int i = 0; i<cont; i++){
        cout << equipos[i];
    }

}

Laboratorio& operator << (Laboratorio &l, const Computadora &c){
    l.agregarFinal(c);
    return l;
}


