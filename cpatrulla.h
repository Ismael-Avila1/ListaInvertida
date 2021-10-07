#ifndef CPATRULLA_H
#define CPATRULLA_H

#include "cauto.h"

#define CLSID_PATRULLA 401

class cPatrulla : public cAuto {
protected:
    bool sirena;

public:
    cPatrulla();
    cPatrulla(int sm, int nc, int m, bool s);
    void imprimir() override;

    void Salvar(std::fstream& out) override;
    void Cargar(std::fstream& in) override;
    int GetCLSID() override;
};

#endif // CPATRULLA_H
