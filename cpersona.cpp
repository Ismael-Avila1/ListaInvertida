#include "cpersona.h"

cPersona::cPersona() : cObjeto() {}

cPersona::cPersona(std::string nombre) : cObjeto(), nombre(nombre) {}

void cPersona::imprimir() {
    std::cout << "\tSoy una persona!" << "\n" << "Mi nombre es: " << nombre << std::endl;
}

void cPersona::Salvar(std::fstream &out) {
    out << GetCLSID() << std::endl;
    out << nombre << std::endl;
}

void cPersona::Cargar(std::fstream &in) {
    in >> nombre;
}

int cPersona::GetCLSID() {
    return CLSID_PERSONA;
}
