#ifndef OBJETO_H
#define OBJETO_H
#include <iostream>




class Objeto {

    private:
    double x;
    double y;
    int objectNumber;
    double totalLength;

    public:
    //Construtor
    Objeto(int objectNumber, double x, double y,double totalLength );

    //Getters
    int getObjectNumber() const;

    double getTotalLength() const;

    double getCenter() const;

    double getBeginningX() const;
    double getEndX() const;


    //Setters 
    void movementPosition(double newX, double newY) const;

};

#endif