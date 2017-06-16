/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Classificador.h
 * Author: martinfranzner
 *
 * Created on May 30, 2017, 5:14 PM
 */
#include <list>
#include <string>
#include "VariavelBool.h"
#include "Regra.h"
#include "Elemento.h"

#ifndef CLASSIFICADOR_H
#define CLASSIFICADOR_H

using namespace std;
class Classificador {
public:
    Classificador();
    virtual VariavelBool * existeAVariavel(string nm);
    virtual void adicionarVariavel(VariavelBool * v);
    virtual void adicionarRegra(Regra * r);
    virtual bool avaliar();
    virtual void novoExemplo(list<pair<string,bool>> e);
    void teste();
    
    Classificador(const Classificador& orig);
    virtual ~Classificador();
private:
    list<VariavelBool *> variaveis;
    list<Regra *> regras;

};

#endif /* CLASSIFICADOR_H */

