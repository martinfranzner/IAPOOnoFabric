/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Operando.h
 * Author: martinfranzner
 *
 * Created on May 30, 2017, 2:54 PM
 */

#ifndef OPERANDO_H
#define OPERANDO_H
#include "Elemento.h"
using namespace std;
class Operando : public Elemento{
public:
    Operando();
    Operando(bool valor);
    Operando(const Operando& orig);
    bool avaliar();
    string toString();
    virtual ~Operando();
protected:
    bool valor;

};

#endif /* OPERANDO_H */

