#ifndef CALUMNO_H
#define CALUMNO_H

#include "cpersona.h"

#define CLSID_ALUMNO 201

class cAlumno : public cPersona {
private:
    int codigo;

public:
    cAlumno();
    cAlumno(std::string n, int c);
    void imprimir() override;

    void Salvar(std::fstream& out) override;
    void Cargar(std::fstream& in) override;
    int GetCLSID() override;
};

#endif // CALUMNO_H
