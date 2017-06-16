/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Igual.cpp
 * Author: martinfranzner
 * 
 * Created on May 18, 2017, 5:35 PM
 */

#include "Igual.h"

Igual::Igual(Elemento * esq, Elemento * dir) : Operador(esq, dir) {
    
    
}
string Igual::toString(){
    return this->esquerda->toString() + " = " + this->direita->toString() + " ";
}
bool Igual::avaliar(){
    return this->esquerda->avaliar() == this->direita->avaliar();
}


Igual::~Igual() {
}

