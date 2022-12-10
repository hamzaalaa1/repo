#ifndef RECTANGLE_H
#define RECTANGLE_H

#include"TowDShap.h"
class Rectangle:public TowDShap
{
    public :
        Rectangle(double=0.0 , double=0.0);
        virtual double area();
        virtual void draw(char);
};
#endif