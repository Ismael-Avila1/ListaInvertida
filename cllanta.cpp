#include "cllanta.h"

cLlanta::cLlanta() : cAutoparte() {}

cLlanta::cLlanta(int s, int r) : cAutoparte(s), rodado(r) {}

void cLlanta::imprimir() {
    std::cout << "\tNumero de serie de la llanta: " << serie << "\n" << "\tRodado: " << rodado << std::endl;
}

void cLlanta::Salvar(std::fstream &out) {
    out << GetCLSID() << std::endl;
    out << serie << std::endl;
    out << rodado << std::endl;
}

void cLlanta::Cargar(std::fstream &in) {
    in >> serie;
    in >> rodado;
}

int cLlanta::GetCLSID() {
    return CLSID_LLANTA;
}
