/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Elemento.h
 * Author: martinfranzner
 *
 * Created on May 22, 2017, 12:34 PM
 */
#include <list>
#include <string>
#include <iostream>
#ifndef ELEMENTO_H
#define ELEMENTO_H
using namespace std;

class Elemento {
public:
    Elemento();
    Elemento(const Elemento& orig);
    virtual bool avaliar() = 0;
    virtual string toString() = 0;
    virtual ~Elemento();
private:
 
};

#endif /* ELEMENTO_H */

