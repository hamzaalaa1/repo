#ifndef STATIC_H
#define STATIC_H
class Static
{
    public  : Static();
    static int getCount();
    Static& returnReferance()
    {
        return (*this);
    }
    void print();
    private : 
    static int count ;  
    int c = 30; 
  const  int i = 20;
  //but here we can use static keyword  

};
#endif