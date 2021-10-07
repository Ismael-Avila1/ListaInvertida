#include "cauto.h"

cAuto::cAuto() : cObjeto() {}

cAuto::cAuto(int sm, int nc, int m) : motor(sm, nc), modelo(m) {}

void cAuto::imprimir() {
    std::cout << "\tAuto." << "\n" << "\tModelo: " << modelo << std::endl;

    std::cout <<"\tDatos del motor." << std::endl;
    motor.imprimir();
}

void cAuto::Salvar(std::fstream &out) {
    out << GetCLSID() << std::endl;
    motor.Salvar(out);
    out << modelo << std::endl;
}

void cAuto::Cargar(std::fstream &in) {
    int CLSIDmotor;
    in >> CLSIDmotor;
    motor.Cargar(in);
    in >> modelo;
}

int cAuto::GetCLSID() {
    return CLSID_AUTO;
}
