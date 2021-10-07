#ifndef CTAXI_H
#define CTAXI_H

#include "cauto.h"

#define CLSID_TAXI 402

class cTaxi : public cAuto {
private:
    int sitio;
public:
    cTaxi();
    cTaxi(int sm, int nc, int m, int s);
    void imprimir() override;

    void Salvar(std::fstream& out) override;
    void Cargar(std::fstream& in) override;
    int GetCLSID() override;
};

#endif // CTAXI_H
