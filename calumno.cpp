#include "calumno.h"

cAlumno::cAlumno() : cPersona() {}

cAlumno::cAlumno(std::string n, int c, int e, std::string carr, float p) : cPersona(n), codigo(c), edad(e), carrera(carr), promedio(p) {}

void cAlumno::imprimir() {
    std::cout << "\tSoy " << nombre << std::endl;
    std::cout << "\tCodigo de alumno: " << codigo << std::endl;
    std::cout << "\tEdad: " << edad << std::endl;
    std::cout << "\tCarrerar: " << carrera << std::endl;
    std::cout << "\tPromedio general: " << promedio << std::endl;
}

void cAlumno::Salvar(std::fstream &out) {
    out << GetCLSID() << std::endl;
    out << nombre << std::endl;
    out << codigo << std::endl;
    out << edad << std::endl;
    out << carrera << std::endl;
    out << promedio << std::endl;
}

void cAlumno::Cargar(std::fstream &in) {
    in >> nombre;
    in >> codigo;
    in >> edad;
    in >> carrera;
    in >> promedio;
}

int cAlumno::GetCLSID() {
    return CLSID_ALUMNO;
}
