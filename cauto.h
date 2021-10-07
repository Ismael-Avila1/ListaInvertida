#ifndef CAUTO_H
#define CAUTO_H

#include <iostream>

#include "cobjeto.h"
#include "cmotor.h"

#define CLSID_AUTO 400

class cAuto : public cObjeto {
protected:
    cMotor motor;
    int modelo;

public:
    cAuto();
    cAuto(int sm, int nc, int m);
    void imprimir() override;

    void Salvar(std::fstream& out) override;
    void Cargar(std::fstream& in) override;
    int GetCLSID() override;
};

#endif // CAUTO_H
