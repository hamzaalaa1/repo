#include<stdexcept>
#include"ThreeDshap.h"

ThreeDShap::ThreeDShap(double H , double W , double L):Shap(H,W){setLenth(L);}

void ThreeDShap::setLenth(double L)
{
    if(L < 0)
    throw std::invalid_argument("this is invalied argumenT\n");
    else 
    lenth = L;
}
double ThreeDShap::getLenth()const 
{
    return lenth;
}
