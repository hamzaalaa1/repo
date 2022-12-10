#ifndef LIST_H
#define LIST_H
class List
{
  public : 
  List(int = 10);
  int &operator[](int);
  //int  operator[](int)const;
  int getSize();
  ~List();
  private:
  void helpfunction();
  int size ; 
  int *ptr ;
  int *tempPtr;
};
#endif