#include"chap.h"
#include<stdexcept>

using namespace std;
Shap::Shap(double hight ,double width){setWidth(width); setHigth(hight);};

void Shap::setWidth(double w)
{
    if(w < 0)
    throw invalid_argument("this is invalid arg\n");
    else
    width = w ;
}
double Shap::getWidth()const
{
    return width; 
}
void Shap::setHigth(double H)
{
    if(H < 0)
    throw invalid_argument("this is invalid arg\n");
    else
    hight = H ;
}
double Shap::getHight()const
{
    return hight; 
}
