#ifndef ENVIO_H
#define ENVIO_H
#include "Persona.hpp"

class Envio{
    public:
        Envio();
        Envio(Persona&, Persona&);
        double calculaCosto();
        void imprime();
    private:
        static const double costoEstandar; //constante de clase
        Persona rem;
        Persona des;
};
#endif // ENVIO_H