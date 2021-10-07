#include "cnodo.h"

cNodo::cNodo() {
     pAnt = nullptr;
     pSig = nullptr;
}

cNodo::cNodo(cObjeto* o) {
    obj = o;
    pAnt = nullptr;
    pSig = nullptr;
}

void cNodo::insertarAdelante(cObjeto* o) {

    cNodo* newNode = new cNodo(o);

    newNode->pSig = this->pSig;
    newNode->pAnt = this;

    this->pSig = newNode;
    this->pSig->pSig->pAnt = newNode;
}

cObjeto* cNodo::eliminarAdelante() {
    cObjeto* o;
    o = this->pSig->obj;

    this->pSig = this->pSig->pSig;
    delete this->pSig->pAnt;
    this->pSig->pAnt = this;

    return o;
}
