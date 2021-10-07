#include "clista.h"

cLista::cLista() {
    inicio.pSig = &final;
    final.pAnt = &inicio;
}

cLista::~cLista() {
    cNodo* temp;

    while (inicio.pSig != &final) {
        temp = inicio.pSig;
        inicio.pSig = inicio.pSig->pSig;

        delete temp;
    }
    final.pAnt = &inicio;
}

void cLista::insertarAdelante(cObjeto* o) {
    inicio.insertarAdelante(o);
}

void cLista::insertarAlFinal(cObjeto* o) {
    final.pAnt->insertarAdelante(o);
}

cObjeto* cLista::eliminarAdelante() {
    if(isEmpty())
        return nullptr;
    else
        return inicio.eliminarAdelante();
}

cObjeto* cLista::eliminarAlFinal() {
    if(isEmpty())
        return nullptr;
    else
        return final.pAnt->pAnt->eliminarAdelante();
}

int cLista::size() {
    int contNodes = 0;
    cNodo* temp = inicio.pSig;

    while (temp != &final) {
        contNodes++;
        temp = temp->pSig;
    }
    return contNodes;
}

bool cLista::isEmpty() {
    return inicio.pSig == &final;
}

bool cLista::isFull() {
    return false;
}

void cLista::imprimir() {
    cIterador it;

    for(it=this->begin(); it!=this->end(); it++){
        it.pActual->obj->imprimir();
        std::cout << std::endl << std::endl;
    }
}

cIterador &cLista::begin() {
    m_itBegin.setNodo(inicio.pSig);

    return m_itBegin;
}

cIterador &cLista::end() {
    m_itEnd.setNodo(&final);

    return m_itEnd;
}

cReverseIterador &cLista::rBegin() {
    r_itBegin.setNodo(final.pAnt);

    return r_itBegin;
}

cReverseIterador &cLista::rEnd() {
    r_itEnd.setNodo(&inicio);

    return r_itEnd;
}

void cLista::Salvar(std::fstream &out) {
    out << GetCLSID() << std::endl;
    out << size() << std::endl;

    cIterador it;

    for(it=this->begin(); it!=this->end(); it++)
        it.pActual->obj->Salvar(out);
}

void cLista::Cargar(std::fstream &in) {
    int lstSize;
    in >> lstSize;

    for(int i=0; i<lstSize; i++) {
        int CLSID = 0;
        in >> CLSID;

        cObjeto* pObj = nullptr;

        switch (CLSID) {
        case CLSID_PERSONA:
            pObj = new cPersona;
            break;

        case CLSID_ALUMNO:
            pObj = new cAlumno;
            break;

        case CLSID_MAESTRO:
            pObj = new cMaestro;
            break;

        case CLSID_AUTO:
            pObj = new cAuto;
            break;

        case CLSID_PATRULLA:
            pObj = new cPatrulla;
            break;

        case CLSID_TAXI:
            pObj = new cTaxi;
            break;

        case CLSID_BLINDADO:
            pObj = new cBlindado;
            break;

        case CLSID_AUTOPARTE:
            pObj = new cAutoparte;
            break;

        case CLSID_MOTOR:
            pObj = new cMotor;
            break;

        case CLSID_LLANTA:
            pObj = new cLlanta;
            break;

        default:
            pObj = nullptr;
        }

        pObj->Cargar(in);
        insertarAlFinal(pObj);
    }
}

int cLista::GetCLSID() {
    return CLSID_LISTA;
}
