#ifndef COBJETO_H
#define COBJETO_H

#include "cserializable.h"

class cObjeto : public cSerializable {
public:
    cObjeto();

    virtual void imprimir() = 0;

    virtual ~cObjeto() = 0;
};

#endif // COBJETO_H
