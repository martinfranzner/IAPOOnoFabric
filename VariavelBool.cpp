/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   VariavelBool.cpp
 * Author: martinfranzner
 * 
 * Created on May 15, 2017, 2:35 PM
 */

#include "VariavelBool.h"

VariavelBool::VariavelBool(){
    
    
}
VariavelBool::VariavelBool(string nm, bool v): Operando(v), nome(nm) {
    

}
void VariavelBool::setValor(bool v){
    this->valor = v;
}
string VariavelBool::toString(){
    return this->nome;
}
string VariavelBool::getNome(){
    return this->nome;
}

VariavelBool::VariavelBool(const VariavelBool& orig) {
}

VariavelBool::~VariavelBool() {
}

