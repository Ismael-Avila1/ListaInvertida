#ifndef CREVERSEITERADOR_H
#define CREVERSEITERADOR_H

#include "cnodo.h"

class cReverseIterador
{
private:
    cNodo* pActual;

    void setNodo(cNodo* pNodo);

    friend class cLista;

public:
    cReverseIterador();

    void insertarAdelante(cObjeto* o);
    cObjeto* eliminarAdelante();

    // Sobrecarga de oepradores
    void operator =(cReverseIterador& otro);

    bool operator ==(cReverseIterador& otro);
    bool operator !=(cReverseIterador& otro);

    // Prefijos
    void operator ++();
    void operator --();

    cObjeto*& operator *();

    // Postfijos
    void operator ++(int);
    void operator --(int);
};

#endif // CREVERSEITERADOR_H
