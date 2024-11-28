#include <iostream>
#include "Circle.h"
#include "Rectangle.h"

int main() {
    
    // Create a Circle object with center (0,0) and radius 5
    Circle circle(0, 0, 5);
    std::cout << "Circle Area: " << circle.getArea() << std::endl;

    // Create a Rectangle object with width 4 and length 6
    Rectangle rectangle(4, 6);
    std::cout << "Rectangle Area: " << rectangle.getArea() << std::endl;

    return 0;
}