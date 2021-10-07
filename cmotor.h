#ifndef CMOTOR_H
#define CMOTOR_H

#include "cautoparte.h"

#define CLSID_MOTOR 301

class cMotor : public cAutoparte {
private:
    int numCilindros;

public:
    cMotor();
    cMotor(int s, int n);
    void imprimir() override;

    void Salvar(std::fstream& out) override;
    void Cargar(std::fstream& in) override;
    int GetCLSID() override;
};

#endif // CMOTOR_H
