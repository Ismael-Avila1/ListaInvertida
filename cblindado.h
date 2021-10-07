#ifndef CBLINDADO_H
#define CBLINDADO_H

#include "cpatrulla.h"

#define CLSID_BLINDADO 403

class cBlindado : public cPatrulla {
private:
    int blindaje;

public:
    cBlindado();
    cBlindado(int sm, int nc, int m, bool s, int b);
    void imprimir() override;

    void Salvar(std::fstream& out) override;
    void Cargar(std::fstream& in) override;
    int GetCLSID() override;
};

#endif // CBLINDADO_H
