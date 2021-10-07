#ifndef CLISTA_H
#define CLISTA_H

#include <iostream>

#include "cnodo.h"
#include "citerador.h"
#include "creverseiterador.h"

#include "cpersona.h"
#include "calumno.h"
#include "cmaestro.h"
#include "cauto.h"
#include "cpatrulla.h"
#include "ctaxi.h"
#include "cblindado.h"
#include "cautoparte.h"
#include "cmotor.h"
#include "cllanta.h"

#define CLSID_LISTA 1000

class cLista : public cObjeto {
private:
    cNodo inicio;
    cNodo final;

    cIterador m_itBegin;
    cIterador m_itEnd;

    cReverseIterador r_itBegin;
    cReverseIterador r_itEnd;

public:
    cLista();
    ~cLista();

    void insertarAdelante(cObjeto* o);
    void insertarAlFinal(cObjeto* o);

    cObjeto* eliminarAdelante();
    cObjeto* eliminarAlFinal();

    int size();

    bool isEmpty();
    bool isFull();

    void imprimir() override;

    cIterador& begin();
    cIterador& end();

    cReverseIterador& rBegin();
    cReverseIterador& rEnd();

    void Salvar(std::fstream& out) override;
    void Cargar(std::fstream& in) override;
    int GetCLSID() override;
};

#endif // CLISTA_H
