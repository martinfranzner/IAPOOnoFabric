/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   OpFile.h
 * Author: martinfranzner
 *
 * Created on May 18, 2017, 4:53 PM
 */

#ifndef OPFILE_H
#define OPFILE_H
#include <list>
#include <string>

using namespace std;

class OpFile {
public:
    OpFile(string  nomeDeArquivo);
    OpFile(const OpFile& orig);
    void leitura();
    list<string> & toLineString();
    virtual ~OpFile();
private:
    string nomeArquivo;
    

};

#endif /* OPFILE_H */

