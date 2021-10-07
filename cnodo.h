#ifndef CNODO_H
#define CNODO_H

#include "cobjeto.h"

class cNodo {
private:
    cObjeto* obj;
    cNodo* pAnt;
    cNodo* pSig;

    cNodo();
    cNodo(cObjeto*);

    void insertarAdelante(cObjeto*);
    cObjeto* eliminarAdelante();

    friend class cLista;
    friend class cIterador;
    friend class cReverseIterador;
};

#endif // NODE_H
