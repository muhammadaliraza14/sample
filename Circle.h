#ifndef CIRCLE_H
#define CIRCLE_H

#include "BasicShape.h"

class Circle : public BasicShape {
private:
    long center_x;   
    long center_y;   
    double radius; 

public:
    // Constructor
    Circle(long x, long y, double r){
        center_x = x;
        center_y = y; 
        radius = r;
        calcArea(); 
    }

    // Getters
    long getCenterX() const 
    { 
        return center_x; 
    }

    long getCenterY() const 
    { 
        return center_y; 
    }

    // Overridden calcArea()
    void calcArea() {
        area = 3.14159 * radius * radius;
    }
};

#endif
