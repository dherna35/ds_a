//
// Created by Diego Hernandez on 7/29/21.
//

#include "factorer.h"
#include <iostream>
using namespace std;
int main(){
    //testing the factorer class
    factorer test1;
    test1.setVar(123);
    test1.setBase(2);
    test1.printBase();
    test1.printPower();
    test1.printVar();
    return 0;
}