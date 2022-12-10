#include<iostream>
#include<vector>
#include<string>
#include"chap.h"
#include"TowDShap.h"
#include"ThreeDshap.h"
#include"rectangle.h"
#include"squar.h"
#include"qube.h"
using namespace std;

void printdrawd(vector<Shap*>&v);
int  printtype(Shap *temp);
int main()
{
    vector<Shap *>s(3);

    ThreeDShap *TDS;
    int choice  ; 
   
    int counter = 0 ;
    double hight ,lenght , width;
   while (true)
   {
     cout<<"enter your shape to draw it 1 for Two D shap 2 for three D shap\n";
     cin>>choice;
     if(choice == 1) 
     {
      cout << "1 :triangle\n2 :rectangle\n";
      cin>>choice;
       if(choice == 1)
       {
           cout<<"enter the width and hight \n";
           cin>>hight>>width;
           s[counter] = new Rectangle(hight,width);
           cout << "the area equal :"<<s[counter]->area()<<endl;
           TDS = (ThreeDShap*)s[counter];
           TDS->draw('*');
           counter ++; 
           printdrawd(s);
       }
       if(choice == 2 )
       break;
     }
   }
 
   for(int i = 0;i <  s.size();++i)
   {
    delete s[i];
   }
   
}
int  printtype(Shap *temp)
{
  Shap *T = dynamic_cast<TowDShap*>(temp);
  Shap *T1= dynamic_cast<ThreeDShap*>(temp);
  if(T)
  {
    return 1;
  }else if(T1)
  {
    return 2;
  }
  return 0;
}
void printdrawd(vector<Shap*>&v)
{
  TowDShap *TDS;
  for(int i = 0 ;i< v.size();++i)
  {
    if(v[i])
    {
          TDS =  (TowDShap *)v[i];
          TDS->draw('*');    
    }
  }
  cout<<"hallow";
}