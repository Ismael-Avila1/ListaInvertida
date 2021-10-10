#include "citeradorinvertido.h"

void cIteradorInvertido::setNodo(cNodoInvertido *pNodo) {
    pActual = pNodo;
}

cIteradorInvertido::cIteradorInvertido() {}

    // Sobrecarga de operadores
void cIteradorInvertido::operator =(cIteradorInvertido &otro) {
    pActual = otro.pActual;
}

bool cIteradorInvertido::operator ==(cIteradorInvertido &otro) {
    return (pActual == otro.pActual);
}

bool cIteradorInvertido::operator !=(cIteradorInvertido &otro) {
    return (pActual != otro.pActual);
}

    // Prefijos
void cIteradorInvertido::operator ++() {
    pActual = pActual->pSig;
}

void cIteradorInvertido::operator --() {
    pActual = pActual->pAnt;
}

int cIteradorInvertido::operator *() {
    return pActual->valorAI;
}

    //Postfijos
void cIteradorInvertido::operator ++(int) {
    pActual = pActual->pSig;
}

void cIteradorInvertido::operator --(int) {
    pActual = pActual->pAnt;
}
