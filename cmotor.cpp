#include "cmotor.h"

cMotor::cMotor() : cAutoparte() {}

cMotor::cMotor(int s, int n) : cAutoparte(s), numCilindros(n) {}

void cMotor::imprimir() {
    std::cout << "\tNumero de serie del motor: " << serie << "\n" << "\tNumero de cilindros: " << numCilindros << std::endl;
}

void cMotor::Salvar(std::fstream &out) {
    out << GetCLSID() << std::endl;
    out << serie << std::endl;
    out << numCilindros << std::endl;
}

void cMotor::Cargar(std::fstream &in) {
    in >> serie;
    in >> numCilindros;
}

int cMotor::GetCLSID() {
    return CLSID_MOTOR;
}
