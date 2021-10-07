#ifndef CALUMNO_H
#define CALUMNO_H

#include "cpersona.h"

#define CLSID_ALUMNO 201

class cAlumno : public cPersona {
private:
    int codigo;
    int edad;
    std::string carrera;
    float promedio;

public:
    cAlumno();
    cAlumno(std::string n, int c, int e, std::string carr, float p);
    void imprimir() override;

    void Salvar(std::fstream& out) override;
    void Cargar(std::fstream& in) override;
    int GetCLSID() override;
};

#endif // CALUMNO_H
