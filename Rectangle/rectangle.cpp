#include<stdexcept>
#include"rectangle.h"
using namespace std;
Rectangle::Rectangle(double L, double w)
{
setLenth(L);
setWidth(w);
}
double Rectangle::perimeter()
{
 return getLenth()*2 + getWidth()*2;
}
double Rectangle::area ()
{
 return getLenth()*getWidth();
}
void   Rectangle::setLenth(double l)
{
 if(l > 0.0 && l < 20.0)
 {
   length = l;
 }
  else
  {
   throw invalid_argument("out of range value"); 
  }
}
void   Rectangle::setWidth(double w)
{
 if(w > 0.0 && w < 20.0)
 {
   width = w;
 }
  else
  {
   throw invalid_argument("out of range value"); 
  }
}
double Rectangle::getLenth()
{
 return length;
}
double Rectangle::getWidth()
{
 return width;
}
