#include "ctaxi.h"

cTaxi::cTaxi() : cAuto() {}

cTaxi::cTaxi(int sm, int nc, int m, int s) : cAuto(sm, nc, m), sitio(s) {}

void cTaxi::imprimir() {
    std::cout << "\tTaxi." << "\n" << "\tModelo: " << modelo << std::endl;

    std::cout << "\tDatos del motor." << std::endl;
    motor.imprimir();

    std::cout << "\tTaxi del sitio: " << sitio << std::endl;
}

void cTaxi::Salvar(std::fstream &out) {
    out << GetCLSID() << std::endl;
    motor.Salvar(out);
    out << sitio << std::endl;
}

void cTaxi::Cargar(std::fstream &in) {
    int CLSIDmotor;
    in >> CLSIDmotor;
    motor.Cargar(in);
    in >> sitio;
}

int cTaxi::GetCLSID() {
    return CLSID_TAXI;
}
