#include "cmaestro.h"

cMaestro::cMaestro() : cPersona() {}

cMaestro::cMaestro(std::string n, int c) : cPersona(n), codigo(c) {}

void cMaestro::imprimir() {
    std::cout << "\tSoy " << nombre << ". Mi codigo de maestro es: " << codigo << std::endl;
}

void cMaestro::Salvar(std::fstream &out) {
    out << GetCLSID() << std::endl;
    out << nombre << std::endl;
    out << codigo << std::endl;
}

void cMaestro::Cargar(std::fstream &in) {
    in >> nombre;
    in >> codigo;
}

int cMaestro::GetCLSID() {
    return CLSID_MAESTRO;
}
