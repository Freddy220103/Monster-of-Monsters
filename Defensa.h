//
// Creado por Alfredo Gómez Mendoza el 27/05/2022.
//

#ifndef DEFENSA_H
#define DEFENSA_H
#include "Monstruo.h"
#include<iostream>
using namespace std;

class Defensa{
protected:
    string nombre;
    int vida;
    int fuerza;
    int posicion[3];
    int rango;
    void activar_escudo();
    void disparar(Monstruo *monstruo);
public:
    Defensa(){};
    Defensa(string nom, int vid, int fuerz, int rang):nombre(nom),vida(vid),fuerza(fuerz),rango(rang){};
    int *ptrvidadef=&vida;
};


#endif
