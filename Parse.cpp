/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Parse.cpp
 * Author: martinfranzner
 * 
 * Created on May 23, 2017, 4:36 PM
 */

#include "Parse.h"
#include <vector>
#include <string>
#include <list>
#include <iostream>
#include <sstream>
#include <string.h>
#include <stdio.h>

Parse::Parse() {
}
vector<string>  Parse::doParse(string teste){
    //list< vector<string> > & Parse::doParse(list<string> L){
    //list< vector<string> > * LV = new list< vector<string> >();
    //entra com a lista de string onde, cada regra eh uma linha
    //list<string>::iterator i;
    //for(i=L.begin(); i != L.end(); i++){
        //string teste = *i;
        teste = replaceChar(teste, '<', '/');
        teste = replaceChar(teste, '>', '/');
        teste = replaceChar(teste, ' ', '/');
        teste = replaceChar(teste, '[', '/');
        teste = replaceChar(teste, ']', '/');
        teste = replaceChar(teste, '%', '/');
        teste = replaceChar(teste, ';', '/');
        teste = replaceChar(teste, '\0', '/');
        //iterates each line to do the split
        vector<string> linhaSplit = split(teste, '/');
        //transform the line(the rule) in a vector of string after the split
        
        //LV->push_back(linhaSplit);
        /*
        for(int i = 0; i < linhaSplit.size(); ++i){
        cout << linhaSplit[i] << endl;
        }
        */

    //}
    //return *LV;
        return linhaSplit; 
}


vector<string> Parse::split(string str, char delimiter) {
  vector<string> internal;
  stringstream ss(str); // Turn the string into a stream.
  string tok;
  
    while(getline(ss, tok, delimiter)) {
      internal.push_back(tok);
    }
  
    return internal;
}

string Parse::replaceChar(string str, char ch1, char ch2) {
  for (int i = 0; i < str.length(); ++i) {
    if (str[i] == ch1)
      str[i] = ch2;
  }

  return str;
}

vector<string> Parse::splitT1(char * str, char * delimiter)
{
	vector<string> * v = new vector<string>();

	char * pch;
	char *next_token = NULL;

	pch = strtok_r(str, delimiter, &next_token);

	while (pch != NULL)
	{
		v->push_back(pch);

		pch = strtok_r(NULL, delimiter, &next_token);
	}

	return *v;
}
vector<string> Parse::splitT(const string str, const string delimiter)
{
	return splitT1((char *)str.c_str(), (char *)delimiter.c_str());
}

Parse::Parse(const Parse& orig) {
}

Parse::~Parse() {
}