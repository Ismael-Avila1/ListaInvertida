#include "cautoparte.h"

cAutoparte::cAutoparte() : cObjeto() {}

cAutoparte::cAutoparte(int s) : cObjeto(), serie(s) {}

void cAutoparte::imprimir() {
    std::cout << "\tAutoparte." << "\n" << "\tNumero de serie: " << serie << std::endl;
}

void cAutoparte::Salvar(std::fstream &out) {
    out << GetCLSID() << std::endl;
    out << serie << std::endl;
}

void cAutoparte::Cargar(std::fstream &in) {
    in >> serie;
}

int cAutoparte::GetCLSID() {
    return CLSID_AUTOPARTE;
}
