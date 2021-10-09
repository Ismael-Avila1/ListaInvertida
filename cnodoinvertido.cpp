#include "cnodoinvertido.h"

cNodoInvertido::cNodoInvertido() {}

cNodoInvertido::cNodoInvertido(int ai) {
    valorAI = ai;
    pAnt = nullptr;
    pSig = nullptr;
}

void cNodoInvertido::insertarAdelante(int ai, cObjeto* obj) {
    cNodoInvertido* newNode = new cNodoInvertido(ai);
    newNode->lst.insertarAlFinal(obj);

    newNode->pSig = this->pSig;
    newNode->pAnt = this;
    this->pSig = newNode;
    this->pSig->pSig->pAnt = newNode;
}

int cNodoInvertido::eliminarAdelante() {
    int ai;
    ai = this->pSig->valorAI;

    this->pSig = this->pSig->pSig;
    delete this->pSig->pAnt;
    this->pSig->pAnt = this;

    return ai;
}
