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

    void insertarNodoInvertido(int edad, cObjeto* obj);
    int eliminarNodoInvertido();

    void insertarElemento(cObjeto* obj);
    cObjeto* eliminarElemento();
};

#endif // CNODOINVERTIDO_H
