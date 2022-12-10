#include<iostream>
using namespace std;
struct data{
    int x ; 
    float y ;
};
typedef struct data d ;

int main()
{
  d d1 , d2 ; 
  d arr[2] = {d1 ,d2};
  arr[0].x = 10 ;
  cout<<arr[0].x;
}