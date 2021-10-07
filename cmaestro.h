#ifndef CMAESTRO_H
#define CMAESTRO_H

#include "cpersona.h"

#define CLSID_MAESTRO 202

class cMaestro : public cPersona {
private:
    int codigo;

public:
    cMaestro();
    cMaestro(std::string n, int c);
    void imprimir() override;

    void Salvar(std::fstream& out) override;
    void Cargar(std::fstream& in) override;
    int GetCLSID() override;
};

#endif // CMAESTRO_H
