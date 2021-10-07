#include "calumno.h"

cAlumno::cAlumno() : cPersona() {}

cAlumno::cAlumno(std::string n, int c) : cPersona(n), codigo(c) {}

void cAlumno::imprimir() {
    std::cout << "\tSoy " << nombre << ". Mi codigo de alumno es: " << codigo << std::endl;
}

void cAlumno::Salvar(std::fstream &out) {
    out << GetCLSID() << std::endl;
    out << nombre << std::endl;
    out << codigo << std::endl;
}

void cAlumno::Cargar(std::fstream &in) {
    in >> nombre;
    in >> codigo;
}

int cAlumno::GetCLSID() {
    return CLSID_ALUMNO;
}
