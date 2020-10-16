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

void Laboratorio::respaldar_tabla(){
    ofstream archivo("equipos_tabla.txt");
        if(archivo.is_open()){
            archivo<< left;
            archivo<<setw(15)<<"OS";
            archivo<<setw(15)<<"CPU";
            archivo<<setw(10)<<"RAM";
            archivo<<setw(10)<<"GPU";
            archivo<<endl;
            for(int i = 0; i<cont; i++){
            archivo << equipos[i];
        }
    }

    archivo.close();
}

void Laboratorio::respaldar(){
    ofstream archivo("equipos.txt");
        if(archivo.is_open()){
            for(int i = 0; i<cont; i++){
            archivo << equipos[i].getOs() <<endl ;
            archivo << equipos[i].getCpu() <<endl;
            archivo << equipos[i].getRam() <<endl;
            archivo << equipos[i].getGpu() <<endl;
        }
    }

    archivo.close();
}

void Laboratorio::recuperar(){
    ifstream archivo("equipos.txt");
    if(archivo.is_open()){
        string aux;
        Computadora c;

        while(true){
            getline(archivo, aux);
            
            if(archivo.eof())
                break;

            c.setOs(aux);

            getline(archivo, aux);
            c.setCpu(aux);

            getline(archivo, aux);
            c.setRam(aux);

            getline(archivo, aux);
            c.setGpu(aux);

            agregarFinal(c);
        }
    }
    archivo.close();
}


