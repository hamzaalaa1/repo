#ifndef RECTANGLE_H
#define RECTANGLE_H
class Rectangle 
{
 public : Rectangle(double = 1, double = 1);
          double perimeter();
          double area ();
          void setLenth(double);
          void setWidth(double);
          double getLenth();
          double getWidth();
private : 
         double  length;
         double  width;          
 
};
#endif
