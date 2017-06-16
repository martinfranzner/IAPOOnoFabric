/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Classificador.cpp
 * Author: martinfranzner
 * 
 * Created on May 30, 2017, 5:14 PM
 */
#include <list>
#include <string>
#include <iostream>
#include <utility>
#include "Classificador.h"
#include "Regra.h"
#include "VariavelBool.h"
#include "Parse.h"
#include "Operando.h"
#include "Operador.h"
#include "OpFile.h"
#include "Igual.h"
#include "Elemento.h"
#include "BoolConst.h"
using namespace std;
Classificador::Classificador() {
    this->variaveis = list<VariavelBool *>();
    this->regras = list<Regra *>();
}

VariavelBool * Classificador::existeAVariavel(string nm){
    list<VariavelBool *>::iterator it = this->variaveis.begin();
    
    VariavelBool * variavel = NULL;
	while (it != this->variaveis.end() && (variavel == NULL)){
		if ((*it)->getNome().compare( nm ) == 0){
			variavel = *it;
		}
		it++;
	}
	return variavel;

}

void Classificador::adicionarVariavel(VariavelBool * v){
    this->variaveis.push_back(v);
}

void Classificador::adicionarRegra(Regra * r){
    this->regras.push_back(r);
}

bool Classificador::avaliar(){
    list<Regra *>::iterator it = this->regras.begin();

		cout << "Avaliando classificador, numero de regras: " << this->regras.size() << endl;
		while (it != this->regras.end()){
			
			// se a regra eh verdadeira, entao mostrar a regra
			if ((*it)->avaliar()){//de qual avaliar eh esse metodo?
				cout << (*it)->toString() << endl;
			}
			it++;
		}

		return true;
}

void Classificador::novoExemplo(list<pair<string, bool>> e)
{
	std::list<std::pair<std::string, bool>>::iterator it = e.begin();

	VariavelBool * v;
	for (it = e.begin(); it != e.end(); it++){
		v = existeAVariavel((*it).first);
		if (v != NULL){
			v->setValor((*it).second);
		}
	}
}



void Classificador::teste(){
    
    list<string> L;
    
    OpFile *a = new OpFile("compras.txt");
    a->leitura();
    L = a->toLineString();
    
    
    cout<< "Agora eh para imprimir a lista(na teoria)"<<endl;
    
    list<string>::iterator itline;
    /*
    for(itline=L.begin();itline != L.end(); itline++){
        cout<< *itline <<endl;
    }
     */
    
    char delimitadores[] = " <>[],.;-\n\r";
    Parse *p = new Parse();
    
    
    for(itline=L.begin();itline != L.end(); itline++){
        
        //vector<string> vetorDeString = p->doParse(*itline);
        vector<string> vetorDeString = p->splitT((*itline), delimitadores);
        for(int i = 0; i <= vetorDeString.size(); ++i){
            cout<<vetorDeString[i]<<endl;
            }
    }
    
     
    
    for(itline=L.begin();itline != L.end(); itline++){
       
        //vector<string> vetorDeString = p->doParse(*itline);
        vector<string> vetorDeString = p->splitT((*itline), delimitadores);
        //cout<<"acab"<<endl;
        
        //for somente para printar o vetor de string
        /*for(int i = 0; i <= vetorDeString.size(); ++i){
        cout<<vetorDeString[i]<<endl;
        }
        cout<<"acab"<<endl;
        */

        Regra * r = new Regra();
        unsigned int j = 0;
	VariavelBool * variavel;
            cout<<"vetorDeString.size(): "<< vetorDeString.size() <<endl;
        while (j < vetorDeString.size()){
            cout<<"entrou no while- j:"<< j<<endl;
            r->setId(vetorDeString[j++]);
            
            r->setX(vetorDeString[j++]);
           
            while (j < vetorDeString.size() && vetorDeString[j].compare("=") != 0){
                variavel = this->existeAVariavel(vetorDeString[j]);
                if (variavel == NULL){
			variavel = new VariavelBool(vetorDeString[j], true);
			this->adicionarVariavel(variavel);
                }
                r->addAnt(new Igual(variavel, new BoolConst(true)));
                j++;
            }
            j++;
            r->setConfianca(vetorDeString[j++]);
            j++;//para chegar na posicao Y
            r->setY(vetorDeString[j++]);
            //j++;//para chegar nos consequentes
            while (j < vetorDeString.size() && (vetorDeString[j] != " ") && (vetorDeString[j] != "\r")){
		variavel = this->existeAVariavel(vetorDeString[j]);
                if (variavel == NULL){
                    variavel = new VariavelBool(vetorDeString[j], true);
                    this->adicionarVariavel(variavel);
                }
                r->addCons(new Igual(variavel, new BoolConst(true)));
                j++;
            }
            
        }
        this->adicionarRegra(r);
        cout << r->toString() << endl;
        
        cout<<"\n-----Aqui foi uma regra-----\n"<<endl;
    }
    cout<<"Saiu do IF agora faz o pair e verifica as regras!\n"<<endl;
    list<pair<string, bool>> P;
    P.push_back(pair<std::string, bool>("pao", false));
    P.push_back(pair<std::string, bool>("manteiga", true));
    P.push_back(pair<std::string, bool>("cafe", true));
    P.push_back(pair<std::string, bool>("leite", false));
    P.push_back(pair<std::string, bool>("cerveja", true));
    
    this->novoExemplo(P);
    
    this->avaliar();
    
    
    
}





Classificador::Classificador(const Classificador& orig) {
}

Classificador::~Classificador() {
}

