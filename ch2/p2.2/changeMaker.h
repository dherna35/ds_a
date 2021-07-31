//
// Created by Diego Hernandez on 7/29/21.
//

#ifndef CH2_P2_1_CHANGEMAKER_H
#define CH2_P2_1_CHANGEMAKER_H


class changeMaker {
public:
    virtual void makeChange(float money);
    virtual void setCoins(float coinset[]);
    changeMaker();
private:
    float coins[];
};


#endif //CH2_P2_1_CHANGEMAKER_H
