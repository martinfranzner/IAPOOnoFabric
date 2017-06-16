/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   OpFile.cpp
 * Author: martinfranzner
 * 
 * Created on May 18, 2017, 4:53 PM
 */
#include <iostream>
#include <fstream>
#include <string>
#include "OpFile.h"

using namespace std;
OpFile::OpFile(string  nomeDeArquivo) : nomeArquivo(nomeDeArquivo){
    
}


OpFile::OpFile(const OpFile& orig) {
}

void OpFile::leitura() {
  ifstream meuArquivo;

  string nome = nomeArquivo;
  string linha;

  meuArquivo.open(nome);

  if (meuArquivo.is_open())
  {
    while(getline(meuArquivo,linha))
    {
      cout << linha << '\n';
    }
    meuArquivo.close();
  }

  else cout << "Erro de abertura de arquivo\n"; 
}

list<string> & OpFile::toLineString()
{
	ifstream meuArquivo;

	string nome = nomeArquivo;
	string linha;
	list<string> * L = new list<string>();

	meuArquivo.open(nome);

	if (meuArquivo.is_open())
	{
		while (getline(meuArquivo, linha))
		{
			L->push_back(linha);
		}
		meuArquivo.close();
	}
	else
	{
		cout << "Erro de abertura de arquivo";
	}

	return *L;
}

OpFile::~OpFile() {
}

