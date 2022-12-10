#include<iostream>
using namespace std;
void swap(int *number1 ,int *number2);
void selectionSort(int *arr , int size);
void print(int *arr, int size );
class A{
 
 public : 
 int x = 100 ;
 A()
 {
    cout<<"hallo from the other side \n";
 }
 void a()
 {
  cout<<"hallo\n"<<x;
 }
 int c  ; 

};
class B : public A{
 public:    void x()
 {
  cout<<"hallo\n";
 c = 40;
 } 
 
    public : int c = 20;
};
using namespace std;
int main()
{
 B b ; 
 b.a();
 
}
 