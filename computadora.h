#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include <iostream>
#include <string>

class Computadora{
    private:
        std::string os;
        std::string cpu;
        std::string ram;
        std::string gpu;

    public:
        Computadora();
        Computadora(std::string,std::string,std::string,std::string);

        //Setters
        void setOs(const std::string&);
        void setCpu(const std::string&);
        void setRam(const std::string&);
        void setGpu(const std::string&);

        //Getters
        std::string getOs();
        std::string getCpu();
        std::string getRam();
        std::string getGpu();

};

#endif // COMPUTADORA_H
