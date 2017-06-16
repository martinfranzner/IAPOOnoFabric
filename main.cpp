/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: martinfranzner
 *
 * Created on May 8, 2017, 11:57 AM
 */
#include "Regra.h"
#include "VariavelBool.h"
#include "Elemento.h"
#include "Parse.h"
#include "OpFile.h"
#include "Igual.h"
#include "Classificador.h"
#include "Fabrica.hpp"
#include "FCA.hpp"

#include <cstdlib>
#include <string.h>
#include <stdio.h>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
using namespace std;
/*
 * 
 *
 */
int main(int argc, char* argv[]) {
    
    //Fabrica *f = new FCA();
    //Classificador * k = f->criarClassificador();
    //k->teste();
    
    Classificador c;
	c.teste();
    
    
    return 0;
}

