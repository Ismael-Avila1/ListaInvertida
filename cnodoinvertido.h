#ifndef CNODOINVERTIDO_H
#define CNODOINVERTIDO_H

#include "clista.h"
#include "cobjeto.h"

class cNodoInvertido {
private:
    int valorAI; // valorAtributoInvertido
    cLista lst;

    cNodoInvertido* pAnt;
    cNodoInvertido* pSig;

public:
    cNodoInvertido();
    cNodoInvertido(int ai);

    void insertarAdelante(int edad, cObjeto* obj);
    int eliminarAdelante();
};

#endif // CNODOINVERTIDO_H
