/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Regra.cpp
 * Author: martinfranzner
 * 
 * Created on May 15, 2017, 2:27 PM
 */
#include <iostream>  
#include <string> 
#include <list> 
#include "Regra.h"
#include "Operador.h"

using namespace std;

Regra::Regra(int pIdentificador, int pX, string confianca, int pY) : 
idRegra(pIdentificador), x(pX), y(pY), confianca(confianca)
{
	this->antecedente = std::list<Elemento *>();
	this->consequente = std::list<Elemento *>();
}

Regra::Regra() :idRegra(-1), x(-1), y(-1), confianca("")  {
    this->antecedente = list<Elemento *>();
    this->consequente = list<Elemento *>();
}
void Regra::setId(string stri) {
    int id = atoi(stri.c_str());
    cout<<"ID:"<<id<<endl;
    this->idRegra = id;
    
}
void Regra::setX(string stri) {
    int setx = atoi(stri.c_str());
    cout<<"X:"<<setx<<endl;
    this->x = setx;
    
}
void Regra::setY(string stri) {
    int sety = atoi(stri.c_str());
    cout<<"Y:"<<sety<<endl;
    this->y = sety;

}
void Regra::addAnt(Elemento *e){
    
    this->antecedente.push_back(e);
}
void Regra::addCons(Elemento *e){
    this->consequente.push_back(e);
}
void Regra::setConfianca(string str){
    cout<<str<<endl;
    this->confianca = str;
    
}
string Regra::toString(){
    list<Elemento *>::iterator it = this->antecedente.begin();
    //list<Elemento *>::iterator itc = this->consequente.begin();
    string str="SE ";
    while(it != this->antecedente.end()){
        str = str + ((Operador*)(*it))->toString();
	it++;
    }
    
    it = this->consequente.begin();
    str = str + " ENTAO ";
    while(it != this->consequente.end()){
        str = str + ((Operador*)(*it))->toString();
	it++;
    }
    return str;
  
}
bool Regra::avaliar(){
    list<Elemento *>::iterator it = this->antecedente.begin();
    
    bool verdadeiro = true;
    while (it != this->antecedente.end() && verdadeiro){
		verdadeiro = verdadeiro && (*it)->avaliar();//descobrir de onde eh esse ->avaliar()
		it++;
	}
    it = this->consequente.begin();
	while (it != this->consequente.end() && verdadeiro){
		verdadeiro = verdadeiro && (*it)->avaliar();//descobrir de onde eh esse ->avaliar()
		it++;
	}

	return verdadeiro;
}

Regra::Regra(const Regra& orig) {
}

Regra::~Regra() {
}

