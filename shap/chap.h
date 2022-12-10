#ifndef SHAP_H
#define SHAP_H

class Shap
{
        public  : 
            Shap(double = 0.0, double = 0.0);
            virtual double area() = 0;
          
            void setWidth(double);
            double getWidth()const;

            void setHigth(double);
            double getHight()const;

            virtual void draw(char) = 0 ;
        private : 
             double hight ; 
             double width ;    
};
#endif