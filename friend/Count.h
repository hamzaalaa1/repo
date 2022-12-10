#ifndef COUNT_H
#define COUNT_H
class Count{
    friend void setX(Count & , int );
    friend void setX(Count & ,Count &,int &);
    public : 
      Count();
      void print();
    private :
       int x = 500;  
};
#endif