#include "clistainvertida.h"

cListaInvertida::cListaInvertida() {
    inicio.pSig = &final;
    final.pAnt =&inicio;
}

cListaInvertida::~cListaInvertida() {
    cIteradorInvertido it;

    for (it=this->begin(); it!=this->end(); it++) {
        inicio.pSig = inicio.pSig->pSig;

        it.pActual->lst.~cLista();
        delete it.pActual;
    }

    final.pAnt = &inicio;
}


void cListaInvertida::insertarElemento(int ai, cObjeto *obj) {
    cIteradorInvertido it;

    for(it=this->begin(); it!=this->end(); it++)
        if (it.pActual->valorAI == ai) {
            it.pActual->insertarElemento(obj);
            return;
        }

    final.pAnt->insertarNodoInvertido(ai, obj);
}

int cListaInvertida::eliminarNodo() { // De la lista invertida
    if(isEmpty())
        return -1;
    return final.pAnt->pAnt->eliminarNodoInvertido();
}

void cListaInvertida::busqueda(int ai) {
    cIteradorInvertido it;

    for(it=this->begin(); it!=this->end(); it++)
        if(it.pActual->valorAI == ai) {
            it.pActual->lst.imprimir();
            return;
        }
    std::cout << "Lista no encontrada" << std::endl;
}

int cListaInvertida::size() {
    int numNodes = 0;
    cIteradorInvertido it;

    for (it=this->begin(); it!=this->end(); it++)
        numNodes++;

    return numNodes;
}

bool cListaInvertida::isEmpty() {
    return inicio.pSig == &final;
}

bool cListaInvertida::isFull() {
    return false;
}

void cListaInvertida::imprimir() {
    cIteradorInvertido it;

    for (it=this->begin(); it!=this->end(); it++) {
        it.pActual->lst.imprimir();
        std::cout << std::endl << std::endl;
    }
}

cIteradorInvertido &cListaInvertida::begin() {
    itBegin.setNodo(inicio.pSig);
    return itBegin;
}

cIteradorInvertido &cListaInvertida::end() {
    itEnd.setNodo(final.pAnt);
    return itEnd;
}

void cListaInvertida::Salvar(std::fstream &out) {
    out << GetCLSID() << std::endl;
    out << size() << std::endl;

    cIteradorInvertido it;

    for (it=this->begin(); it!=this->end(); it++) {
        it.pActual->lst.Salvar(out);
    }
}

void cListaInvertida::Cargar(std::fstream &in) {
    int lstInvertSize;
    in >> lstInvertSize;
    cIteradorInvertido it;

    for (it=this->begin(); it!=this->end(); it++) {
        int lstId;
        in >> lstId;
        it.pActual->lst.Cargar(in);
    }
}

int cListaInvertida::GetCLSID() {
    return CLSID_LISTAINVERTIDA;
}
