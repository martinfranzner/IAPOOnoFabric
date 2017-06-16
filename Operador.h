/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Operador.h
 * Author: martinfranzner
 *
 * Created on May 30, 2017, 3:07 PM
 */
#include <string>
#ifndef OPERADOR_H
#define OPERADOR_H

#include "Elemento.h"
using namespace std;

class Operador : public Elemento {
public:
    Operador(Elemento * esq, Elemento * dir);
    virtual string toString();
    
    virtual ~Operador();

protected:
	Elemento * esquerda;
	Elemento * direita;


};

#endif /* OPERADOR_H */

