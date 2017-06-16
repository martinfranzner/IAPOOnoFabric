/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Parse.h
 * Author: martinfranzner
 *
 * Created on May 23, 2017, 4:36 PM
 */
#include <vector>
#include <string>
#include <list>
#include <iostream>

#ifndef PARSE_H
#define PARSE_H
using namespace std;
class Parse {
public:
    Parse();
    vector<string>  doParse(string teste);
    vector<string> split(string str, char delimiter);
    string replaceChar(string str, char ch1, char ch2);
    vector<string> splitT1(char * str, char * delimiter);
    vector<string> splitT(const string str, const string delimiter);
    
    Parse(const Parse& orig);
    virtual ~Parse();
private:
    

};

#endif /* PARSE_H */

