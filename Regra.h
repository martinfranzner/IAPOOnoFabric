/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Regra.h
 * Author: martinfranzner
 *
 * Created on May 15, 2017, 2:27 PM
 */
#include <list>
#include <string>
#include <iostream>
#include "Igual.h"
#include "Elemento.h"




#ifndef REGRA_H
#define REGRA_H

using namespace std;
class Regra  {
public:
    Regra();
    Regra(int identificador, int x, string confianca, int y);
    Regra(const Regra& orig);
    void setId(string str);
    void setX(string str);
    void setY(string str);
    void addAnt(Elemento *e);
    void addCons(Elemento *e);
    void setConfianca(string str);
    string toString();
    virtual bool avaliar();
    virtual ~Regra();
    
    //r->addAnt(new Igual(new VariavelBool("manteiga",true),new BoolConst(true));
private:
    int idRegra;
    int x,y;
    //consequente e antecedente tem q ser tipo list, mas ta dando erro, tenho q dar um jeito
    list<Elemento *> antecedente;
    list<Elemento *> consequente;
    string confianca;
    

};

#endif /* REGRA_H */

