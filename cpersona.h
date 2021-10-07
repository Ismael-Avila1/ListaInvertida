#ifndef CPERSONA_H
#define CPERSONA_H

#include<string>
#include <iostream>

#include "cobjeto.h"

#define CLSID_PERSONA 200

class cPersona : public cObjeto {
protected:
    std::string nombre;

public:
    cPersona();
    cPersona(std::string nombre);
    void imprimir() override;

    void Salvar(std::fstream& out) override;
    void Cargar(std::fstream& in) override;
    int GetCLSID() override;
};

#endif // CPERSONA_H
