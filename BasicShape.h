#ifndef BASICTSHAPE_H
#define BASICTSHAPE_H

class BasicShape {
protected:
    double area;

public:
    virtual void calcArea() = 0;

    double getArea() const {
        return area;
    }
};

#endif
