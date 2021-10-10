#include "cnodoinvertido.h"

cNodoInvertido::cNodoInvertido() {}

cNodoInvertido::cNodoInvertido(int ai) {
    valorAI = ai;
    pAnt = nullptr;
    pSig = nullptr;
}

void cNodoInvertido::insertarNodoInvertido(int ai, cObjeto* obj) {
    cNodoInvertido* newNode = new cNodoInvertido(ai);

    newNode->pSig = this->pSig;
    newNode->pAnt = this;
    this->pSig = newNode;
    this->pSig->pSig->pAnt = newNode;

    newNode->lst.insertarAlFinal(obj);
}

int cNodoInvertido::eliminarNodoInvertido() {
    int ai;
    ai = this->pSig->valorAI;

    this->pSig = this->pSig->pSig;
    delete this->pSig->pAnt;
    this->pSig->pAnt = this;

    return ai;
}

void cNodoInvertido::insertarElemento(cObjeto *obj) {
    this->lst.insertarAlFinal(obj);
}
