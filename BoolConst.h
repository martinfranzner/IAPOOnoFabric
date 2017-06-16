/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BoolConst.h
 * Author: martinfranzner
 *
 * Created on May 22, 2017, 12:19 PM
 */
#include <iostream>  

#ifndef BOOLCONST_H
#define BOOLCONST_H
#include "Operando.h"

using namespace std;
class BoolConst : public Operando{
public:
    
    BoolConst(bool valor);
    BoolConst(const BoolConst& orig);
    virtual ~BoolConst();
private:

};

#endif /* BOOLCONST_H */

