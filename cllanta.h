#ifndef CLLANTA_H
#define CLLANTA_H

#include "cautoparte.h"

#define CLSID_LLANTA 302

class cLlanta : public cAutoparte {
private:
    int rodado;

public:
    cLlanta();
    cLlanta(int s, int r);
    void imprimir() override;

    void Salvar(std::fstream& out) override;
    void Cargar(std::fstream& in) override;
    int GetCLSID() override;
};

#endif // CLLANTA_H
