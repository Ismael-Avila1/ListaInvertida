#include "cpatrulla.h"

cPatrulla::cPatrulla() : cAuto() {}

cPatrulla::cPatrulla(int sm, int nc, int m, bool s) : cAuto(sm, nc, m), sirena(s) {}

void cPatrulla::imprimir() {
    std::cout << "\tPatrulla." << "\n" << "\tModelo: " << modelo << std::endl;

    std::cout << "\tDatos del motor." << std::endl;
    motor.imprimir();

    std::cout << "\tLa sirena esta " << ((sirena == true) ? "encendida" : "apagada") << std::endl;
}

void cPatrulla::Salvar(std::fstream &out) {
    out << GetCLSID() << std::endl;
    motor.Salvar(out);
    out << modelo << std::endl;
    out << sirena << std::endl;
}

void cPatrulla::Cargar(std::fstream &in) {
    int CLSIDmotor;
    in >> CLSIDmotor;
    motor.Cargar(in);
    in >> modelo;
    in >> sirena;
}

int cPatrulla::GetCLSID() {
    return CLSID_PATRULLA;
}
