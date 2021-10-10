#include <iostream>
#include <fstream>
#include <string>

#include "calumno.h"
#include "clistainvertida.h"

using namespace std;

int main() {

    cListaInvertida lst;


    cAlumno* al1 = new cAlumno("Ismael", 7219314, 21, "Ingenieria en Computacion", 82.4);
    cAlumno* al2 = new cAlumno("Jose", 8912314, 20, "Ingenieria Quimica", 90.2);
    cAlumno* al3 = new cAlumno("Fatima", 129141, 19, "Enfermeria", 100);
    cAlumno* al4 = new cAlumno("Guadalupe", 8124041, 25, "Medicina", 65);
    cAlumno* al5 = new cAlumno("Daniela", 12319314, 19, "Enfermeria", 99.8);
    cAlumno* al6 = new cAlumno("Juan", 891023, 23, "Ingenieria Civil", 78);
    cAlumno* al7 = new cAlumno("Rafael", 12389123, 21, "Derecho", 80);
    cAlumno* al8 = new cAlumno("Marco", 489293732, 20, "Contabilidad", 89.2);
    cAlumno* al9 = new cAlumno("Monica", 12931238, 22, "Arquitectura", 66.6);
    cAlumno* al10 = new cAlumno("Hugo", 78297123, 19, "Gastronomia", 88.2);
    cAlumno* al11 = new cAlumno("Alejandro", 8123141, 22, "Veterinaria", 66.8);

    lst.insertarElemento(21, al1);
    lst.insertarElemento(20, al2);
    lst.insertarElemento(22, al9);
    lst.insertarElemento(19, al3);
    lst.insertarElemento(25, al4);
    lst.insertarElemento(19, al5);
    lst.insertarElemento(23, al6);
    lst.insertarElemento(21, al7);
    lst.insertarElemento(20, al8);
    lst.insertarElemento(19, al10);
    lst.insertarElemento(22, al11);

    lst.imprimir();

    fstream salida("contenido.txt", ios_base::out);
    lst.Salvar(salida);
    salida.close();

    lst.busqueda(22);


    return 0;
}
