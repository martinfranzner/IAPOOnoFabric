/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   VariavelBool.h
 * Author: martinfranzner
 *
 * Created on May 15, 2017, 2:35 PM
 */
#include <string>
#include <iostream>
#include "Operando.h"
#ifndef VARIAVELBOOL_H
#define VARIAVELBOOL_H
using namespace std;

class VariavelBool: public Operando {
public:
    VariavelBool();
    VariavelBool(string var, bool valor);
    string toString();
    void setValor(bool v);
    string getNome();
    
    VariavelBool(const VariavelBool& orig);
    virtual ~VariavelBool();
private:
    string nome;
    

};

#endif /* VARIAVELBOOL_H */

