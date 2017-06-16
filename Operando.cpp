/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Operando.cpp
 * Author: martinfranzner
 * 
 * Created on May 30, 2017, 2:54 PM
 */

#include "Operando.h"
using namespace std;
Operando::Operando(): valor(true) {
}
Operando::Operando(bool v): valor( v) {
}
string Operando::toString(){
    return string("true");
}
bool Operando::avaliar(){
    return this->valor;
}
Operando::Operando(const Operando& orig) {
}

Operando::~Operando() {
}

