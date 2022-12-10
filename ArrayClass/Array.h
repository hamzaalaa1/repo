#ifndef ARRAY_H
#define ARRAY_H
#include<iostream>

using namespace std;
class Array
{
  friend ostream &operator<<(ostream &output,Array &object);
  friend istream &operator>>(istream &istream,Array &object);
  public : 
  Array(int = 10);
  Array(Array &);
  Array(int ,int );
  int& operator()(int ,int);
  ~Array();
  int getSize();
  const Array &operator=(const Array &);
  bool operator==(const Array&);
  bool operator!=(const Array& right)
  {
    return !(*this == right);
  }
  int &operator[](int);
  int operator[](int)const; 
  private:
  int size ; 
  int *ptr ; 
  int indexs ; 
  int arraysNumbers ;
};
#endif 