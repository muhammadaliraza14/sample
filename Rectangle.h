#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "BasicShape.h"

class Rectangle : public BasicShape {
private:
    long width;
    long length;

public:
    // Constructor
    Rectangle(long w, long l)
    {
        width = w;
        length = l; 
        calcArea(); 
    }

    // Getters
    long getWidth() const 
    { 
        return width; 
    }

    long getLength() const 
    { 
        return length; 
    }

    // Overridden calcArea()
    void calcArea() {
        area = width * length;
    }
};

#endif
