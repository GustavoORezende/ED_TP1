#include <iostream>
#include "../include/Objeto.h"

//Construtor
Objeto::Objeto(int objectNumber, double x, double y,double totalLength ){};

//getters
 int Objeto::getObjectNumber() const {
    return objectNumber;
 }; 

    double Objeto:: getTotalLength() const{
        return totalLength;
    };

    double Objeto::getBeginningX() const {
        return x;
    }; 
    double Objeto:: getEndX() const{
        return x + totalLength;
    };

    //Setters
    void Objeto::movementPosition(double newX, double newY){
        x = newX;
        y = newY;
    };