/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Operador.cpp
 * Author: martinfranzner
 * 
 * Created on May 30, 2017, 3:07 PM
 */

#include "Operador.h"
using namespace std;
Operador::Operador(Elemento * esq, Elemento * dir) : esquerda(esq), direita( dir ){
}
string Operador::toString(){
    return this->esquerda->toString() + " = " + this->direita->toString() + " ";
}


Operador::~Operador() {
}

