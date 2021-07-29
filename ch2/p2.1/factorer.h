//
// Created by Diego Hernandez on 7/29/21.
//

#ifndef CH2_P1_FACTORER_H
#define CH2_P1_FACTORER_H


class factorer {
public:
    virtual void setVar(const int& inVar);
    virtual void setBase(const int& inBase);
    virtual void calculatePower();
    virtual void printBase();
    virtual void printVar();
    virtual void printPower();
    factorer();
    factorer(const int& var, const int& base);
private:
    int var;
    int base;
    int power;
};


#endif //CH2_P1_FACTORER_H
