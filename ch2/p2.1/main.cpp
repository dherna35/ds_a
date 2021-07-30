//
// Created by Diego Hernandez on 7/29/21.
//

#include "factorer.h"
#include <math.h>
#include <iostream>
using namespace std;
int main(){
    //testing the factorer class
    factorer test1;
    test1.setVar(pow(2,31));
    test1.setBase(2);
    test1.printBase();
    test1.printPower();
    test1.printVar();
    cout << pow(2,128);
    return 0;
}