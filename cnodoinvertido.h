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

    cNodoInvertido();
    cNodoInvertido(int ai);

    void insertarNodoInvertido(int edad, cObjeto* obj);
    int eliminarNodoInvertido();

    void insertarElemento(cObjeto* obj);

    friend class cListaInvertida;
    friend class cIteradorInvertido;
};

#endif // CNODOINVERTIDO_H
