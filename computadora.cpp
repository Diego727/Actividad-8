#include "computadora.h"

using namespace std;

Computadora::Computadora(){}

Computadora::Computadora(string _os, string _cpu, string _ram, string _gpu){
    this->os = _os;
    this->cpu = _cpu;
    this->ram = _ram;
    this->gpu = _gpu;
}

void Computadora::setOs(const string &_os){
    os = _os;
}

void Computadora::setCpu(const string &_cpu){
    cpu = _cpu;
}

void Computadora::setRam(const string &_ram){
    ram = _ram;
}

void Computadora::setGpu(const string &_gpu){
    gpu = _gpu;
}

string Computadora::getOs(){
    return os;
}

string Computadora::getCpu(){
    return cpu;
}

string Computadora::getRam(){
    return ram;
}

string Computadora::getGpu(){
    return gpu;
}
