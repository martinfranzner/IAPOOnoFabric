/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Igual.h
 * Author: martinfranzner
 *
 * Created on May 18, 2017, 5:35 PM
 */
#include <string>
#include <iostream>
#include "VariavelBool.h"
#include "BoolConst.h"
#include "Operador.h"

#ifndef IGUAL_H
#define IGUAL_H
using namespace std;

class Igual : public Operador {
public:
    Igual(Elemento * esq, Elemento * dir);
    string toString();
    bool avaliar();
    

    virtual ~Igual();
private:
    
    

};

#endif /* IGUAL_H */

