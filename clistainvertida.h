#ifndef CLISTAINVERTIDA_H
#define CLISTAINVERTIDA_H

#include <iostream>

#include "cnodoinvertido.h"
#include "citeradorinvertido.h"

#include "clista.h"
#include "calumno.h"

#define CLSID_LISTAINVERTIDA 2000

class cListaInvertida : public cObjeto {
private:
    cNodoInvertido inicio;
    cNodoInvertido final;

    cIteradorInvertido itBegin;
    cIteradorInvertido itEnd;


public:
    cListaInvertida();
    ~cListaInvertida() override;

    void insertarElemento(int ai, cObjeto* obj);

    int eliminarNodo(); // De la lista invertida

    void busqueda(int ai);

    int size();

    bool isEmpty();
    bool isFull();

    void imprimir() override;

    cIteradorInvertido& begin();
    cIteradorInvertido& end();

    void Salvar(std::fstream& out) override;
    void Cargar(std::fstream& in) override;
    int GetCLSID() override;
};

#endif // CLISTAINVERTIDA_H
