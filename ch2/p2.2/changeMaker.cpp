//
// Created by Diego Hernandez on 7/29/21.
//

#include "changeMaker.h"
#include <iostream>
#include<math.h>
using namespace std;
void changeMaker::makeChange(float money) {
    cout<< "--------------------------------------"<<endl;
    cout <<"|            Making change            |";
    cout<< "--------------------------------------"<<endl;
    for(int i = 0; i < sizeof(coins); i++){

        cout << floor(money/coins[i]) <<"currency units of value "<<coins[i];
        money = money/coins[i] - floor(money/coins[i]);
    }
}

void changeMaker::setCoins(float coinset[]) {
    for(int i = 0; i < sizeof(coinset); i++) {
        coins[i] = coinset[i];
    }
}

changeMaker::changeMaker(){
    float arr[] = {5.0,1.0,.25,.1,.05,.01};
    setCoins(arr);
}
