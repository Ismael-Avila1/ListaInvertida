#ifndef CAUTOPARTE_H
#define CAUTOPARTE_H

#include <iostream>

#include "cobjeto.h"

#define CLSID_AUTOPARTE 300

class cAutoparte : public cObjeto {
protected:
    int serie;

public:
    cAutoparte();
    cAutoparte(int s);
    void imprimir() override;

    void Salvar(std::fstream& out) override;
    void Cargar(std::fstream& in) override;
    int GetCLSID() override;
};

#endif // CAUTOPARTE_H
