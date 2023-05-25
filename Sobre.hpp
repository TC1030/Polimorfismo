#ifndef SOBRE_H
#define SOBRE_H

#include "Envio.hpp"

class Sobre:public Envio{
    public:
        Sobre();
        Sobre(Persona&, Persona&, double, double);
        double getAncho() const;
        double getLargo() const;
        void setAncho(double);
        void setLargo(double);
        double calculaCosto();
        void imprime();

    private:
        static const double cargoAdicional;
        double ancho;
        double largo;
};
#endif // SOBRE_H
