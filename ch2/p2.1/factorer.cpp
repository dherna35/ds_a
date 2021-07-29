//
// Created by Diego Hernandez on 7/29/21.
//

#include "factorer.h"
#include <iostream>
using namespace std;

void factorer::setVar(const int& inVar){
    var = inVar;
    calculatePower();
}
void factorer::setBase(const int& inBase){
    base = inBase;
    calculatePower();
}
void factorer::printVar(){
    cout << "The variable value is: "<<var<< endl;
}
void factorer::printBase(){
    cout << "The base value is: "<<base<< endl;
}
void factorer::printPower(){
    cout << "The variable can be divided "<<power<<" times"<<endl;
}
void factorer::calculatePower(){
    if(base == 1){
        power = 1;
    }
    else{
        int varDivided = var;
        power = 0;
        while(varDivided >= base){
            varDivided /= base;
            power++;
        }
    }
}

factorer::factorer(){
    setBase(1);
    setVar(1);
    calculatePower();
}
factorer::factorer(const int& var, const int& base = 1){
    setBase(1);
    setVar(1);
    calculatePower();
}
