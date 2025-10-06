#ifndef CENA_H
#define CENA_H
#include "Objeto.h"
#include <iostream>
#include "VisibleSegment.h"

class Cena{
    private:
    double time;
    int maxCapacity;
    int segmentCounter;
    //ponteiro para um array de segmentos visíveis
    VisibleSegment *segments;

public:
//Construtor
Cena(double time, int maxCapacity);

//Getters
double getTime();
int getMaxCapacity();
int getSegmentCounter();

//metodos gerais
void addObject(Objeto *object);
void createScene() const;

//Destructor
~Cena();

};
#endif